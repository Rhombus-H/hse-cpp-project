#ifndef CORE_LIB_TICKSYSTEM_H
#define CORE_LIB_TICKSYSTEM_H

#include <cstdint>

class TickSystem {
    uint64_t currentTick = 0;
public:
    void advance(); // currentTick++
    uint64_t getTick() const;
    bool isTickDue(uint64_t interval) const; // currentTick % interval == 0
    void reset();
};

#endif