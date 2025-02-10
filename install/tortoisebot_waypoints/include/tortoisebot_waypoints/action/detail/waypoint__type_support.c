// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
#include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
#include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_Goal__init(message_memory);
}

void Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_Goal, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_Goal",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_Goal),
  Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_member_array,  // message members
  Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_type_support_handle = {
  0,
  &Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Goal)() {
  Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_type_support_handle.typesupport_identifier) {
    Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_Goal__rosidl_typesupport_introspection_c__Waypoint_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_Result__init(message_memory);
}

void Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_Result",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_Result),
  Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_member_array,  // message members
  Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_type_support_handle = {
  0,
  &Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Result)() {
  if (!Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_type_support_handle.typesupport_identifier) {
    Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_Result__rosidl_typesupport_introspection_c__Waypoint_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `position`
// already included above
// #include "geometry_msgs/msg/point.h"
// Member `position`
// already included above
// #include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_Feedback__init(message_memory);
}

void Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_Feedback, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_Feedback",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_Feedback),
  Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_member_array,  // message members
  Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_type_support_handle = {
  0,
  &Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Feedback)() {
  Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_type_support_handle.typesupport_identifier) {
    Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_Feedback__rosidl_typesupport_introspection_c__Waypoint_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "tortoisebot_waypoints/action/waypoint.h"
// Member `goal`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request__init(message_memory);
}

void Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Request),
  Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_member_array,  // message members
  Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_type_support_handle = {
  0,
  &Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Request)() {
  Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Goal)();
  if (!Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_SendGoal_Request__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response__init(message_memory);
}

void Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_SendGoal_Response),
  Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_member_array,  // message members
  Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_type_support_handle = {
  0,
  &Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Response)() {
  Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_SendGoal_Response__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_members = {
  "tortoisebot_waypoints__action",  // service namespace
  "Waypoint_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_type_support_handle = {
  0,
  &tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal)() {
  if (!tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_type_support_handle.typesupport_identifier) {
    tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_SendGoal_Response)()->data;
  }

  return &tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_GetResult_Request__init(message_memory);
}

void Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Request),
  Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_member_array,  // message members
  Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_type_support_handle = {
  0,
  &Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Request)() {
  Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_GetResult_Request__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "tortoisebot_waypoints/action/waypoint.h"
// Member `result`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_GetResult_Response__init(message_memory);
}

void Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_GetResult_Response),
  Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_member_array,  // message members
  Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_type_support_handle = {
  0,
  &Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Response)() {
  Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Result)();
  if (!Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_GetResult_Response__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_members = {
  "tortoisebot_waypoints__action",  // service namespace
  "Waypoint_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_type_support_handle = {
  0,
  &tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult)() {
  if (!tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_type_support_handle.typesupport_identifier) {
    tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_GetResult_Response)()->data;
  }

  return &tortoisebot_waypoints__action__detail__waypoint__rosidl_typesupport_introspection_c__Waypoint_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tortoisebot_waypoints/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__functions.h"
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "tortoisebot_waypoints/action/waypoint.h"
// Member `feedback`
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage__init(message_memory);
}

void Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_fini_function(void * message_memory)
{
  tortoisebot_waypoints__action__Waypoint_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_members = {
  "tortoisebot_waypoints__action",  // message namespace
  "Waypoint_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(tortoisebot_waypoints__action__Waypoint_FeedbackMessage),
  Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_member_array,  // message members
  Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_type_support_handle = {
  0,
  &Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tortoisebot_waypoints
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_FeedbackMessage)() {
  Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tortoisebot_waypoints, action, Waypoint_Feedback)();
  if (!Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Waypoint_FeedbackMessage__rosidl_typesupport_introspection_c__Waypoint_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
