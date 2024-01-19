cmake_minimum_required(VERSION 3.27)
project(dynamic_symbols)

set(CMAKE_CXX_STANDARD 17)


add_library(utils STATIC utils1.cpp)

add_library(keyhole SHARED keyhole1.cpp)
target_link_libraries(keyhole PRIVATE utils)

add_executable(tester tester1.cpp)
target_link_libraries(tester PRIVATE utils keyhole)
