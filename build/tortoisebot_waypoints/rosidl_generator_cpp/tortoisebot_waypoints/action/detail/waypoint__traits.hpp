// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__TRAITS_HPP_
#define TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__TRAITS_HPP_

#include "tortoisebot_waypoints/action/detail/waypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_Goal>()
{
  return "tortoisebot_waypoints::action::Waypoint_Goal";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_Goal>()
{
  return "tortoisebot_waypoints/action/Waypoint_Goal";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_Result>()
{
  return "tortoisebot_waypoints::action::Waypoint_Result";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_Result>()
{
  return "tortoisebot_waypoints/action/Waypoint_Result";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_Feedback>()
{
  return "tortoisebot_waypoints::action::Waypoint_Feedback";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_Feedback>()
{
  return "tortoisebot_waypoints/action/Waypoint_Feedback";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "tortoisebot_waypoints/action/detail/waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>()
{
  return "tortoisebot_waypoints::action::Waypoint_SendGoal_Request";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>()
{
  return "tortoisebot_waypoints/action/Waypoint_SendGoal_Request";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<tortoisebot_waypoints::action::Waypoint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<tortoisebot_waypoints::action::Waypoint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>()
{
  return "tortoisebot_waypoints::action::Waypoint_SendGoal_Response";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>()
{
  return "tortoisebot_waypoints/action/Waypoint_SendGoal_Response";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_SendGoal>()
{
  return "tortoisebot_waypoints::action::Waypoint_SendGoal";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_SendGoal>()
{
  return "tortoisebot_waypoints/action/Waypoint_SendGoal";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>::value &&
    has_fixed_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>::value &&
    has_bounded_size<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<tortoisebot_waypoints::action::Waypoint_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<tortoisebot_waypoints::action::Waypoint_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tortoisebot_waypoints::action::Waypoint_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_GetResult_Request>()
{
  return "tortoisebot_waypoints::action::Waypoint_GetResult_Request";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_GetResult_Request>()
{
  return "tortoisebot_waypoints/action/Waypoint_GetResult_Request";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_GetResult_Response>()
{
  return "tortoisebot_waypoints::action::Waypoint_GetResult_Response";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_GetResult_Response>()
{
  return "tortoisebot_waypoints/action/Waypoint_GetResult_Response";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<tortoisebot_waypoints::action::Waypoint_Result>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<tortoisebot_waypoints::action::Waypoint_Result>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_GetResult>()
{
  return "tortoisebot_waypoints::action::Waypoint_GetResult";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_GetResult>()
{
  return "tortoisebot_waypoints/action/Waypoint_GetResult";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<tortoisebot_waypoints::action::Waypoint_GetResult_Request>::value &&
    has_fixed_size<tortoisebot_waypoints::action::Waypoint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<tortoisebot_waypoints::action::Waypoint_GetResult_Request>::value &&
    has_bounded_size<tortoisebot_waypoints::action::Waypoint_GetResult_Response>::value
  >
{
};

template<>
struct is_service<tortoisebot_waypoints::action::Waypoint_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<tortoisebot_waypoints::action::Waypoint_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tortoisebot_waypoints::action::Waypoint_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "tortoisebot_waypoints/action/detail/waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tortoisebot_waypoints::action::Waypoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tortoisebot_waypoints::action::Waypoint_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tortoisebot_waypoints::action::Waypoint_FeedbackMessage>()
{
  return "tortoisebot_waypoints::action::Waypoint_FeedbackMessage";
}

template<>
inline const char * name<tortoisebot_waypoints::action::Waypoint_FeedbackMessage>()
{
  return "tortoisebot_waypoints/action/Waypoint_FeedbackMessage";
}

template<>
struct has_fixed_size<tortoisebot_waypoints::action::Waypoint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<tortoisebot_waypoints::action::Waypoint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<tortoisebot_waypoints::action::Waypoint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<tortoisebot_waypoints::action::Waypoint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<tortoisebot_waypoints::action::Waypoint_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<tortoisebot_waypoints::action::Waypoint>
  : std::true_type
{
};

template<>
struct is_action_goal<tortoisebot_waypoints::action::Waypoint_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<tortoisebot_waypoints::action::Waypoint_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<tortoisebot_waypoints::action::Waypoint_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__TRAITS_HPP_
