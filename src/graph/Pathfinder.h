//
// Created by maxsh on 07.03.2026.
//

#ifndef GAMEAPP_PATHFINDER_H
#define GAMEAPP_PATHFINDER_H
#include "RoadGraph.h"

class Pathfinder {
    const RoadGraph& graph;
public:
    explicit Pathfinder(const RoadGraph& g);

    std::optional<Path> findPath(Position from, Position to);
    // A* (хз, что это) с манхэттэнским расстоянием. если пути нет - вовзращать nullopt

    std::optional<Path> findPathBFS(Position from, Position to);
    // запасной варик, BFS должен быть проще

    static constexpr float heuristic(Position a, Position b);
    // Манхэттэнское расстояние: |x1-x2| + |y1-y2|
    // constexpr - вычисление на этапе компиляции, если всё известно
};

#endif //GAMEAPP_PATHFINDER_H