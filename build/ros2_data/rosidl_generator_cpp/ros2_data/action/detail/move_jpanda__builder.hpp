// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_data:action/MoveJpanda.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DATA__ACTION__DETAIL__MOVE_JPANDA__BUILDER_HPP_
#define ROS2_DATA__ACTION__DETAIL__MOVE_JPANDA__BUILDER_HPP_

#include "ros2_data/action/detail/move_jpanda__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_Goal_goal
{
public:
  Init_MoveJpanda_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveJpanda_Goal goal(::ros2_data::action::MoveJpanda_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_Goal>()
{
  return ros2_data::action::builder::Init_MoveJpanda_Goal_goal();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_Result_result
{
public:
  Init_MoveJpanda_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveJpanda_Result result(::ros2_data::action::MoveJpanda_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_Result>()
{
  return ros2_data::action::builder::Init_MoveJpanda_Result_result();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_Feedback_feedback
{
public:
  Init_MoveJpanda_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveJpanda_Feedback feedback(::ros2_data::action::MoveJpanda_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_Feedback>()
{
  return ros2_data::action::builder::Init_MoveJpanda_Feedback_feedback();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_SendGoal_Request_goal
{
public:
  explicit Init_MoveJpanda_SendGoal_Request_goal(::ros2_data::action::MoveJpanda_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveJpanda_SendGoal_Request goal(::ros2_data::action::MoveJpanda_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_SendGoal_Request msg_;
};

class Init_MoveJpanda_SendGoal_Request_goal_id
{
public:
  Init_MoveJpanda_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJpanda_SendGoal_Request_goal goal_id(::ros2_data::action::MoveJpanda_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveJpanda_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_SendGoal_Request>()
{
  return ros2_data::action::builder::Init_MoveJpanda_SendGoal_Request_goal_id();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_SendGoal_Response_stamp
{
public:
  explicit Init_MoveJpanda_SendGoal_Response_stamp(::ros2_data::action::MoveJpanda_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveJpanda_SendGoal_Response stamp(::ros2_data::action::MoveJpanda_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_SendGoal_Response msg_;
};

class Init_MoveJpanda_SendGoal_Response_accepted
{
public:
  Init_MoveJpanda_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJpanda_SendGoal_Response_stamp accepted(::ros2_data::action::MoveJpanda_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveJpanda_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_SendGoal_Response>()
{
  return ros2_data::action::builder::Init_MoveJpanda_SendGoal_Response_accepted();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_GetResult_Request_goal_id
{
public:
  Init_MoveJpanda_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_data::action::MoveJpanda_GetResult_Request goal_id(::ros2_data::action::MoveJpanda_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_GetResult_Request>()
{
  return ros2_data::action::builder::Init_MoveJpanda_GetResult_Request_goal_id();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_GetResult_Response_result
{
public:
  explicit Init_MoveJpanda_GetResult_Response_result(::ros2_data::action::MoveJpanda_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveJpanda_GetResult_Response result(::ros2_data::action::MoveJpanda_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_GetResult_Response msg_;
};

class Init_MoveJpanda_GetResult_Response_status
{
public:
  Init_MoveJpanda_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJpanda_GetResult_Response_result status(::ros2_data::action::MoveJpanda_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveJpanda_GetResult_Response_result(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_GetResult_Response>()
{
  return ros2_data::action::builder::Init_MoveJpanda_GetResult_Response_status();
}

}  // namespace ros2_data


namespace ros2_data
{

namespace action
{

namespace builder
{

class Init_MoveJpanda_FeedbackMessage_feedback
{
public:
  explicit Init_MoveJpanda_FeedbackMessage_feedback(::ros2_data::action::MoveJpanda_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_data::action::MoveJpanda_FeedbackMessage feedback(::ros2_data::action::MoveJpanda_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_FeedbackMessage msg_;
};

class Init_MoveJpanda_FeedbackMessage_goal_id
{
public:
  Init_MoveJpanda_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveJpanda_FeedbackMessage_feedback goal_id(::ros2_data::action::MoveJpanda_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveJpanda_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_data::action::MoveJpanda_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_data::action::MoveJpanda_FeedbackMessage>()
{
  return ros2_data::action::builder::Init_MoveJpanda_FeedbackMessage_goal_id();
}

}  // namespace ros2_data

#endif  // ROS2_DATA__ACTION__DETAIL__MOVE_JPANDA__BUILDER_HPP_
