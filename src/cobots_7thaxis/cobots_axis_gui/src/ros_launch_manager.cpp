#include "cobots_axis_gui/ros_launch_manager.hpp"

ROSLaunchManager::ROSLaunchManager(ROSLaunchManager const &)
{
}

ROSLaunchManager::ROSLaunchManager()
{
    std::atomic_init(&m_running, true);

    m_thread = std::thread(&ROSLaunchManager::wait, this);
}

ROSLaunchManager::~ROSLaunchManager() 
{
    if (m_running.load()) {
        m_running.store(false);

        if (m_thread.joinable()) {
            m_thread.join();
        }
    }
}

//template<typename... Args>
pid_t ROSLaunchManager::start(char* argument_list[]) 
{
    //std::vector<std::string> args_vector = { args... };
    char* command = "ros2";
    //char *argument_list[] = {"ros2", "launch", "ur3_ros2_moveit2", "ur3.launch.py", NULL};

    //if (args_vector.size() > 0) {
    if (3 > 0) {            
        pid_t pid = fork();

        if (pid == 0) {
            // setsid();
            
            // signal(SIGINT, SIG_IGN);
            
            // fclose(stdout);
            // fclose(stdin);
            // fclose(stderr);

            int status_code = execvp(command, argument_list);

            if (status_code == -1) {
                RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"),"Terminated Incorrectly\n");
            }
        }
        else {
            //std::lock_guard<std::mutex> scoped_lock(m_mutex);

            //std::string args_string = std::accumulate(std::next(std::begin(args_vector)), std::end(args_vector), args_vector[0], [](std::string lhs, std::string rhs) -> std::string { return lhs + " " + rhs; });

            RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Starting ros2 launch with PID %d", pid);

            //m_pids.push_back(pid);
        }

        return pid;
    }
    else {
        throw std::runtime_error("ROSLaunchManager::start - No arguments provided");
    }
}

void ROSLaunchManager::stop(pid_t const &pid, int32_t const &signal) 
{
    char *gazebo_proc_names[] = {"gzserver", "gzclient"};
    //std::scoped_lock<std::mutex> scoped_lock(m_mutex);
    //std::lock_guard<std::mutex> scoped_lock(m_mutex);

    //auto pid_it = std::find(std::begin(m_pids), std::end(m_pids), pid);

    kill(pid, signal);

    //ROS_INFO("Stopping process with PID %d and signal %d", pid, signal);
    RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Stopping process with PID %d and signal %d", pid, signal);

    // Kill gazebo nodes
    for(int i = 0; i<2; i++)
    {
        pid_t gazebo_pid = this->proc_find(gazebo_proc_names[i]);
        if(gazebo_pid == -1)
        {
            RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "%s: not found", gazebo_proc_names[i]);
        }
        else
        {
            kill(gazebo_pid, signal);
            RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Stopping process with PID %d and signal %d", gazebo_pid, signal);
        }
    }
}

void ROSLaunchManager::wait()
{
    while (m_running.load()) {
        std::lock_guard<std::mutex> scoped_lock(m_mutex);
        //std::scoped_lock<std::mutex> scoped_lock(m_mutex);

        for (auto pid_it = std::begin(m_pids); pid_it != std::end(m_pids); ++pid_it) {
            pid_t const pid = *pid_it;

            int32_t status;

            if (::waitpid(pid, &status, WUNTRACED | WCONTINUED | WNOHANG) == pid) {
                if (WIFEXITED(status)) {
                    
                    //ROS_INFO("PID %d exited with status %d", pid, WEXITSTATUS(status));
                    RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "PID %d exited with status %d", pid, WEXITSTATUS(status));

                    pid_it = m_pids.erase(pid_it);

                    if (pid_it == std::end(m_pids)) {
                        break;
                    }
                } 
                else if (WIFSIGNALED(status)) {
                    //ROS_INFO("PID %d killed with signal %d", pid, WTERMSIG(status));
                    RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "PID %d killed with signal %d", pid, WTERMSIG(status));

                    pid_it = m_pids.erase(pid_it);

                    if (pid_it == std::end(m_pids)) {
                        break;
                    }
                } 
                else if (WIFSTOPPED(status)) {
                    //ROS_INFO("PID %d stopped with signal %d", pid, WSTOPSIG(status));
                    RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "PID %d stopped with signal %d", pid, WSTOPSIG(status));
                } 
                else if (WIFCONTINUED(status)) {
                    //ROS_INFO("PID %d continued"   , pid);
                    RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "PID %d continued", pid);
                }
            }
        }
    }

    std::lock_guard<std::mutex> scoped_lock(m_mutex);
    //std::scoped_lock<std::mutex> scoped_lock(m_mutex);

    for (pid_t const &pid : m_pids) {
        ::kill(pid, SIGINT);

        int32_t status;

        ::waitpid(pid, &status, 0);
    }
}

pid_t ROSLaunchManager::proc_find(const char* name)
{
    DIR* dir;
    struct dirent* ent;
    char* endptr;
    char buf[512];

    if (!(dir = opendir("/proc"))) {
        RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Can't open /proc");
        //perror("can't open /proc");
        return -1;
    }

    while((ent = readdir(dir)) != NULL) {
        /* if endptr is not a null character, the directory is not
         * entirely numeric, so ignore it */
        long lpid = strtol(ent->d_name, &endptr, 10);
        if (*endptr != '\0') {
            continue;
        }

        /* try to open the cmdline file */
        snprintf(buf, sizeof(buf), "/proc/%ld/cmdline", lpid);
        FILE* fp = fopen(buf, "r");

        if (fp) {
            if (fgets(buf, sizeof(buf), fp) != NULL) {
                /* check the first token in the file, the program name */
                char* first = strtok(buf, " ");
                if (!strcmp(first, name)) {
                    fclose(fp);
                    closedir(dir);
                    return (pid_t)lpid;
                }
            }
            fclose(fp);
        }

    }

    closedir(dir);
    return -1;
}