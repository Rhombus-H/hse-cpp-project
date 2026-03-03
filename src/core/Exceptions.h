#ifndef CORE_LIB_EXCEPTIONS_H
#define CORE_LIB_EXCEPTIONS_H

#include <string>
#include <stdexcept>

class GameException : public std::runtime_error {
public:
    explicit GameException(const std::string& msg)
    : std::runtime_error(msg) {}
};
class InvalidPositionException : public GameException {
public:
    explicit InvalidPositionException(Position pos)
    : GameException("Invalid position: (" +
    std::to_string(pos.first) + ", " +
    std::to_string(pos.second) + ")") {}
};
class PathNotFoundException : public GameException {};
class FileIOException : public GameException {};
class InvalidMapException : public GameException {};

#endif