#include "cobots_axis_gui/cobot_7thaxis.h"
#include "cobots_axis_gui/mytoolbutton.h"
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <pluginlib/class_list_macros.hpp>
#include <QStringList>
#include <QDir>

PLUGINLIB_EXPORT_CLASS(rqt_plugin::Cobot7thAxis, rqt_gui_cpp::Plugin)

namespace rqt_plugin {

  Cobot7thAxis::Cobot7thAxis() :
    rqt_gui_cpp::Plugin(),
    widget_(0)
  {
    ;
  }

  void Cobot7thAxis::initPlugin(qt_gui_cpp::PluginContext &context)
  {
    // Access standalone command line arguments
    QStringList argv = context.argv();

    // Create a QWidget
    widget_ = new QWidget();

    // Extend the widget with all attributes and children from UI file
    ui_.setupUi(widget_);

    // add widget to the user interface
    context.addWidget(widget_);

    //Edit Leds propieties
    MyToolButton *qLeds[3] = {ui_.connectionLed, ui_.sensor1Led, ui_.sensor2Led};
    for(int i = 0; i<3; i++){
      qLeds[i]->setLedColor(QColor(0,255,0,255));
      qLeds[i]->setText2("");
      qLeds[i]->turnOff();
    }
    // Add icons to the buttons
    QString dir_name = ament_index_cpp::get_package_share_directory("cobots_axis_gui").c_str();
    ui_.stopBtn->setIcon(QIcon(dir_name + "/resource/stop.png"));
    ui_.stopBtn->setIconSize(QSize(200,50));
    ui_.homeBtn->setIcon(QIcon(dir_name + "/resource/home.jpeg"));
    ui_.homeBtn->setIconSize(QSize(200,50));
    ui_.reloadBtn->setIcon(QIcon(dir_name + "/resource/reload.png"));
    ui_.reloadBtn->setIconSize(QSize(16,16));

    // Connect UI signals
    connect(ui_.runRVIZ, SIGNAL(clicked()), this, SLOT(clickRunButton()));
    connect(ui_.stopBtn, SIGNAL(clicked()), this, SLOT(clickStopButton()));
    connect(ui_.reloadBtn, SIGNAL(clicked()), this, SLOT(clickReloadButton()));
    connect(ui_.homeBtn, SIGNAL(clicked()), this, SLOT(clickHomeButton()));
    connect(ui_.sendPosButton, SIGNAL(clicked()), this, SLOT(clickSendPosButton()));
    connect(ui_.positionControl, SIGNAL(valueChanged(int)), this, SLOT(positionValueChange(int)));

    client_ptr_ = rclcpp_action::create_client<control_msgs::action::FollowJointTrajectory>(
      node_,
      "ur3_robot_controller/follow_joint_trajectory"
    );

    linear_axis_status_ = node_->create_subscription<sensor_msgs::msg::JointState>(
      "joint_states", 1, std::bind(&Cobot7thAxis::topic_callback, this, std::placeholders::_1));
  }

  void Cobot7thAxis::positionValueChange(int pos)
  {
    this->newAxisPos = static_cast<float>(pos)/1000;
    ui_.positionDisplay_2->display(this->newAxisPos);
    //RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Pos value %f", this->newAxisPos);
  }
  
