// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_data:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_
#define ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_data__srv__GripperPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__srv__GripperPose_Request __declspec(deprecated)
#endif

namespace ros2_data
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperPose_Request_
{
  using Type = GripperPose_Request_<ContainerAllocator>;

  explicit GripperPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = 0.0;
    }
  }

  explicit GripperPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    double;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const double & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::srv::GripperPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::srv::GripperPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::srv::GripperPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::srv::GripperPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__srv__GripperPose_Request
    std::shared_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__srv__GripperPose_Request
    std::shared_ptr<ros2_data::srv::GripperPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperPose_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperPose_Request_

// alias to use template instance with default allocator
using GripperPose_Request =
  ros2_data::srv::GripperPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_data


#ifndef _WIN32
# define DEPRECATED__ros2_data__srv__GripperPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_data__srv__GripperPose_Response __declspec(deprecated)
#endif

namespace ros2_data
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperPose_Response_
{
  using Type = GripperPose_Response_<ContainerAllocator>;

  explicit GripperPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit GripperPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_data::srv::GripperPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_data::srv::GripperPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_data::srv::GripperPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_data::srv::GripperPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_data__srv__GripperPose_Response
    std::shared_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_data__srv__GripperPose_Response
    std::shared_ptr<ros2_data::srv::GripperPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperPose_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperPose_Response_

// alias to use template instance with default allocator
using GripperPose_Response =
  ros2_data::srv::GripperPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_data

namespace ros2_data
{

namespace srv
{

struct GripperPose
{
  using Request = ros2_data::srv::GripperPose_Request;
  using Response = ros2_data::srv::GripperPose_Response;
};

}  // namespace srv

}  // namespace ros2_data

#endif  // ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__STRUCT_HPP_
