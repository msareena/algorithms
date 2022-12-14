cmake_minimum_required(VERSION 3.18)

project(sample)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../source/)

set(SOURCES
    test_${PROJECT_NAME}.cpp)

add_executable(test_${PROJECT_NAME}
               ${SOURCES})

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(test_${PROJECT_NAME} GTest::gtest_main)
target_link_libraries(test_${PROJECT_NAME} GTest::gmock_main)
target_link_libraries(test_${PROJECT_NAME} algorithms)

enable_testing()
include(GoogleTest)
gtest_discover_tests(test_${PROJECT_NAME})
