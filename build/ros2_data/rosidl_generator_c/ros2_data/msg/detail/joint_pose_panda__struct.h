// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_data:msg/JointPosePanda.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__MSG__DETAIL__JOINT_POSE_PANDA__STRUCT_H_
#define ROS2_DATA__MSG__DETAIL__JOINT_POSE_PANDA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointPosePanda in the package ros2_data.
typedef struct ros2_data__msg__JointPosePanda
{
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
  double joint6;
  double joint7;
} ros2_data__msg__JointPosePanda;

// Struct for a sequence of ros2_data__msg__JointPosePanda.
typedef struct ros2_data__msg__JointPosePanda__Sequence
{
  ros2_data__msg__JointPosePanda * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__msg__JointPosePanda__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__MSG__DETAIL__JOINT_POSE_PANDA__STRUCT_H_
