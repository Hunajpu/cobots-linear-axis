// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_data:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_
#define ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_

#include "ros2_data/srv/detail/gripper_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_data
{

namespace srv
{

namespace builder
{

class Init_GripperPose_Request_pose
{
public:
  Init_GripperPose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::srv::GripperPose_Request pose(::ros2_data::srv::GripperPose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::srv::GripperPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::srv::GripperPose_Request>()
{
  return ros2_data::srv::builder::Init_GripperPose_Request_pose();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace srv
{

namespace builder
{

class Init_GripperPose_Response_result
{
public:
  Init_GripperPose_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::srv::GripperPose_Response result(::ros2_data::srv::GripperPose_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::srv::GripperPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::srv::GripperPose_Response>()
{
  return ros2_data::srv::builder::Init_GripperPose_Response_result();
}

}  // namespace ros2_data

#endif  // ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__BUILDER_HPP_
