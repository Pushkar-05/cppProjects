cmake_minimum_required(VERSION 3.5)
project(cppProjects)

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
# find_package(<dependency> REQUIRED)

add_executable(hello_world src/hello_world.cpp)
target_include_directories(hello_world PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS hello_world
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})
  





  
 add_executable(iostream_implimentations src/iostream_implimentations.cpp)
target_include_directories(iostream_implimentations PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS iostream_implimentations
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})

  
  




  add_executable(billCalculator src/billCalculator.cpp)
target_include_directories(billCalculator PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

install(TARGETS billCalculator
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})



  add_executable(operatorsConditions src/operatorsConditions.cpp)
  target_include_directories(operatorsConditions PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  install(TARGETS operatorsConditions
    EXPORT export_${PROJECT_NAME}
    DESTINATION lib/${PROJECT_NAME})
  




add_executable(logicalOperations_and_typecastingDatatypes src/logicalOperations_and_typecastingDatatypes.cpp)
target_include_directories(logicalOperations_and_typecastingDatatypes PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS logicalOperations_and_typecastingDatatypes
EXPORT export_${PROJECT_NAME}
DESTINATION lib/${PROJECT_NAME})


add_executable(switch src/switch.cpp)
target_include_directories(switch PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS switch
EXPORT export_${PROJECT_NAME}
DESTINATION lib/${PROJECT_NAME})


add_executable(forWhileDowhile src/forWhileDowhile.cpp)
target_include_directories(forWhileDowhile PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS forWhileDowhile
EXPORT export_${PROJECT_NAME}
DESTINATION lib/${PROJECT_NAME})




add_executable(functionPrototyping src/functionPrototyping.cpp)
target_include_directories(functionPrototyping PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS functionPrototyping
EXPORT export_${PROJECT_NAME}
DESTINATION lib/${PROJECT_NAME})



add_executable(functionScopeArgumentReturn src/functionScopeArgumentReturn.cpp)
target_include_directories(functionScopeArgumentReturn PUBLIC
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
$<INSTALL_INTERFACE:include>)

install(TARGETS functionScopeArgumentReturn
EXPORT export_${PROJECT_NAME}
DESTINATION lib/${PROJECT_NAME})





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

ament_package()
