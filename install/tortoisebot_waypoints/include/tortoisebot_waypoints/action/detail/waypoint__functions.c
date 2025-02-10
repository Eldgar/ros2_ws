// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice
#include "tortoisebot_waypoints/action/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_Goal__init(tortoisebot_waypoints__action__Waypoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    tortoisebot_waypoints__action__Waypoint_Goal__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_Goal__fini(tortoisebot_waypoints__action__Waypoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
tortoisebot_waypoints__action__Waypoint_Goal__are_equal(const tortoisebot_waypoints__action__Waypoint_Goal * lhs, const tortoisebot_waypoints__action__Waypoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Goal__copy(
  const tortoisebot_waypoints__action__Waypoint_Goal * input,
  tortoisebot_waypoints__action__Waypoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_Goal *
tortoisebot_waypoints__action__Waypoint_Goal__create()
{
  tortoisebot_waypoints__action__Waypoint_Goal * msg = (tortoisebot_waypoints__action__Waypoint_Goal *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_Goal));
  bool success = tortoisebot_waypoints__action__Waypoint_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_Goal__destroy(tortoisebot_waypoints__action__Waypoint_Goal * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_Goal__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__init(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_Goal * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_Goal *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_Goal__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_Goal__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_Goal__Sequence *
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array = (tortoisebot_waypoints__action__Waypoint_Goal__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Goal__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Goal__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Goal__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_Goal);
    tortoisebot_waypoints__action__Waypoint_Goal * data =
      (tortoisebot_waypoints__action__Waypoint_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tortoisebot_waypoints__action__Waypoint_Result__init(tortoisebot_waypoints__action__Waypoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_Result__fini(tortoisebot_waypoints__action__Waypoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
tortoisebot_waypoints__action__Waypoint_Result__are_equal(const tortoisebot_waypoints__action__Waypoint_Result * lhs, const tortoisebot_waypoints__action__Waypoint_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Result__copy(
  const tortoisebot_waypoints__action__Waypoint_Result * input,
  tortoisebot_waypoints__action__Waypoint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tortoisebot_waypoints__action__Waypoint_Result *
tortoisebot_waypoints__action__Waypoint_Result__create()
{
  tortoisebot_waypoints__action__Waypoint_Result * msg = (tortoisebot_waypoints__action__Waypoint_Result *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_Result));
  bool success = tortoisebot_waypoints__action__Waypoint_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_Result__destroy(tortoisebot_waypoints__action__Waypoint_Result * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_Result__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__init(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_Result * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_Result *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_Result__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_Result__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_Result__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_Result__Sequence *
tortoisebot_waypoints__action__Waypoint_Result__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_Result__Sequence * array = (tortoisebot_waypoints__action__Waypoint_Result__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_Result__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Result__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_Result__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Result__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Result__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Result__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_Result);
    tortoisebot_waypoints__action__Waypoint_Result * data =
      (tortoisebot_waypoints__action__Waypoint_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `position`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
tortoisebot_waypoints__action__Waypoint_Feedback__init(tortoisebot_waypoints__action__Waypoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    tortoisebot_waypoints__action__Waypoint_Feedback__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    tortoisebot_waypoints__action__Waypoint_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_Feedback__fini(tortoisebot_waypoints__action__Waypoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
tortoisebot_waypoints__action__Waypoint_Feedback__are_equal(const tortoisebot_waypoints__action__Waypoint_Feedback * lhs, const tortoisebot_waypoints__action__Waypoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Feedback__copy(
  const tortoisebot_waypoints__action__Waypoint_Feedback * input,
  tortoisebot_waypoints__action__Waypoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_Feedback *
tortoisebot_waypoints__action__Waypoint_Feedback__create()
{
  tortoisebot_waypoints__action__Waypoint_Feedback * msg = (tortoisebot_waypoints__action__Waypoint_Feedback *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_Feedback));
  bool success = tortoisebot_waypoints__action__Waypoint_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_Feedback__destroy(tortoisebot_waypoints__action__Waypoint_Feedback * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_Feedback__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__init(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_Feedback * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_Feedback *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_Feedback__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__fini(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_Feedback__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_Feedback__Sequence *
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array = (tortoisebot_waypoints__action__Waypoint_Feedback__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_Feedback__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_Feedback);
    tortoisebot_waypoints__action__Waypoint_Feedback * data =
      (tortoisebot_waypoints__action__Waypoint_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tortoisebot_waypoints__action__Waypoint_Goal__init(&msg->goal)) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tortoisebot_waypoints__action__Waypoint_Goal__fini(&msg->goal);
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tortoisebot_waypoints__action__Waypoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Request * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tortoisebot_waypoints__action__Waypoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_SendGoal_Request *
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__create()
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg = (tortoisebot_waypoints__action__Waypoint_SendGoal_Request *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request));
  bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Request * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_SendGoal_Request *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence *
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array = (tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request);
    tortoisebot_waypoints__action__Waypoint_SendGoal_Request * data =
      (tortoisebot_waypoints__action__Waypoint_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Response * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_SendGoal_Response *
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__create()
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg = (tortoisebot_waypoints__action__Waypoint_SendGoal_Response *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response));
  bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Response * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__init(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_SendGoal_Response *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__fini(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence *
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array = (tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response);
    tortoisebot_waypoints__action__Waypoint_SendGoal_Response * data =
      (tortoisebot_waypoints__action__Waypoint_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Request * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Request * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_GetResult_Request *
tortoisebot_waypoints__action__Waypoint_GetResult_Request__create()
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg = (tortoisebot_waypoints__action__Waypoint_GetResult_Request *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request));
  bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Request * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__init(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_GetResult_Request * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_GetResult_Request *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence *
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array = (tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request);
    tortoisebot_waypoints__action__Waypoint_GetResult_Request * data =
      (tortoisebot_waypoints__action__Waypoint_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tortoisebot_waypoints__action__Waypoint_Result__init(&msg->result)) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tortoisebot_waypoints__action__Waypoint_Result__fini(&msg->result);
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Response * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tortoisebot_waypoints__action__Waypoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Response * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tortoisebot_waypoints__action__Waypoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_GetResult_Response *
tortoisebot_waypoints__action__Waypoint_GetResult_Response__create()
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg = (tortoisebot_waypoints__action__Waypoint_GetResult_Response *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response));
  bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Response * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__init(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_GetResult_Response * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_GetResult_Response *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__fini(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence *
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array = (tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response);
    tortoisebot_waypoints__action__Waypoint_GetResult_Response * data =
      (tortoisebot_waypoints__action__Waypoint_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"

bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tortoisebot_waypoints__action__Waypoint_Feedback__init(&msg->feedback)) {
    tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tortoisebot_waypoints__action__Waypoint_Feedback__fini(&msg->feedback);
}

bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__are_equal(const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * lhs, const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tortoisebot_waypoints__action__Waypoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__copy(
  const tortoisebot_waypoints__action__Waypoint_FeedbackMessage * input,
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tortoisebot_waypoints__action__Waypoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tortoisebot_waypoints__action__Waypoint_FeedbackMessage *
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__create()
{
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg = (tortoisebot_waypoints__action__Waypoint_FeedbackMessage *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage));
  bool success = tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__destroy(tortoisebot_waypoints__action__Waypoint_FeedbackMessage * msg)
{
  if (msg) {
    tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__init(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage * data = NULL;
  if (size) {
    data = (tortoisebot_waypoints__action__Waypoint_FeedbackMessage *)calloc(size, sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(&data[i - 1]);
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
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__fini(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(&array->data[i]);
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

tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence *
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__create(size_t size)
{
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array = (tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence *)malloc(sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__destroy(tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * array)
{
  if (array) {
    tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__are_equal(const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * lhs, const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence__copy(
  const tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * input,
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage);
    tortoisebot_waypoints__action__Waypoint_FeedbackMessage * data =
      (tortoisebot_waypoints__action__Waypoint_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tortoisebot_waypoints__action__Waypoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
