#include "TickSystem.h"

uint64_t TickSystem::getTick() const {
    return this->currentTick;
}

bool TickSystem::isTickDue(uint64_t interval) const {
    return TickSystem::getTick() - this->currentTick >= interval;
}


void TickSystem::advance() {
    currentTick++;
}

void TickSystem::reset() {
    currentTick = 0;
}



