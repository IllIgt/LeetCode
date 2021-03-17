cmake_minimum_required(VERSION 3.19)
project(outOfChallenge)

file(GLOB SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)

