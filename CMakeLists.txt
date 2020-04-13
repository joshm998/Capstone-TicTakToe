cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(HelloWorld)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(HelloWorld src/main.cpp)
target_link_libraries(HelloWorld sfml-graphics sfml-audio)

