cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 23)

project(DataStructuresColor)


add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/main.c")