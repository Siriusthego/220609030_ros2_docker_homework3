cmake_minimum_required(VERSION 3.5)
project(my_project)

find_package(ament_cmake REQUIRED)

# launch klasörünü install et
install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()

