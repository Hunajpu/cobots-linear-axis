// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_data:msg/JointPose.idl
// generated code does not contain a copyright notice
#include "ros2_data/msg/detail/joint_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_data__msg__JointPose__init(ros2_data__msg__JointPose * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  return true;
}

void
ros2_data__msg__JointPose__fini(ros2_data__msg__JointPose * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
}

ros2_data__msg__JointPose *
ros2_data__msg__JointPose__create()
{
  ros2_data__msg__JointPose * msg = (ros2_data__msg__JointPose *)malloc(sizeof(ros2_data__msg__JointPose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__msg__JointPose));
  bool success = ros2_data__msg__JointPose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__msg__JointPose__destroy(ros2_data__msg__JointPose * msg)
{
  if (msg) {
    ros2_data__msg__JointPose__fini(msg);
  }
  free(msg);
}


bool
ros2_data__msg__JointPose__Sequence__init(ros2_data__msg__JointPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__msg__JointPose * data = NULL;
  if (size) {
    data = (ros2_data__msg__JointPose *)calloc(size, sizeof(ros2_data__msg__JointPose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__msg__JointPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__msg__JointPose__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_data__msg__JointPose__Sequence__fini(ros2_data__msg__JointPose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__msg__JointPose__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_data__msg__JointPose__Sequence *
ros2_data__msg__JointPose__Sequence__create(size_t size)
{
  ros2_data__msg__JointPose__Sequence * array = (ros2_data__msg__JointPose__Sequence *)malloc(sizeof(ros2_data__msg__JointPose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__msg__JointPose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__msg__JointPose__Sequence__destroy(ros2_data__msg__JointPose__Sequence * array)
{
  if (array) {
    ros2_data__msg__JointPose__Sequence__fini(array);
  }
  free(array);
}
