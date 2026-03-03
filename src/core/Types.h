#ifndef CORE_LIB_TYPES_H
#define CORE_LIB_TYPES_H

#include <vector>

enum class Color { Red, Blue, Green, Yellow };
// Цвет машины и здания. enum class — безопасное перечисление,
// нельзя случайно сравнить Color с числом.
enum class Direction { North, South, East, West };
// Направление движения и соединения дорог.
using Position = std::pair<size_t, size_t>;
// Координаты клетки на карте. size_t — беззнаковое целое.
// Position p = {3, 5}; — клетка в столбце 3, строке 5.
using Path = std::vector<Position>;
// Маршрут — последовательность клеток.

#endif