cmake_minimum_required(VERSION 3.10)
project(aitrader)

# Find required packages
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Boost REQUIRED COMPONENTS system filesystem)

# Include Qt and Boost
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})

# Set C++ flags (optional)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the executable and link libraries
add_executable(aitrader aitrader.cpp)
target_link_libraries(aitrader Qt5::Widgets ${Boost_LIBRARIES})
