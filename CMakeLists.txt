cmake_minimum_required(VERSION 3.10)
project(Dxlpp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Include public headers
include_directories(include)

# Include Dynamixel SDK headers
include_directories(${CMAKE_SOURCE_DIR}/lib/include)

# Build the shared library (your own wrapper)
add_library(dxlpp SHARED
    src/DxlMotor.cpp
    src/DxlComs.cpp
)

# Link with Dynamixel SDK shared object
target_link_libraries(dxlpp
    ${CMAKE_SOURCE_DIR}/lib/libdxl_x64_cpp.so
)

# Build the example program
add_executable(ping examples/ping.cpp)
add_executable(setGoalPosition examples/setGoalPosition.cpp)

# Link the example against your shared library
target_link_libraries(ping PUBLIC dxlpp)
target_link_libraries(setGoalPosition PUBLIC dxlpp)
