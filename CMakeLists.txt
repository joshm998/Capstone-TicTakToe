cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

project(TicTakToe)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
file(COPY res DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
add_executable(TicTakToe src/main.cpp src/state_machine.cpp src/asset_manager.cpp src/input_manager.cpp src/game.cpp src/splash_state.cpp src/main_menu_state.cpp)
target_link_libraries(TicTakToe sfml-graphics sfml-audio)

