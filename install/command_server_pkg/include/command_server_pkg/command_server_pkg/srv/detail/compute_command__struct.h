// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from command_server_pkg:srv/ComputeCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_H_
#define COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ComputeCommand in the package command_server_pkg.
typedef struct command_server_pkg__srv__ComputeCommand_Request
{
  double input;
} command_server_pkg__srv__ComputeCommand_Request;

// Struct for a sequence of command_server_pkg__srv__ComputeCommand_Request.
typedef struct command_server_pkg__srv__ComputeCommand_Request__Sequence
{
  command_server_pkg__srv__ComputeCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_server_pkg__srv__ComputeCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ComputeCommand in the package command_server_pkg.
typedef struct command_server_pkg__srv__ComputeCommand_Response
{
  rosidl_runtime_c__String output;
} command_server_pkg__srv__ComputeCommand_Response;

// Struct for a sequence of command_server_pkg__srv__ComputeCommand_Response.
typedef struct command_server_pkg__srv__ComputeCommand_Response__Sequence
{
  command_server_pkg__srv__ComputeCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_server_pkg__srv__ComputeCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_SERVER_PKG__SRV__DETAIL__COMPUTE_COMMAND__STRUCT_H_
