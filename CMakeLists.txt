cmake_minimum_required(VERSION 4.0)
project(GameApp VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTS "Build tests" ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(src)

if(BUILD_TESTS)
    enable_testing()

    include(FetchContent)

    FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/benchmark.git
            GIT_TAG v1.17.0
    )

    if(WIN32)
        set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    endif()

    FetchContent_MakeAvailable(googletest)

    add_subdirectory(tests)

    message(STATUS "Google Test fetched and configured")
endif()