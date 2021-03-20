if(DEFINED GTEST_DIR)
    message(STATUS "Manualy defined variable GTEST_DIR with value ${GTEST_DIR}")
endif()
set(GTEST_SEARCH_PATH_LIST
    ${GTEST_DIR}
    $ENV{GTEST_DIR}
    /usr/local
    /opt
    /usr
    /lib
    /lib64
    ${PROJECT_SOURCE_DIR}/third-party/out
    )

find_path(GTEST_INCLUDE_DIR
    NAMES
    gtest/gtest.h
    HINTS ${GTEST_SEARCH_PATH_LIST}
    PATH_SUFFIXES include
    )
find_library(GTEST_LIBRARY NAMES "gtest"
        PATHS ${GTEST_DIR} /usr /usr64 /usr/local /usr/local/gtest /usr/local/google-test
        PATH_SUFFIXES lib lib64
        HINTS ${GTEST_SEARCH_PATH_LIST}
        )
find_library(GTEST_MAIN_LIBRARY NAMES "gtest_main"
        PATHS ${GTEST_DIR} /usr /usr64 /usr/local /usr/local/gtest /usr/local/google-test
        HINTS ${GTEST_SEARCH_PATH_LIST}
        PATH_SUFFIXES lib lib64
        )

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(
    Gtest
    GTEST_INCLUDE_DIR GTEST_LIBRARY
    GTEST_MAIN_LIBRARY
    )
set(GTEST_LIBRARIES ${GTEST_LIBRARY} ${GTEST_MAIN_LIBRARY})
set(GTEST_INCLUDE_DIRS ${GTEST_INCLUDE_DIR})
message(STATUS "Found Google test include directory: ${GTEST_INCLUDE_DIR}")
message(STATUS "Found Google test libraries: ${GTEST_LIBRARIES}")
