// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/ServiceRequestDetails.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosapi_msgs/srv/detail/service_request_details__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceRequestDetails_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::srv::ServiceRequestDetails_Request(_init);
}

void ServiceRequestDetails_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::srv::ServiceRequestDetails_Request *>(message_memory);
  typed_message->~ServiceRequestDetails_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceRequestDetails_Request_message_member_array[1] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceRequestDetails_Request, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceRequestDetails_Request_message_members = {
  "rosapi_msgs::srv",  // message namespace
  "ServiceRequestDetails_Request",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs::srv::ServiceRequestDetails_Request),
  ServiceRequestDetails_Request_message_member_array,  // message members
  ServiceRequestDetails_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceRequestDetails_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceRequestDetails_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceRequestDetails_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::ServiceRequestDetails_Request>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceRequestDetails_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceRequestDetails_Request)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceRequestDetails_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_request_details__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ServiceRequestDetails_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosapi_msgs::srv::ServiceRequestDetails_Response(_init);
}

void ServiceRequestDetails_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosapi_msgs::srv::ServiceRequestDetails_Response *>(message_memory);
  typed_message->~ServiceRequestDetails_Response();
}

size_t size_function__ServiceRequestDetails_Response__typedefs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rosapi_msgs::msg::TypeDef> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ServiceRequestDetails_Response__typedefs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rosapi_msgs::msg::TypeDef> *>(untyped_member);
  return &member[index];
}

void * get_function__ServiceRequestDetails_Response__typedefs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rosapi_msgs::msg::TypeDef> *>(untyped_member);
  return &member[index];
}

void resize_function__ServiceRequestDetails_Response__typedefs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rosapi_msgs::msg::TypeDef> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceRequestDetails_Response_message_member_array[1] = {
  {
    "typedefs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosapi_msgs::msg::TypeDef>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi_msgs::srv::ServiceRequestDetails_Response, typedefs),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServiceRequestDetails_Response__typedefs,  // size() function pointer
    get_const_function__ServiceRequestDetails_Response__typedefs,  // get_const(index) function pointer
    get_function__ServiceRequestDetails_Response__typedefs,  // get(index) function pointer
    resize_function__ServiceRequestDetails_Response__typedefs  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceRequestDetails_Response_message_members = {
  "rosapi_msgs::srv",  // message namespace
  "ServiceRequestDetails_Response",  // message name
  1,  // number of fields
  sizeof(rosapi_msgs::srv::ServiceRequestDetails_Response),
  ServiceRequestDetails_Response_message_member_array,  // message members
  ServiceRequestDetails_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceRequestDetails_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceRequestDetails_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceRequestDetails_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::ServiceRequestDetails_Response>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceRequestDetails_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceRequestDetails_Response)() {
  return &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceRequestDetails_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rosapi_msgs/srv/detail/service_request_details__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ServiceRequestDetails_service_members = {
  "rosapi_msgs::srv",  // service namespace
  "ServiceRequestDetails",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rosapi_msgs::srv::ServiceRequestDetails>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ServiceRequestDetails_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceRequestDetails_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosapi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::ServiceRequestDetails>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rosapi_msgs::srv::rosidl_typesupport_introspection_cpp::ServiceRequestDetails_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosapi_msgs::srv::ServiceRequestDetails_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosapi_msgs::srv::ServiceRequestDetails_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, ServiceRequestDetails)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rosapi_msgs::srv::ServiceRequestDetails>();
}

#ifdef __cplusplus
}
#endif
