#pragma once

#ifndef ROULETTE_H_
#define ROULETTE_H_

#include "BetState.h"
#include <vector>

class Roulette {
private:
    std::vector<int> betHistory;
public:
    Roulette() {};

    void NextRollResult();

    int PerformRoll(BetState& betState);

};

#endif