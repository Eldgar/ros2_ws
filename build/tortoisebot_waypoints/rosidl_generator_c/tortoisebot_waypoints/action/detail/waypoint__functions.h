// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__FUNCTIONS_H_
#define TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tortoisebot_waypoints/msg/rosidl_generator_c__visibility_control.h"

#include "tortoisebot_waypoints/action/detail/waypoint__struct.h"

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_Goal
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__init(tortoisebot_waypoints__action__Waypoint_Goal * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Goal__fini(tortoisebot_waypoints__action__Waypoint_Goal * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Goal *
tortoisebot_waypoints__action__Waypoint_Goal__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Goal__destroy(tortoisebot_waypoints__action__Waypoint_Goal * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__are_equal(const tortoisebot_waypoints__action__Waypoint_Goal * lhs, const tortoisebot_waypoints__action__Waypoint_Goal * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__copy(
  const tortoisebot_waypoints__action__Waypoint_Goal * input,
  tortoisebot_waypoints__action__Waypoint_Goal * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__init(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Goal__Sequence *
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Goal__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_Result
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__init(tortoisebot_waypoints__action__Waypoint_Result * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Result__fini(tortoisebot_waypoints__action__Waypoint_Result * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Result *
tortoisebot_waypoints__action__Waypoint_Result__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Result__destroy(tortoisebot_waypoints__action__Waypoint_Result * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__are_equal(const tortoisebot_waypoints__action__Waypoint_Result * lhs, const tortoisebot_waypoints__action__Waypoint_Result * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__copy(
  const tortoisebot_waypoints__action__Waypoint_Result * input,
  tortoisebot_waypoints__action__Waypoint_Result * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__init(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Result__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Result__Sequence *
tortoisebot_waypoints__action__Waypoint_Result__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Result__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Result__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Result__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Result__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Result__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_Feedback
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__init(tortoisebot_waypoints__action__Waypoint_Feedback * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Feedback__fini(tortoisebot_waypoints__action__Waypoint_Feedback * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Feedback *
tortoisebot_waypoints__action__Waypoint_Feedback__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Feedback__destroy(tortoisebot_waypoints__action__Waypoint_Feedback * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__are_equal(const tortoisebot_waypoints__action__Waypoint_Feedback * lhs, const tortoisebot_waypoints__action__Waypoint_Feedback * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__copy(
  const tortoisebot_waypoints__action__Waypoint_Feedback * input,
  tortoisebot_waypoints__action__Waypoint_Feedback * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__init(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence *
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_SendGoal_Request *
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence *
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_SendGoal_Response *
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence *
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_GetResult_Request *
tortoisebot_waypoints__action__Waypoint_GetResult_Request__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Request * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Request * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Request * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Request * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__init(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence *
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_GetResult_Response *
tortoisebot_waypoints__action__Waypoint_GetResult_Response__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Response * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Response * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Response * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Response * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__init(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence *
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * output);

/// Initialize action/Waypoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage
 * )) before or use
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg);

/// Finalize action/Waypoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg);

/// Create action/Waypoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_FeedbackMessage *
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__create();

/// Destroy action/Waypoint message.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__destroy(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg);

/// Check for action/Waypoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__are_equal(const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * lhs, const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * rhs);

/// Copy a action/Waypoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__copy(
  const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * input,
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage * output);

/// Initialize array of action/Waypoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__init(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__fini(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array);

/// Create array of action/Waypoint messages.
/**
 * It allocates the memory for the array and calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence *
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Waypoint messages.
/**
 * It calls
 * tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array);

/// Check for action/Waypoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Waypoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tortoisebot_waypoints
bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__FUNCTIONS_H_
