// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_data:srv/JointPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__SRV__DETAIL__JOINT_POSE__TRAITS_HPP_
#define ROS2_DATA__SRV__DETAIL__JOINT_POSE__TRAITS_HPP_

#include "ros2_data/srv/detail/joint_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::srv::JointPose_Request>()
{
  return "ros2_data::srv::JointPose_Request";
}

template<>
inline const char * name<ros2_data::srv::JointPose_Request>()
{
  return "ros2_data/srv/JointPose_Request";
}

template<>
struct has_fixed_size<ros2_data::srv::JointPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_data::srv::JointPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_data::srv::JointPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::srv::JointPose_Response>()
{
  return "ros2_data::srv::JointPose_Response";
}

template<>
inline const char * name<ros2_data::srv::JointPose_Response>()
{
  return "ros2_data/srv/JointPose_Response";
}

template<>
struct has_fixed_size<ros2_data::srv::JointPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_data::srv::JointPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_data::srv::JointPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_data::srv::JointPose>()
{
  return "ros2_data::srv::JointPose";
}

template<>
inline const char * name<ros2_data::srv::JointPose>()
{
  return "ros2_data/srv/JointPose";
}

template<>
struct has_fixed_size<ros2_data::srv::JointPose>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_data::srv::JointPose_Request>::value &&
    has_fixed_size<ros2_data::srv::JointPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_data::srv::JointPose>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_data::srv::JointPose_Request>::value &&
    has_bounded_size<ros2_data::srv::JointPose_Response>::value
  >
{
};

template<>
struct is_service<ros2_data::srv::JointPose>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_data::srv::JointPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_data::srv::JointPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_DATA__SRV__DETAIL__JOINT_POSE__TRAITS_HPP_
