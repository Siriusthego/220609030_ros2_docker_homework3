// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__BUILDER_HPP_
#define COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "command_server_pkg/srv/detail/compute_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace command_server_pkg
{

namespace srv
{

namespace builder
{

class Init_ComputeCommand_Request_input
{
public:
  Init_ComputeCommand_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::command_server_pkg::srv::ComputeCommand_Request input(::command_server_pkg::srv::ComputeCommand_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_server_pkg::srv::ComputeCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_server_pkg::srv::ComputeCommand_Request>()
{
  return command_server_pkg::srv::builder::Init_ComputeCommand_Request_input();
}

}  // namespace command_server_pkg


namespace command_server_pkg
{

namespace srv
{

namespace builder
{

class Init_ComputeCommand_Response_output
{
public:
  Init_ComputeCommand_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::command_server_pkg::srv::ComputeCommand_Response output(::command_server_pkg::srv::ComputeCommand_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_server_pkg::srv::ComputeCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_server_pkg::srv::ComputeCommand_Response>()
{
  return command_server_pkg::srv::builder::Init_ComputeCommand_Response_output();
}

}  // namespace command_server_pkg

#endif  // COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__BUILDER_HPP_
