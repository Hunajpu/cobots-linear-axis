// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_data:msg/JointPosePanda.idl
// generated code does not contain a copyright notice
#include "ros2_data/msg/detail/joint_pose_panda__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ros2_data__msg__JointPosePanda__init(ros2_data__msg__JointPosePanda * msg)
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
  // joint7
  return true;
}

void
ros2_data__msg__JointPosePanda__fini(ros2_data__msg__JointPosePanda * msg)
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
  // joint7
}

ros2_data__msg__JointPosePanda *
ros2_data__msg__JointPosePanda__create()
{
  ros2_data__msg__JointPosePanda * msg = (ros2_data__msg__JointPosePanda *)malloc(sizeof(ros2_data__msg__JointPosePanda));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__msg__JointPosePanda));
  bool success = ros2_data__msg__JointPosePanda__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__msg__JointPosePanda__destroy(ros2_data__msg__JointPosePanda * msg)
{
  if (msg) {
    ros2_data__msg__JointPosePanda__fini(msg);
  }
  free(msg);
}


bool
ros2_data__msg__JointPosePanda__Sequence__init(ros2_data__msg__JointPosePanda__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__msg__JointPosePanda * data = NULL;
  if (size) {
    data = (ros2_data__msg__JointPosePanda *)calloc(size, sizeof(ros2_data__msg__JointPosePanda));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__msg__JointPosePanda__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__msg__JointPosePanda__fini(&data[i - 1]);
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
ros2_data__msg__JointPosePanda__Sequence__fini(ros2_data__msg__JointPosePanda__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__msg__JointPosePanda__fini(&array->data[i]);
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

ros2_data__msg__JointPosePanda__Sequence *
ros2_data__msg__JointPosePanda__Sequence__create(size_t size)
{
  ros2_data__msg__JointPosePanda__Sequence * array = (ros2_data__msg__JointPosePanda__Sequence *)malloc(sizeof(ros2_data__msg__JointPosePanda__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__msg__JointPosePanda__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__msg__JointPosePanda__Sequence__destroy(ros2_data__msg__JointPosePanda__Sequence * array)
{
  if (array) {
    ros2_data__msg__JointPosePanda__Sequence__fini(array);
  }
  free(array);
}
