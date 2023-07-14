#pragma once

#ifndef BET_STATE_H_
#define BET_STATE_H_

class BetState {
private:
    double currentBetAmount;
    double coinValue;
    float result;
    int betTarget;
public:
    BetState(double startBet, int target) :currentBetAmount(startBet), betTarget(target), coinValue(startBet), result(0) {};

    int Roll(int& rollResult) {
        int r = (rollResult == betTarget);
        result += (currentBetAmount * ((float)(r)?1:-1));
        return r;
    }

    void setNextBet(int win) {
        if (win) {
            currentBetAmount += coinValue;
        }
        else {
            currentBetAmount = coinValue;
        }
    }

    double GetCurrentBetAmount() {
        return currentBetAmount;
    }

    float GetResult() {
        return result;
    }

};


#endif