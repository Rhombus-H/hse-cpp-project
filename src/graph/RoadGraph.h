//
// Created by maxsh on 07.03.2026.
//

#ifndef GAMEAPP_ROADGRAPH_H
#define GAMEAPP_ROADGRAPH_H
#include "core/Types.h"

class RoadGraph {
    std::unordered_map<'hash of Position', std::vector<Position>> adjacency;
    // (!)идея реализации мэпа: у каждой дорожной клетки - список соседних дорожных клеток

public:
    void rebuild(const GameMap& map);
    // проход по карте и поиск дорог, строю ребра

    void addEdge(Position a, Position b);
    void removeEdge(Position a, Position b);
    // позже оптимизация с инкр. обновлением, чтобы граф не пересобирать

    std::vector<Postition> neighbours(Position pos) const;
    bool hasNode(Position pos) const;
};

#endif //GAMEAPP_ROADGRAPH_H