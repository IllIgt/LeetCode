cmake_minimum_required(VERSION 3.19)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/")

add_subdirectory(march_challenge)
add_subdirectory(out_of_challenge)
add_subdirectory(tests)
add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(${PROJECT_NAME} marchChallenge outOfChallenge)