  void Cobot7thAxis::topic_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    if(ui_.positionDisplay->isEnabled())
    {
      // Get the linear axis joint information
      joint_names = msg->name;
      positions = msg->position;
      //actual_point.positions = positions;
      auto it = std::find(joint_names.begin(), joint_names.end(), "base_axis_joint");
      if (it != joint_names.end())
      {
        int index = it - joint_names.begin();
        ui_.positionDisplay->display(positions.at(index));
      }
      else
      {
        RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "base_axis_joint was not found in the controllers");
      }
    }
  }

  void Cobot7thAxis::clickRunButton()
  {
    char *argument_list[] = {"ros2", "launch", "ur3_ros2_moveit2", "ur3.launch.py", NULL};
    bool validLaunchFile = true;

    // Set launch file depending of the robot that is selected (0 - UR3, 1 - Panda, 2 - xArm, 3 - Jaco, 4 - Aubo i3)
    switch (ui_.robotSelection->currentIndex())
    {
    case 1:
      argument_list[2] = "ur3_ros2_moveit2";
      break;
    case 2:
      argument_list[2] = "panda_ros2_moveit2";
      break;
    
    default:
      validLaunchFile = false;
      break;
    }

    // Set launch file depending if hardware or simulaion is selected.
    if(ui_.simRadioBtn->isChecked() && ui_.simRadioBtn_2->isChecked())
    {
      argument_list[3] = "sim.launch.py";
    }
    else if(ui_.hwRadioBtn->isChecked() && ui_.simRadioBtn_2->isChecked())
    {
      argument_list[3] = "hw.launch.py";
    }
    else
    {
      validLaunchFile = false;
      RCLCPP_WARN(rclcpp::get_logger("cobots_axis_gui"),"Please select a valid planing configuration");
    }

    if(validLaunchFile)
    {
      try {
        rtabmap_pid = ros_launch_manager.start(argument_list);
        // Disable the run buttons
        ui_.runRVIZ->setDisabled(true);
        ui_.runCode->setDisabled(true);
        // Enable stop button
        ui_.stopBtn->setDisabled(false);
      }
      catch (std::exception const &exception) {
          RCLCPP_WARN(rclcpp::get_logger("cobots_axis_gui"),"%s", exception.what());
      }
    }
  }

  void Cobot7thAxis::clickStopButton()
  {
    try {
    ros_launch_manager.stop(rtabmap_pid, SIGINT);
    // Disable the stop button
    ui_.stopBtn->setDisabled(true);
    // Enable the run buttons
    ui_.runRVIZ->setDisabled(false);
    ui_.runCode->setDisabled(false);
    
    }
    catch (std::exception const &exception) {
        RCLCPP_WARN(rclcpp::get_logger("cobots_axis_gui"),"%s", exception.what());
    }   
  }

  void Cobot7thAxis::clickHomeButton()
  {
    using namespace std::placeholders;
    
    if(!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Action server not available after waiting");
      //return;
    }
    else
    {
      auto goal_msg = control_msgs::action::FollowJointTrajectory::Goal();
      // Set a trajectory
      trajectory_msgs::msg::JointTrajectory joint_state;
      std::vector<trajectory_msgs::msg::JointTrajectoryPoint> points_n(2);
      joint_state.header.stamp = node_->now();
      joint_state.joint_names.resize(7);
      joint_state.joint_names = this->joint_names;
      // Set points
      points_n[0].positions.resize(7);
      points_n[0].positions = this->positions;
      points_n[1].positions.resize(7);
      points_n[1].time_from_start.sec = 3;
      //points_n[0].set__positions(actual_point.positions);
      for(int i=0; i<7; i++)
      {
        points_n[1].positions.at(i) = 0.0;
      }
      joint_state.points = points_n;
      //goal_msg.set__trajectory();
      goal_msg.set__trajectory(joint_state);

      RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Sending goal");

      auto send_goal_options = rclcpp_action::Client<control_msgs::action::FollowJointTrajectory>::SendGoalOptions();
      send_goal_options.goal_response_callback = 
        std::bind(&Cobot7thAxis::goal_response_callback, this, _1);
      send_goal_options.feedback_callback = 
        std::bind(&Cobot7thAxis::feedback_callback, this, _1, _2);
      send_goal_options.result_callback =
        std::bind(&Cobot7thAxis::result_callback, this, _1);
      this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
    }
  }

  void Cobot7thAxis::clickSendPosButton()
  {
    using namespace std::placeholders;
    
    if(!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Action server not available after waiting");
    }
    else
    {
      auto goal_msg = control_msgs::action::FollowJointTrajectory::Goal();
      // Set a trajectory
      trajectory_msgs::msg::JointTrajectory joint_state;
      std::vector<trajectory_msgs::msg::JointTrajectoryPoint> points_n(2);
      joint_state.header.stamp = node_->now();
      joint_state.joint_names.resize(7);
      joint_state.joint_names = this->joint_names;
      // Set points
      points_n[0].positions.resize(7);
      points_n[0].positions = this->positions;
      points_n[1].positions.resize(7);
      points_n[1].positions = this->positions;
      points_n[1].time_from_start.sec = 3;
      // Move only the linear axis
      auto it = std::find(joint_names.begin(), joint_names.end(), "base_axis_joint");
      if (it != joint_names.end())
      {
        int index = it - joint_names.begin();
        points_n[1].positions.at(index) = this->newAxisPos;
      }
      else
      {
        RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "base_axis_joint was not found in the controllers");
      }
      joint_state.points = points_n;

      goal_msg.set__trajectory(joint_state);

      RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Sending goal");

      auto send_goal_options = rclcpp_action::Client<control_msgs::action::FollowJointTrajectory>::SendGoalOptions();
      send_goal_options.goal_response_callback = 
        std::bind(&Cobot7thAxis::goal_response_callback, this, _1);
      send_goal_options.feedback_callback = 
        std::bind(&Cobot7thAxis::feedback_callback, this, _1, _2);
      send_goal_options.result_callback =
        std::bind(&Cobot7thAxis::result_callback, this, _1);
      this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
    }
  }

  void Cobot7thAxis::clickReloadButton()
  {
    std::vector<std::string> running_nodes;
    running_nodes = node_->get_node_names();
    auto it = std::find(running_nodes.begin(), running_nodes.end(), "/ur3_robot_controller");
    if(it != running_nodes.end())
    {
      ui_.connectionLed->turnOn();
      // Enable manual controls
      ui_.homeBtn->setDisabled(false);
      ui_.sendPosButton->setDisabled(false);
      ui_.positionDisplay->setDisabled(false);
      ui_.positionControl->setDisabled(false);
    }
    else
    {
      ui_.connectionLed->turnOff();
      // Disable manual controls
      ui_.homeBtn->setDisabled(true);
      ui_.sendPosButton->setDisabled(true);
      ui_.positionDisplay->setDisabled(true);
      ui_.positionControl->setDisabled(true);
    }
    ui_.connectionLed->repaint();
  }
  void Cobot7thAxis::saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const
  {
      ;
  }

  void Cobot7thAxis::restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings)
  {
      ;
  }

  void Cobot7thAxis::shutdownPlugin()
  {
    ;
  }

  Cobot7thAxis::~Cobot7thAxis()
  {
    if(widget_)
      delete widget_;
  }

} // namespace rqt_plugin
