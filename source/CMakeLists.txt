cmake_minimum_required(VERSION 3.18)

project(algorithms)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(sample)

add_library(${PROJECT_NAME}
            algorithms.cpp)

target_link_libraries(${PROJECT_NAME} sample)
