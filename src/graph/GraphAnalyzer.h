//
// Created by maxsh on 07.03.2026.
//

#ifndef GAMEAPP_GRAPHANALYZER_H
#define GAMEAPP_GRAPHANALYZER_H
#include <vector>

#include "RoadGraph.h"
#include "core/Types.h"

namespace GraphAnalyzer {
    bool hasCycle(const RoadGraph& graph, Position start);
    // DFS с пометкой посещенных. чекает, есть ли цикл, достижимый из start

    std::vector<std::vector<Position>> findConnectedComponents(const RoadGraph& graph);
    // разбиение графа на компоненты связности.
    // чекаем: здание-источник и здание-назначение
    // одного цвета в одной компоненте?

    std::vector<Position> findIsolatedRoads(const RoadGraph& graph, const GameMap& map);
    // дороги, не ведущие ни к одному зданию. "бесполезные" дороги
}

#endif //GAMEAPP_GRAPHANALYZER_H