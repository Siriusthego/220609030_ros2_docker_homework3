cmake_minimum_required(VERSION 3.5)
project(command_server_pkg)

# Gerekli paketler
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Service dosyasını derle
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/ComputeCommand.srv"
)

# Python node'u executable olarak install et
install(
  PROGRAMS
    command_server_pkg/command_server_node.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME command_server
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

