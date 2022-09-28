#pragma once

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h> 

#include <cstdint>
#include <memory>
#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <numeric>
#include <rclcpp/rclcpp.hpp>


class ROSLaunchManager 
{
    std::vector<pid_t> m_pids;

    std::atomic<bool> m_running;
    std::thread m_thread;
    std::mutex m_mutex;
    
public:
    ROSLaunchManager(ROSLaunchManager const &);

    ROSLaunchManager();

    ~ROSLaunchManager();

    //template<typename... Args>
    int start(char* argument_list[]);

    void stop(pid_t const &pid, int32_t const &signal);

    pid_t proc_find(const char* name);

private:
    void wait();
};