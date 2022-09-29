#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ros2_data::ros2_data__rosidl_typesupport_cpp" for configuration "Debug"
set_property(TARGET ros2_data::ros2_data__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ros2_data::ros2_data__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libros2_data__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_DEBUG "libros2_data__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ros2_data::ros2_data__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_ros2_data::ros2_data__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libros2_data__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)