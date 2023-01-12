cmake_minimum_required(VERSION 3.16)
project(homework_4)
# Update the submodules here
#include(cmake/UpdateSubmodules.cmake)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

message(STATUS "CMAKE BUILD TYPE:" ${CMAKE_BUILD_TYPE})

add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup 
INTERFACE -Wall -Wpedantic -Wextra -fsanitize=address)
target_link_options(cxx_setup INTERFACE -fsanitize=address)
target_compile_features(cxx_setup INTERFACE cxx_std_17)
target_include_directories(cxx_setup INTERFACE ${PROJECT_SOURCE_DIR})

add_subdirectory(external)
include(CTest)
add_subdirectory(no_strings_attached)
add_subdirectory(examples)

