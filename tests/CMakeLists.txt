cmake_minimum_required(VERSION 3.5)
project(marchChallengeTests)

find_package(Gtest)

file(GLOB TEST_SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_executable(${PROJECT_NAME} ${TEST_SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${GTEST_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${GTEST_LIBRARIES} marchChallenge pthread)

add_test(${PROJECT_NAME} ${PROJECT_NAME})