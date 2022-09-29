// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_data:srv/GripperPose.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__FUNCTIONS_H_
#define ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_data/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_data/srv/detail/gripper_pose__struct.h"

/// Initialize srv/GripperPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__srv__GripperPose_Request
 * )) before or use
 * ros2_data__srv__GripperPose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__srv__GripperPose_Request__init(ros2_data__srv__GripperPose_Request * msg);

/// Finalize srv/GripperPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Request__fini(ros2_data__srv__GripperPose_Request * msg);

/// Create srv/GripperPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__srv__GripperPose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__srv__GripperPose_Request *
ros2_data__srv__GripperPose_Request__create();

/// Destroy srv/GripperPose message.
/**
 * It calls
 * ros2_data__srv__GripperPose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Request__destroy(ros2_data__srv__GripperPose_Request * msg);


/// Initialize array of srv/GripperPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__srv__GripperPose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__srv__GripperPose_Request__Sequence__init(ros2_data__srv__GripperPose_Request__Sequence * array, size_t size);

/// Finalize array of srv/GripperPose messages.
/**
 * It calls
 * ros2_data__srv__GripperPose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Request__Sequence__fini(ros2_data__srv__GripperPose_Request__Sequence * array);

/// Create array of srv/GripperPose messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__srv__GripperPose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__srv__GripperPose_Request__Sequence *
ros2_data__srv__GripperPose_Request__Sequence__create(size_t size);

/// Destroy array of srv/GripperPose messages.
/**
 * It calls
 * ros2_data__srv__GripperPose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Request__Sequence__destroy(ros2_data__srv__GripperPose_Request__Sequence * array);

/// Initialize srv/GripperPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__srv__GripperPose_Response
 * )) before or use
 * ros2_data__srv__GripperPose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__srv__GripperPose_Response__init(ros2_data__srv__GripperPose_Response * msg);

/// Finalize srv/GripperPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Response__fini(ros2_data__srv__GripperPose_Response * msg);

/// Create srv/GripperPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__srv__GripperPose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__srv__GripperPose_Response *
ros2_data__srv__GripperPose_Response__create();

/// Destroy srv/GripperPose message.
/**
 * It calls
 * ros2_data__srv__GripperPose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Response__destroy(ros2_data__srv__GripperPose_Response * msg);


/// Initialize array of srv/GripperPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__srv__GripperPose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__srv__GripperPose_Response__Sequence__init(ros2_data__srv__GripperPose_Response__Sequence * array, size_t size);

/// Finalize array of srv/GripperPose messages.
/**
 * It calls
 * ros2_data__srv__GripperPose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Response__Sequence__fini(ros2_data__srv__GripperPose_Response__Sequence * array);

/// Create array of srv/GripperPose messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__srv__GripperPose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__srv__GripperPose_Response__Sequence *
ros2_data__srv__GripperPose_Response__Sequence__create(size_t size);

/// Destroy array of srv/GripperPose messages.
/**
 * It calls
 * ros2_data__srv__GripperPose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__srv__GripperPose_Response__Sequence__destroy(ros2_data__srv__GripperPose_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__SRV__DETAIL__GRIPPER_POSE__FUNCTIONS_H_
