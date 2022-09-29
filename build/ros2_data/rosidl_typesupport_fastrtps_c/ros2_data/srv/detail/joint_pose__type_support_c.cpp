// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_data:srv/JointPose.idl
// generated code does not contain a copyright notice
#include "ros2_data/srv/detail/joint_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_data/srv/detail/joint_pose__struct.h"
#include "ros2_data/srv/detail/joint_pose__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JointPose_Request__ros_msg_type = ros2_data__srv__JointPose_Request;

static bool _JointPose_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPose_Request__ros_msg_type * ros_message = static_cast<const _JointPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr << ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr << ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr << ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr << ros_message->joint4;
  }

  // Field name: joint5
  {
    cdr << ros_message->joint5;
  }

  // Field name: joint6
  {
    cdr << ros_message->joint6;
  }

  return true;
}

static bool _JointPose_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPose_Request__ros_msg_type * ros_message = static_cast<_JointPose_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint1
  {
    cdr >> ros_message->joint1;
  }

  // Field name: joint2
  {
    cdr >> ros_message->joint2;
  }

  // Field name: joint3
  {
    cdr >> ros_message->joint3;
  }

  // Field name: joint4
  {
    cdr >> ros_message->joint4;
  }

  // Field name: joint5
  {
    cdr >> ros_message->joint5;
  }

  // Field name: joint6
  {
    cdr >> ros_message->joint6;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_data
size_t get_serialized_size_ros2_data__srv__JointPose_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPose_Request__ros_msg_type * ros_message = static_cast<const _JointPose_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint1
  {
    size_t item_size = sizeof(ros_message->joint1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint2
  {
    size_t item_size = sizeof(ros_message->joint2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint3
  {
    size_t item_size = sizeof(ros_message->joint3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint4
  {
    size_t item_size = sizeof(ros_message->joint4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint5
  {
    size_t item_size = sizeof(ros_message->joint5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint6
  {
    size_t item_size = sizeof(ros_message->joint6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointPose_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_data__srv__JointPose_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_data
size_t max_serialized_size_ros2_data__srv__JointPose_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joint1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _JointPose_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_data__srv__JointPose_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointPose_Request = {
  "ros2_data::srv",
  "JointPose_Request",
  _JointPose_Request__cdr_serialize,
  _JointPose_Request__cdr_deserialize,
  _JointPose_Request__get_serialized_size,
  _JointPose_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointPose_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPose_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Request)() {
  return &_JointPose_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ros2_data/srv/detail/joint_pose__struct.h"
// already included above
// #include "ros2_data/srv/detail/joint_pose__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // result
#include "rosidl_runtime_c/string_functions.h"  // result

// forward declare type support functions


using _JointPose_Response__ros_msg_type = ros2_data__srv__JointPose_Response;

static bool _JointPose_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPose_Response__ros_msg_type * ros_message = static_cast<const _JointPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const rosidl_runtime_c__String * str = &ros_message->result;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _JointPose_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPose_Response__ros_msg_type * ros_message = static_cast<_JointPose_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result.data) {
      rosidl_runtime_c__String__init(&ros_message->result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_data
size_t get_serialized_size_ros2_data__srv__JointPose_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPose_Response__ros_msg_type * ros_message = static_cast<const _JointPose_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPose_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_data__srv__JointPose_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_data
size_t max_serialized_size_ros2_data__srv__JointPose_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _JointPose_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ros2_data__srv__JointPose_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointPose_Response = {
  "ros2_data::srv",
  "JointPose_Response",
  _JointPose_Response__cdr_serialize,
  _JointPose_Response__cdr_deserialize,
  _JointPose_Response__get_serialized_size,
  _JointPose_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointPose_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPose_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Response)() {
  return &_JointPose_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_data/srv/joint_pose.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JointPose__callbacks = {
  "ros2_data::srv",
  "JointPose",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Response)(),
};

static rosidl_service_type_support_t JointPose__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JointPose__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose)() {
  return &JointPose__handle;
}

#if defined(__cplusplus)
}
#endif
