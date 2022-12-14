cmake_minimum_required(VERSION 3.5)
project(cobots_axis_gui)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
#find_package(roscpp REQUIRED)
#find_package(rospy REQUIRED)
#find_package(rqt_gui_py REQUIRED)

find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rqt_gui_cpp REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(qt_gui_cpp REQUIRED)
find_package(control_msgs REQUIRED)

# Start
# Prepare to create rqt plugin as cpp library

# Define source files
set(${PROJECT_NAME}_SRCS
  src/cobot_7thaxis.cpp
  src/mytoolbutton.cpp
  src/ros_launch_manager.cpp
)

# Define header files
set(${PROJECT_NAME}_HDRS
  include/${PROJECT_NAME}/cobot_7thaxis.h
  include/${PROJECT_NAME}/mytoolbutton.h
  include/${PROJECT_NAME}/ros_launch_manager.hpp
)

# Define ui file
set(${PROJECT_NAME}_UIS
  resource/cobot_7thaxis.ui
)

# Define include directories
set(${PROJECT_NAME}_INCLUDE_DIRECTORIES
  include
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${rclcpp_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${qt_gui_cpp_INCLUDE_DIRS}
  ${rqt_gui_cpp_INCLUDE_DIRS}
  ${Qt5Widgets_INCLUDE_DIRS}
)

# Qt wrapper
qt5_wrap_cpp(${PROJECT_NAME}_MOCS ${${PROJECT_NAME}_HDRS})
qt5_wrap_ui(${PROJECT_NAME}_UIS_H ${${PROJECT_NAME}_UIS})

include_directories(
  ${${PROJECT_NAME}_INCLUDE_DIRECTORIES}
)

add_library(cobot_7thaxis
  ${${PROJECT_NAME}_SRCS}
  ${${PROJECT_NAME}_MOCS}
  ${${PROJECT_NAME}_UIS_H}
)
ament_target_dependencies(cobot_7thaxis
  rclcpp
  std_msgs
  sensor_msgs
  qt_gui_cpp
  rqt_gui_cpp
  rclcpp_action
  rclcpp_components
  control_msgs
)
target_link_libraries(cobot_7thaxis
  Qt5::Widgets
)
# Ends

install(
  TARGETS cobot_7thaxis
  EXPORT ${PROJECT_NAME}
  ARCHIVE DESTINATION lib/${PROJECT_NAME}
  LIBRARY DESTINATION lib/${PROJECT_NAME}
  RUNTIME DESTINATION bin/${PROJECT_NAME}
  INCLUDES DESTINATION include)

install(PROGRAMS scripts/cobot_7thaxis
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(FILES plugin.xml
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY resource
  DESTINATION share/${PROJECT_NAME}
)

# Install for ros2 launch
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

pluginlib_export_plugin_description_file(rqt_gui "plugin.xml")

ament_export_include_directories(include)
ament_export_libraries(cobot_7thaxis)

ament_package()
