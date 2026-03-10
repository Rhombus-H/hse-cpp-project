# Директория для тестов
# Google Test уже подключен в корневом CMakeLists.txt

cmake_minimum_required(VERSION 4.0)
project(TestsLib)

add_executable(tests
        ${CMAKE_CURRENT_SOURCE_DIR}/test_graph.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/test_pathfinder.cpp
)
# Здесь позже будут тесты
# Например:
# add_executable(tests test_map.cpp test_pathfinder.cpp etc)
# target_link_libraries(tests PRIVATE GTest::gtest_main GTest::gmock)
# target_link_libraries(tests PRIVATE core)
# add_test(NAME Tests COMMAND tests)

message(STATUS "Tests configuration loaded")