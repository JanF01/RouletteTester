

#include "Roulette.h"
#include <vector>
#include <iostream>


    void Roulette::NextRollResult() {
        int temporary;
        std::cout << "Give Next Roll (0 - CT, 1 - TT, 2 - Dice): ";
        std::cin >> temporary;
        betHistory.insert(betHistory.begin(), temporary);
    }

    int Roulette::PerformRoll(BetState& betState) {
        return betState.Roll(betHistory.front());
    }
