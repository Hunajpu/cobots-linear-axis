// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_data:msg/JointPosePanda.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_data/msg/detail/joint_pose_panda__rosidl_typesupport_introspection_c.h"
#include "ros2_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_data/msg/detail/joint_pose_panda__functions.h"
#include "ros2_data/msg/detail/joint_pose_panda__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_data__msg__JointPosePanda__init(message_memory);
}

void JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_fini_function(void * message_memory)
{
  ros2_data__msg__JointPosePanda__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_member_array[7] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_data__msg__JointPosePanda, joint7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_members = {
  "ros2_data__msg",  // message namespace
  "JointPosePanda",  // message name
  7,  // number of fields
  sizeof(ros2_data__msg__JointPosePanda),
  JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_member_array,  // message members
  JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_init_function,  // function to initialize message memory (memory has to be allocated)
  JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_type_support_handle = {
  0,
  &JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, msg, JointPosePanda)() {
  if (!JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_type_support_handle.typesupport_identifier) {
    JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointPosePanda__rosidl_typesupport_introspection_c__JointPosePanda_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
