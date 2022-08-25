cmake_minimum_required(VERSION 3.18)

project(sample)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES
    ${PROJECT_NAME}.cpp)

add_library(${PROJECT_NAME}
            ${SOURCES})
