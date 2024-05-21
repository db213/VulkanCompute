cmake_minimum_required(VERSION 3.20)

project(VulkanCompute)

set(CMAKE_CXX_STANDARD 20)

include_directories("src")

find_package(Vulkan REQUIRED FATAL_ERROR)
find_package(SDL2 REQUIRED COMPONENTS SDL2)

add_executable(VulkanCompute src/main.cpp src/VulkanApp.hpp src/VulkanApp.cpp)

target_link_libraries(VulkanCompute PRIVATE SDL2::SDL2)
target_link_libraries(VulkanCompute PRIVATE Vulkan::Vulkan)
