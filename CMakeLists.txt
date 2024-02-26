cmake_minimum_required(VERSION 3.8)
project(leetcode)

set(CMAKE_CXX_STANDARD_REQUIRED 20)

include_directories(leetcode "include/")
add_executable(leetcode "src/main.cpp" "include/power_of_two/power_of_two.cpp" "include/linked_list_cycle/linked_list_cycle.cpp" "include/same_tree/same_tree.cpp")