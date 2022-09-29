// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_data:action/MoveR.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_R__FUNCTIONS_H_
#define ROS2_DATA__ACTION__DETAIL__MOVE_R__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_data/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_data/action/detail/move_r__struct.h"

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_Goal
 * )) before or use
 * ros2_data__action__MoveR_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Goal__init(ros2_data__action__MoveR_Goal * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Goal__fini(ros2_data__action__MoveR_Goal * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Goal *
ros2_data__action__MoveR_Goal__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Goal__destroy(ros2_data__action__MoveR_Goal * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Goal__Sequence__init(ros2_data__action__MoveR_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Goal__Sequence__fini(ros2_data__action__MoveR_Goal__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Goal__Sequence *
ros2_data__action__MoveR_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Goal__Sequence__destroy(ros2_data__action__MoveR_Goal__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_Result
 * )) before or use
 * ros2_data__action__MoveR_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Result__init(ros2_data__action__MoveR_Result * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Result__fini(ros2_data__action__MoveR_Result * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Result *
ros2_data__action__MoveR_Result__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Result__destroy(ros2_data__action__MoveR_Result * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Result__Sequence__init(ros2_data__action__MoveR_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Result__Sequence__fini(ros2_data__action__MoveR_Result__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Result__Sequence *
ros2_data__action__MoveR_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Result__Sequence__destroy(ros2_data__action__MoveR_Result__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_Feedback
 * )) before or use
 * ros2_data__action__MoveR_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Feedback__init(ros2_data__action__MoveR_Feedback * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Feedback__fini(ros2_data__action__MoveR_Feedback * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Feedback *
ros2_data__action__MoveR_Feedback__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Feedback__destroy(ros2_data__action__MoveR_Feedback * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_Feedback__Sequence__init(ros2_data__action__MoveR_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Feedback__Sequence__fini(ros2_data__action__MoveR_Feedback__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_Feedback__Sequence *
ros2_data__action__MoveR_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_Feedback__Sequence__destroy(ros2_data__action__MoveR_Feedback__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_SendGoal_Request
 * )) before or use
 * ros2_data__action__MoveR_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_SendGoal_Request__init(ros2_data__action__MoveR_SendGoal_Request * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Request__fini(ros2_data__action__MoveR_SendGoal_Request * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_SendGoal_Request *
ros2_data__action__MoveR_SendGoal_Request__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Request__destroy(ros2_data__action__MoveR_SendGoal_Request * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_SendGoal_Request__Sequence__init(ros2_data__action__MoveR_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Request__Sequence__fini(ros2_data__action__MoveR_SendGoal_Request__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_SendGoal_Request__Sequence *
ros2_data__action__MoveR_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Request__Sequence__destroy(ros2_data__action__MoveR_SendGoal_Request__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_SendGoal_Response
 * )) before or use
 * ros2_data__action__MoveR_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_SendGoal_Response__init(ros2_data__action__MoveR_SendGoal_Response * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Response__fini(ros2_data__action__MoveR_SendGoal_Response * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_SendGoal_Response *
ros2_data__action__MoveR_SendGoal_Response__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Response__destroy(ros2_data__action__MoveR_SendGoal_Response * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_SendGoal_Response__Sequence__init(ros2_data__action__MoveR_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Response__Sequence__fini(ros2_data__action__MoveR_SendGoal_Response__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_SendGoal_Response__Sequence *
ros2_data__action__MoveR_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_SendGoal_Response__Sequence__destroy(ros2_data__action__MoveR_SendGoal_Response__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_GetResult_Request
 * )) before or use
 * ros2_data__action__MoveR_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_GetResult_Request__init(ros2_data__action__MoveR_GetResult_Request * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Request__fini(ros2_data__action__MoveR_GetResult_Request * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_GetResult_Request *
ros2_data__action__MoveR_GetResult_Request__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Request__destroy(ros2_data__action__MoveR_GetResult_Request * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_GetResult_Request__Sequence__init(ros2_data__action__MoveR_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Request__Sequence__fini(ros2_data__action__MoveR_GetResult_Request__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_GetResult_Request__Sequence *
ros2_data__action__MoveR_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Request__Sequence__destroy(ros2_data__action__MoveR_GetResult_Request__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_GetResult_Response
 * )) before or use
 * ros2_data__action__MoveR_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_GetResult_Response__init(ros2_data__action__MoveR_GetResult_Response * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Response__fini(ros2_data__action__MoveR_GetResult_Response * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_GetResult_Response *
ros2_data__action__MoveR_GetResult_Response__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Response__destroy(ros2_data__action__MoveR_GetResult_Response * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_GetResult_Response__Sequence__init(ros2_data__action__MoveR_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Response__Sequence__fini(ros2_data__action__MoveR_GetResult_Response__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_GetResult_Response__Sequence *
ros2_data__action__MoveR_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_GetResult_Response__Sequence__destroy(ros2_data__action__MoveR_GetResult_Response__Sequence * array);

/// Initialize action/MoveR message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_data__action__MoveR_FeedbackMessage
 * )) before or use
 * ros2_data__action__MoveR_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_FeedbackMessage__init(ros2_data__action__MoveR_FeedbackMessage * msg);

/// Finalize action/MoveR message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_FeedbackMessage__fini(ros2_data__action__MoveR_FeedbackMessage * msg);

/// Create action/MoveR message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_data__action__MoveR_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_FeedbackMessage *
ros2_data__action__MoveR_FeedbackMessage__create();

/// Destroy action/MoveR message.
/**
 * It calls
 * ros2_data__action__MoveR_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_FeedbackMessage__destroy(ros2_data__action__MoveR_FeedbackMessage * msg);


/// Initialize array of action/MoveR messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_data__action__MoveR_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
bool
ros2_data__action__MoveR_FeedbackMessage__Sequence__init(ros2_data__action__MoveR_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_FeedbackMessage__Sequence__fini(ros2_data__action__MoveR_FeedbackMessage__Sequence * array);

/// Create array of action/MoveR messages.
/**
 * It allocates the memory for the array and calls
 * ros2_data__action__MoveR_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
ros2_data__action__MoveR_FeedbackMessage__Sequence *
ros2_data__action__MoveR_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveR messages.
/**
 * It calls
 * ros2_data__action__MoveR_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_data
void
ros2_data__action__MoveR_FeedbackMessage__Sequence__destroy(ros2_data__action__MoveR_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_R__FUNCTIONS_H_
