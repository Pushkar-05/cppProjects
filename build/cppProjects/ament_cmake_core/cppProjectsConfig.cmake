# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cppProjects_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cppProjects_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cppProjects_FOUND FALSE)
  elseif(NOT cppProjects_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cppProjects_FOUND FALSE)
  endif()
  return()
endif()
set(_cppProjects_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cppProjects_FIND_QUIETLY)
  message(STATUS "Found cppProjects: 0.0.0 (${cppProjects_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cppProjects' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cppProjects_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${cppProjects_DIR}/${_extra}")
endforeach()
