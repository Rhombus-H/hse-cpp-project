#ifndef CORE_LIB_CONSTANTS_H
#define CORE_LIB_CONSTANTS_H

#include <utility>
#include <cstdlib>
#include "Constants.h"
#include "Types.h"


constexpr size_t DEFAULT_MAP_WIDTH = 20;
constexpr size_t DEFAULT_MAP_HEIGHT = 15;
constexpr size_t MAX_LOG_SIZE = 10; // макс. действий в ActionLog
constexpr size_t TICKS_PER_SECOND = 10;
// constexpr-функция: смещение по координатам для каждого направления
constexpr std::pair<int, int> directionOffset(Direction dir) {
    switch (dir) {
        case Direction::North: return {0, -1};
        case Direction::South: return {0, 1};
        case Direction::East: return {1, 0};
        case Direction::West: return {-1, 0};
    }
}

#endif