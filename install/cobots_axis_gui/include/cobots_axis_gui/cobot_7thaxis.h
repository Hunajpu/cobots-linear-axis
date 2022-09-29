#ifndef COBOT_7THAXIS_H
#define COBOT_7THAXIS_H

// ROS2
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

// msgs
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/string.hpp>
#include <sensor_msgs/msg/joint_state.h>
#include "sensor_msgs/msg/joint_state.hpp"
#include "std_msgs/msg/string.hpp"
#include "control_msgs/action/follow_joint_trajectory.hpp"

// rqt
#include <rqt_gui_cpp/plugin.h>

// Qt
#include <QWidget>

// Custom UI
#include <cobots_axis_gui/ui_cobot_7thaxis.h>
#include "cobots_axis_gui/ros_launch_manager.hpp"

namespace rqt_plugin {
  class Cobot7thAxis;

class Cobot7thAxis : public rqt_gui_cpp::Plugin
{
    Q_OBJECT

    public:
        Cobot7thAxis();

        virtual void initPlugin(qt_gui_cpp::PluginContext& context) override;

        virtual void shutdownPlugin() override;

        virtual void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const override;

        virtual void restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings) override;

        virtual ~Cobot7thAxis() override;

        // Follow Joint Trayectory action client
        using GoalHandleFollowJointTrayectory = rclcpp_action::ClientGoalHandle<control_msgs::action::FollowJointTrajectory>;


    private:
        // Qt UI
        Ui::LinearAxisGUI ui_;
        QWidget * widget_;
        float newAxisPos;
        // ROS launch manager
        ROSLaunchManager ros_launch_manager;
        pid_t rtabmap_pid;
        // Joint States topic
        void topic_callback(const sensor_msgs::msg::JointState::SharedPtr msg); //const;
        rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr linear_axis_status_;
        trajectory_msgs::msg::JointTrajectoryPoint actual_point;

        std::vector<std::string> joint_names;
        std::vector<std::double_t> positions;
        // Joint State action client
        rclcpp_action::Client<control_msgs::action::FollowJointTrajectory>::SharedPtr client_ptr_;
        void goal_response_callback(std::shared_future<GoalHandleFollowJointTrayectory::SharedPtr> future)
        {
            auto goal_handle = future.get();
            if (!goal_handle) {
                RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Goal was rejected by server");
            } else {
                RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Goal accepted by server, waiting for result");
            }
        }
        void feedback_callback(
            GoalHandleFollowJointTrayectory::SharedPtr, 
            const std::shared_ptr<const control_msgs::action::FollowJointTrajectory::Feedback> feedback)
            {
                //RCLCPP_INFO(rclcpp::get_logger("cobots_axis_gui"), "Getting feedback");
            }
        void result_callback(const GoalHandleFollowJointTrayectory::WrappedResult & result)
        {
            switch (result.code) {
                case rclcpp_action::ResultCode::SUCCEEDED:
                    RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Goal reached");
                    break;
                case rclcpp_action::ResultCode::ABORTED:
                    RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Goal was aborted");
                    return;
                case rclcpp_action::ResultCode::CANCELED:
                    RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Goal was canceled");
                    return;
                default:
                    RCLCPP_ERROR(rclcpp::get_logger("cobots_axis_gui"), "Unknown result code");
                    return;
            }
        }

    protected slots:
        void clickRunButton();
        void clickStopButton();
        void clickReloadButton();
        void clickHomeButton();
        void clickSendPosButton();
        void positionValueChange(int pos);
};

}

#endif // COBOT_7THAXIS_H
