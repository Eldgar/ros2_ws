// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tortoisebot_waypoints:action/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__BUILDER_HPP_
#define TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__BUILDER_HPP_

#include "tortoisebot_waypoints/action/detail/waypoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_Goal_position
{
public:
  Init_Waypoint_Goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints::action::Waypoint_Goal position(::tortoisebot_waypoints::action::Waypoint_Goal::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_Goal>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_Goal_position();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_Result_success
{
public:
  Init_Waypoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints::action::Waypoint_Result success(::tortoisebot_waypoints::action::Waypoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_Result>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_Result_success();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_Feedback_state
{
public:
  explicit Init_Waypoint_Feedback_state(::tortoisebot_waypoints::action::Waypoint_Feedback & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints::action::Waypoint_Feedback state(::tortoisebot_waypoints::action::Waypoint_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_Feedback msg_;
};

class Init_Waypoint_Feedback_position
{
public:
  Init_Waypoint_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_Feedback_state position(::tortoisebot_waypoints::action::Waypoint_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Waypoint_Feedback_state(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_Feedback>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_Feedback_position();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_SendGoal_Request_goal
{
public:
  explicit Init_Waypoint_SendGoal_Request_goal(::tortoisebot_waypoints::action::Waypoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Request goal(::tortoisebot_waypoints::action::Waypoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Request msg_;
};

class Init_Waypoint_SendGoal_Request_goal_id
{
public:
  Init_Waypoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_SendGoal_Request_goal goal_id(::tortoisebot_waypoints::action::Waypoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Waypoint_SendGoal_Request_goal(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_SendGoal_Request>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_SendGoal_Request_goal_id();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_SendGoal_Response_stamp
{
public:
  explicit Init_Waypoint_SendGoal_Response_stamp(::tortoisebot_waypoints::action::Waypoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Response stamp(::tortoisebot_waypoints::action::Waypoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Response msg_;
};

class Init_Waypoint_SendGoal_Response_accepted
{
public:
  Init_Waypoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_SendGoal_Response_stamp accepted(::tortoisebot_waypoints::action::Waypoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Waypoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_SendGoal_Response>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_SendGoal_Response_accepted();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_GetResult_Request_goal_id
{
public:
  Init_Waypoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tortoisebot_waypoints::action::Waypoint_GetResult_Request goal_id(::tortoisebot_waypoints::action::Waypoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_GetResult_Request>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_GetResult_Request_goal_id();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_GetResult_Response_result
{
public:
  explicit Init_Waypoint_GetResult_Response_result(::tortoisebot_waypoints::action::Waypoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints::action::Waypoint_GetResult_Response result(::tortoisebot_waypoints::action::Waypoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_GetResult_Response msg_;
};

class Init_Waypoint_GetResult_Response_status
{
public:
  Init_Waypoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_GetResult_Response_result status(::tortoisebot_waypoints::action::Waypoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Waypoint_GetResult_Response_result(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_GetResult_Response>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_GetResult_Response_status();
}

}  // namespace tortoisebot_waypoints


namespace tortoisebot_waypoints
{

namespace action
{

namespace builder
{

class Init_Waypoint_FeedbackMessage_feedback
{
public:
  explicit Init_Waypoint_FeedbackMessage_feedback(::tortoisebot_waypoints::action::Waypoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tortoisebot_waypoints::action::Waypoint_FeedbackMessage feedback(::tortoisebot_waypoints::action::Waypoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_FeedbackMessage msg_;
};

class Init_Waypoint_FeedbackMessage_goal_id
{
public:
  Init_Waypoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_FeedbackMessage_feedback goal_id(::tortoisebot_waypoints::action::Waypoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Waypoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::tortoisebot_waypoints::action::Waypoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tortoisebot_waypoints::action::Waypoint_FeedbackMessage>()
{
  return tortoisebot_waypoints::action::builder::Init_Waypoint_FeedbackMessage_goal_id();
}

}  // namespace tortoisebot_waypoints

#endif  // TORTOISEBOT_WAYPOINTS__ACTION__DETAIL__WAYPOINT__BUILDER_HPP_
