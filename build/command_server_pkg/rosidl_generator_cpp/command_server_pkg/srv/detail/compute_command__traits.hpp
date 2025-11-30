// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__TRAITS_HPP_
#define COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "command_server_pkg/srv/detail/compute_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace command_server_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_server_pkg

namespace rosidl_generator_traits
{

[[deprecated("use command_server_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_server_pkg::srv::ComputeCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_server_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_server_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_server_pkg::srv::ComputeCommand_Request & msg)
{
  return command_server_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_server_pkg::srv::ComputeCommand_Request>()
{
  return "command_server_pkg::srv::ComputeCommand_Request";
}

template<>
inline const char * name<command_server_pkg::srv::ComputeCommand_Request>()
{
  return "command_server_pkg/srv/ComputeCommand_Request";
}

template<>
struct has_fixed_size<command_server_pkg::srv::ComputeCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_server_pkg::srv::ComputeCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_server_pkg::srv::ComputeCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace command_server_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ComputeCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_server_pkg

namespace rosidl_generator_traits
{

[[deprecated("use command_server_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_server_pkg::srv::ComputeCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_server_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_server_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_server_pkg::srv::ComputeCommand_Response & msg)
{
  return command_server_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_server_pkg::srv::ComputeCommand_Response>()
{
  return "command_server_pkg::srv::ComputeCommand_Response";
}

template<>
inline const char * name<command_server_pkg::srv::ComputeCommand_Response>()
{
  return "command_server_pkg/srv/ComputeCommand_Response";
}

template<>
struct has_fixed_size<command_server_pkg::srv::ComputeCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<command_server_pkg::srv::ComputeCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<command_server_pkg::srv::ComputeCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<command_server_pkg::srv::ComputeCommand>()
{
  return "command_server_pkg::srv::ComputeCommand";
}

template<>
inline const char * name<command_server_pkg::srv::ComputeCommand>()
{
  return "command_server_pkg/srv/ComputeCommand";
}

template<>
struct has_fixed_size<command_server_pkg::srv::ComputeCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<command_server_pkg::srv::ComputeCommand_Request>::value &&
    has_fixed_size<command_server_pkg::srv::ComputeCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<command_server_pkg::srv::ComputeCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<command_server_pkg::srv::ComputeCommand_Request>::value &&
    has_bounded_size<command_server_pkg::srv::ComputeCommand_Response>::value
  >
{
};

template<>
struct is_service<command_server_pkg::srv::ComputeCommand>
  : std::true_type
{
};

template<>
struct is_service_request<command_server_pkg::srv::ComputeCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<command_server_pkg::srv::ComputeCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__TRAITS_HPP_
