// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_data:action/MoveJpanda.idl
// generated code does not contain a copyright notice
#include "ros2_data/action/detail/move_jpanda__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal`
#include "ros2_data/msg/detail/joint_pose_panda__functions.h"

bool
ros2_data__action__MoveJpanda_Goal__init(ros2_data__action__MoveJpanda_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal
  if (!ros2_data__msg__JointPosePanda__init(&msg->goal)) {
    ros2_data__action__MoveJpanda_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_Goal__fini(ros2_data__action__MoveJpanda_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal
  ros2_data__msg__JointPosePanda__fini(&msg->goal);
}

ros2_data__action__MoveJpanda_Goal *
ros2_data__action__MoveJpanda_Goal__create()
{
  ros2_data__action__MoveJpanda_Goal * msg = (ros2_data__action__MoveJpanda_Goal *)malloc(sizeof(ros2_data__action__MoveJpanda_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_Goal));
  bool success = ros2_data__action__MoveJpanda_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_Goal__destroy(ros2_data__action__MoveJpanda_Goal * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_Goal__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_Goal__Sequence__init(ros2_data__action__MoveJpanda_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_Goal * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_Goal *)calloc(size, sizeof(ros2_data__action__MoveJpanda_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_Goal__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_Goal__Sequence__fini(ros2_data__action__MoveJpanda_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_Goal__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_Goal__Sequence *
ros2_data__action__MoveJpanda_Goal__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_Goal__Sequence * array = (ros2_data__action__MoveJpanda_Goal__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_Goal__Sequence__destroy(ros2_data__action__MoveJpanda_Goal__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_data__action__MoveJpanda_Result__init(ros2_data__action__MoveJpanda_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    ros2_data__action__MoveJpanda_Result__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_Result__fini(ros2_data__action__MoveJpanda_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

ros2_data__action__MoveJpanda_Result *
ros2_data__action__MoveJpanda_Result__create()
{
  ros2_data__action__MoveJpanda_Result * msg = (ros2_data__action__MoveJpanda_Result *)malloc(sizeof(ros2_data__action__MoveJpanda_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_Result));
  bool success = ros2_data__action__MoveJpanda_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_Result__destroy(ros2_data__action__MoveJpanda_Result * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_Result__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_Result__Sequence__init(ros2_data__action__MoveJpanda_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_Result * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_Result *)calloc(size, sizeof(ros2_data__action__MoveJpanda_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_Result__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_Result__Sequence__fini(ros2_data__action__MoveJpanda_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_Result__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_Result__Sequence *
ros2_data__action__MoveJpanda_Result__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_Result__Sequence * array = (ros2_data__action__MoveJpanda_Result__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_Result__Sequence__destroy(ros2_data__action__MoveJpanda_Result__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros2_data__action__MoveJpanda_Feedback__init(ros2_data__action__MoveJpanda_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    ros2_data__action__MoveJpanda_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_Feedback__fini(ros2_data__action__MoveJpanda_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

ros2_data__action__MoveJpanda_Feedback *
ros2_data__action__MoveJpanda_Feedback__create()
{
  ros2_data__action__MoveJpanda_Feedback * msg = (ros2_data__action__MoveJpanda_Feedback *)malloc(sizeof(ros2_data__action__MoveJpanda_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_Feedback));
  bool success = ros2_data__action__MoveJpanda_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_Feedback__destroy(ros2_data__action__MoveJpanda_Feedback * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_Feedback__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_Feedback__Sequence__init(ros2_data__action__MoveJpanda_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_Feedback * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_Feedback *)calloc(size, sizeof(ros2_data__action__MoveJpanda_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_Feedback__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_Feedback__Sequence__fini(ros2_data__action__MoveJpanda_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_Feedback__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_Feedback__Sequence *
ros2_data__action__MoveJpanda_Feedback__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_Feedback__Sequence * array = (ros2_data__action__MoveJpanda_Feedback__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_Feedback__Sequence__destroy(ros2_data__action__MoveJpanda_Feedback__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros2_data/action/detail/move_jpanda__functions.h"

bool
ros2_data__action__MoveJpanda_SendGoal_Request__init(ros2_data__action__MoveJpanda_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_data__action__MoveJpanda_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros2_data__action__MoveJpanda_Goal__init(&msg->goal)) {
    ros2_data__action__MoveJpanda_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_SendGoal_Request__fini(ros2_data__action__MoveJpanda_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros2_data__action__MoveJpanda_Goal__fini(&msg->goal);
}

ros2_data__action__MoveJpanda_SendGoal_Request *
ros2_data__action__MoveJpanda_SendGoal_Request__create()
{
  ros2_data__action__MoveJpanda_SendGoal_Request * msg = (ros2_data__action__MoveJpanda_SendGoal_Request *)malloc(sizeof(ros2_data__action__MoveJpanda_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_SendGoal_Request));
  bool success = ros2_data__action__MoveJpanda_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_SendGoal_Request__destroy(ros2_data__action__MoveJpanda_SendGoal_Request * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__init(ros2_data__action__MoveJpanda_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_SendGoal_Request * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_SendGoal_Request *)calloc(size, sizeof(ros2_data__action__MoveJpanda_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_SendGoal_Request__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__fini(ros2_data__action__MoveJpanda_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_SendGoal_Request__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_SendGoal_Request__Sequence *
ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_SendGoal_Request__Sequence * array = (ros2_data__action__MoveJpanda_SendGoal_Request__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__destroy(ros2_data__action__MoveJpanda_SendGoal_Request__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros2_data__action__MoveJpanda_SendGoal_Response__init(ros2_data__action__MoveJpanda_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros2_data__action__MoveJpanda_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_SendGoal_Response__fini(ros2_data__action__MoveJpanda_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

ros2_data__action__MoveJpanda_SendGoal_Response *
ros2_data__action__MoveJpanda_SendGoal_Response__create()
{
  ros2_data__action__MoveJpanda_SendGoal_Response * msg = (ros2_data__action__MoveJpanda_SendGoal_Response *)malloc(sizeof(ros2_data__action__MoveJpanda_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_SendGoal_Response));
  bool success = ros2_data__action__MoveJpanda_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_SendGoal_Response__destroy(ros2_data__action__MoveJpanda_SendGoal_Response * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__init(ros2_data__action__MoveJpanda_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_SendGoal_Response * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_SendGoal_Response *)calloc(size, sizeof(ros2_data__action__MoveJpanda_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_SendGoal_Response__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__fini(ros2_data__action__MoveJpanda_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_SendGoal_Response__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_SendGoal_Response__Sequence *
ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_SendGoal_Response__Sequence * array = (ros2_data__action__MoveJpanda_SendGoal_Response__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__destroy(ros2_data__action__MoveJpanda_SendGoal_Response__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros2_data__action__MoveJpanda_GetResult_Request__init(ros2_data__action__MoveJpanda_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_data__action__MoveJpanda_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_GetResult_Request__fini(ros2_data__action__MoveJpanda_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

ros2_data__action__MoveJpanda_GetResult_Request *
ros2_data__action__MoveJpanda_GetResult_Request__create()
{
  ros2_data__action__MoveJpanda_GetResult_Request * msg = (ros2_data__action__MoveJpanda_GetResult_Request *)malloc(sizeof(ros2_data__action__MoveJpanda_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_GetResult_Request));
  bool success = ros2_data__action__MoveJpanda_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_GetResult_Request__destroy(ros2_data__action__MoveJpanda_GetResult_Request * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_GetResult_Request__Sequence__init(ros2_data__action__MoveJpanda_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_GetResult_Request * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_GetResult_Request *)calloc(size, sizeof(ros2_data__action__MoveJpanda_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_GetResult_Request__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_GetResult_Request__Sequence__fini(ros2_data__action__MoveJpanda_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_GetResult_Request__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_GetResult_Request__Sequence *
ros2_data__action__MoveJpanda_GetResult_Request__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_GetResult_Request__Sequence * array = (ros2_data__action__MoveJpanda_GetResult_Request__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_GetResult_Request__Sequence__destroy(ros2_data__action__MoveJpanda_GetResult_Request__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros2_data/action/detail/move_jpanda__functions.h"

bool
ros2_data__action__MoveJpanda_GetResult_Response__init(ros2_data__action__MoveJpanda_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros2_data__action__MoveJpanda_Result__init(&msg->result)) {
    ros2_data__action__MoveJpanda_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_GetResult_Response__fini(ros2_data__action__MoveJpanda_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros2_data__action__MoveJpanda_Result__fini(&msg->result);
}

ros2_data__action__MoveJpanda_GetResult_Response *
ros2_data__action__MoveJpanda_GetResult_Response__create()
{
  ros2_data__action__MoveJpanda_GetResult_Response * msg = (ros2_data__action__MoveJpanda_GetResult_Response *)malloc(sizeof(ros2_data__action__MoveJpanda_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_GetResult_Response));
  bool success = ros2_data__action__MoveJpanda_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_GetResult_Response__destroy(ros2_data__action__MoveJpanda_GetResult_Response * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_GetResult_Response__Sequence__init(ros2_data__action__MoveJpanda_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_GetResult_Response * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_GetResult_Response *)calloc(size, sizeof(ros2_data__action__MoveJpanda_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_GetResult_Response__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_GetResult_Response__Sequence__fini(ros2_data__action__MoveJpanda_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_GetResult_Response__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_GetResult_Response__Sequence *
ros2_data__action__MoveJpanda_GetResult_Response__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_GetResult_Response__Sequence * array = (ros2_data__action__MoveJpanda_GetResult_Response__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_GetResult_Response__Sequence__destroy(ros2_data__action__MoveJpanda_GetResult_Response__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros2_data/action/detail/move_jpanda__functions.h"

bool
ros2_data__action__MoveJpanda_FeedbackMessage__init(ros2_data__action__MoveJpanda_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_data__action__MoveJpanda_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros2_data__action__MoveJpanda_Feedback__init(&msg->feedback)) {
    ros2_data__action__MoveJpanda_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros2_data__action__MoveJpanda_FeedbackMessage__fini(ros2_data__action__MoveJpanda_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros2_data__action__MoveJpanda_Feedback__fini(&msg->feedback);
}

ros2_data__action__MoveJpanda_FeedbackMessage *
ros2_data__action__MoveJpanda_FeedbackMessage__create()
{
  ros2_data__action__MoveJpanda_FeedbackMessage * msg = (ros2_data__action__MoveJpanda_FeedbackMessage *)malloc(sizeof(ros2_data__action__MoveJpanda_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_data__action__MoveJpanda_FeedbackMessage));
  bool success = ros2_data__action__MoveJpanda_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_data__action__MoveJpanda_FeedbackMessage__destroy(ros2_data__action__MoveJpanda_FeedbackMessage * msg)
{
  if (msg) {
    ros2_data__action__MoveJpanda_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__init(ros2_data__action__MoveJpanda_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_data__action__MoveJpanda_FeedbackMessage * data = NULL;
  if (size) {
    data = (ros2_data__action__MoveJpanda_FeedbackMessage *)calloc(size, sizeof(ros2_data__action__MoveJpanda_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_data__action__MoveJpanda_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_data__action__MoveJpanda_FeedbackMessage__fini(&data[i - 1]);
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
ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__fini(ros2_data__action__MoveJpanda_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_data__action__MoveJpanda_FeedbackMessage__fini(&array->data[i]);
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

ros2_data__action__MoveJpanda_FeedbackMessage__Sequence *
ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__create(size_t size)
{
  ros2_data__action__MoveJpanda_FeedbackMessage__Sequence * array = (ros2_data__action__MoveJpanda_FeedbackMessage__Sequence *)malloc(sizeof(ros2_data__action__MoveJpanda_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__destroy(ros2_data__action__MoveJpanda_FeedbackMessage__Sequence * array)
{
  if (array) {
    ros2_data__action__MoveJpanda_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
