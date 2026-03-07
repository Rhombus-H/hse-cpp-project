cmake_minimum_required(VERSION 4.0)
project(GameLib)

add_library(core_lib
        core/Game.cpp
        core/TickSystem.cpp
        core/TickSystem.h
        core/Exceptions.h
        core/Types.h
        core/Constants.h
        core/Game.cpp
        core/TickSystem.cpp
        core/Exceptions.h
        core/Types.h
        core/Constants.h
        core/Game.h
        graph/RoadGraph.h
        graph/Pathfinder.h
        graph/GraphAnalyzer.h
        graph/Pathfinder.cpp
        graph/RoadGraph.cpp
        ../tests/test_pathfinder.cpp
        ../tests/test_graph.cpp
)

target_include_directories(core_lib
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(game_app
        main.cpp
)

target_link_libraries(game_app
        PRIVATE
        core_lib
)

message(STATUS "Configured src with core library and game")