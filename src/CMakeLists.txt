cmake_minimum_required(VERSION 4.0)
project(GameLib)

add_library(core_lib
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Game.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/TickSystem.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/TickSystem.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Exceptions.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Constants.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Game.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/TickSystem.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Exceptions.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Constants.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Game.h
        ${CMAKE_CURRENT_SOURCE_DIR}/graph/RoadGraph.h
        ${CMAKE_CURRENT_SOURCE_DIR}/graph/RoadGraph.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/graph/Pathfinder.h
        ${CMAKE_CURRENT_SOURCE_DIR}/graph/GraphAnalyzer.h
        ${CMAKE_CURRENT_SOURCE_DIR}/graph/Pathfinder.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/Exceptions.cpp
)

add_library(cars_lib
        ${CMAKE_CURRENT_SOURCE_DIR}/cars/Car.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/cars/Car.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/cars/CargoCar.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/cars/CarManager.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/cars/PassengerCar.hpp
)

#target_include_directories(core_lib
#        PUBLIC
#        ${CMAKE_CURRENT_SOURCE_DIR}
#)
#target_include_directories(cars_lib
#        PUBLIC
#        ${CMAKE_CURRENT_SOURCE_DIR}
#)

add_executable(game_app
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_link_libraries(game_app
        PRIVATE
        core_lib cars_lib
)

message(STATUS "Configured src with core library and game")