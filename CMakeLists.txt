cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(TicTakToe)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(TicTakToe src/main.cpp src/state_machine.cpp src/asset_manager.cpp)
target_link_libraries(TicTakToe sfml-graphics sfml-audio)

