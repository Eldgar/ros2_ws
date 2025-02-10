// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__STRUCT_H_
#define TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_Goal
{
  geometry_msgs__msg__Point position;
} tortoisebot_waypoints__action__Waypoint_Goal;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_Goal.
typedef struct tortoisebot_waypoints__action__Waypoint_Goal__Sequence
{
  tortoisebot_waypoints__action__Waypoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_Result
{
  bool success;
} tortoisebot_waypoints__action__Waypoint_Result;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_Result.
typedef struct tortoisebot_waypoints__action__Waypoint_Result__Sequence
{
  tortoisebot_waypoints__action__Waypoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"
// Member 'state'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_Feedback
{
  geometry_msgs__msg__Point position;
  rosidl_runtime_c__String state;
} tortoisebot_waypoints__action__Waypoint_Feedback;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_Feedback.
typedef struct tortoisebot_waypoints__action__Waypoint_Feedback__Sequence
{
  tortoisebot_waypoints__action__Waypoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tortoisebot_waypoints/action/detail/waypoint__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tortoisebot_waypoints__action__Waypoint_Goal goal;
} tortoisebot_waypoints__action__Waypoint_SendGoal_Request;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_SendGoal_Request.
typedef struct tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tortoisebot_waypoints__action__Waypoint_SendGoal_Response;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_SendGoal_Response.
typedef struct tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tortoisebot_waypoints__action__Waypoint_GetResult_Request;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_GetResult_Request.
typedef struct tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_GetResult_Response
{
  int8_t status;
  tortoisebot_waypoints__action__Waypoint_Result result;
} tortoisebot_waypoints__action__Waypoint_GetResult_Response;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_GetResult_Response.
typedef struct tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"

// Struct defined in action/Waypoint in the package tortoisebot_waypoints.
typedef struct tortoisebot_waypoints__action__Waypoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tortoisebot_waypoints__action__Waypoint_Feedback feedback;
} tortoisebot_waypoints__action__Waypoint_FeedbackMessage;

// Struct for a sequence of tortoisebot_waypoints__action__Waypoint_FeedbackMessage.
typedef struct tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence
{
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tortoisebot_waypoints__action__Waypoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__STRUCT_H_
