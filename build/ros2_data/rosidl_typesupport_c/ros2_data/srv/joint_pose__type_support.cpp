// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ros2_data:srv/JointPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_data/msg/rosidl_typesupport_c__visibility_control.h"
#include "ros2_data/srv/detail/joint_pose__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPose_Request_type_support_ids_t;

static const _JointPose_Request_type_support_ids_t _JointPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPose_Request_type_support_symbol_names_t _JointPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, srv, JointPose_Request)),
  }
};

typedef struct _JointPose_Request_type_support_data_t
{
  void * data[2];
} _JointPose_Request_type_support_data_t;

static _JointPose_Request_type_support_data_t _JointPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPose_Request_message_typesupport_map = {
  2,
  "ros2_data",
  &_JointPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_JointPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_JointPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPose_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPose_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, srv, JointPose_Request)() {
  return &::ros2_data::srv::rosidl_typesupport_c::JointPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "ros2_data/srv/detail/joint_pose__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPose_Response_type_support_ids_t;

static const _JointPose_Response_type_support_ids_t _JointPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPose_Response_type_support_symbol_names_t _JointPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, srv, JointPose_Response)),
  }
};

typedef struct _JointPose_Response_type_support_data_t
{
  void * data[2];
} _JointPose_Response_type_support_data_t;

static _JointPose_Response_type_support_data_t _JointPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPose_Response_message_typesupport_map = {
  2,
  "ros2_data",
  &_JointPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_JointPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_JointPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointPose_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPose_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ros2_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, srv, JointPose_Response)() {
  return &::ros2_data::srv::rosidl_typesupport_c::JointPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_data/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ros2_data
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _JointPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointPose_type_support_ids_t;

static const _JointPose_type_support_ids_t _JointPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointPose_type_support_symbol_names_t _JointPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_data, srv, JointPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_data, srv, JointPose)),
  }
};

typedef struct _JointPose_type_support_data_t
{
  void * data[2];
} _JointPose_type_support_data_t;

static _JointPose_type_support_data_t _JointPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointPose_service_typesupport_map = {
  2,
  "ros2_data",
  &_JointPose_service_typesupport_ids.typesupport_identifier[0],
  &_JointPose_service_typesupport_symbol_names.symbol_name[0],
  &_JointPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t JointPose_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointPose_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_data

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ros2_data
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_data, srv, JointPose)() {
  return &::ros2_data::srv::rosidl_typesupport_c::JointPose_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
