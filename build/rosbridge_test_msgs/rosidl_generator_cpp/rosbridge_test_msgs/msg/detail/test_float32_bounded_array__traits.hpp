// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestFloat32BoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__TRAITS_HPP_

#include "rosbridge_test_msgs/msg/detail/test_float32_bounded_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestFloat32BoundedArray>()
{
  return "rosbridge_test_msgs::msg::TestFloat32BoundedArray";
}

template<>
inline const char * name<rosbridge_test_msgs::msg::TestFloat32BoundedArray>()
{
  return "rosbridge_test_msgs/msg/TestFloat32BoundedArray";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestFloat32BoundedArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__DETAIL__TEST_FLOAT32_BOUNDED_ARRAY__TRAITS_HPP_
