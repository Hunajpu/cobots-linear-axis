// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_data:srv/JointPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__SRV__DETAIL__JOINT_POSE__STRUCT_H_
#define ROS2_DATA__SRV__DETAIL__JOINT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/JointPose in the package ros2_data.
typedef struct ros2_data__srv__JointPose_Request
{
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
  double joint6;
} ros2_data__srv__JointPose_Request;

// Struct for a sequence of ros2_data__srv__JointPose_Request.
typedef struct ros2_data__srv__JointPose_Request__Sequence
{
  ros2_data__srv__JointPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__srv__JointPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/JointPose in the package ros2_data.
typedef struct ros2_data__srv__JointPose_Response
{
  rosidl_runtime_c__String result;
} ros2_data__srv__JointPose_Response;

// Struct for a sequence of ros2_data__srv__JointPose_Response.
typedef struct ros2_data__srv__JointPose_Response__Sequence
{
  ros2_data__srv__JointPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_data__srv__JointPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__SRV__DETAIL__JOINT_POSE__STRUCT_H_
