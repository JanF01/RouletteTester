#pragma once

#ifndef WAGER_H_
#define WAGER_H_

#include "BetState.h"


class Wager {
private:
    double totalWagered;
public:
    Wager() :totalWagered(0) {};

    void UpdateWagered(BetState& betState) {
        totalWagered += betState.GetCurrentBetAmount();
    };

    double GetTotalWagered() {
        return totalWagered;
    }


};

#endif