// TheRoulette.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <memory>
#include <vector>
#include "Header.h"






int main()
{

    Roulette roulette;
    Wager wager;


    std::unique_ptr<BetState> blackBet = std::make_unique<BetState>(0.04,1);
    std::unique_ptr<BetState> redBet = std::make_unique<BetState>(0.04,0);





    for (;;) {

        roulette.NextRollResult();
        int result_red = roulette.PerformRoll(*redBet);
        int result_black = roulette.PerformRoll(*blackBet);
        wager.UpdateWagered(*redBet);
        wager.UpdateWagered(*blackBet);
 
        redBet->setNextBet(result_red);
        blackBet->setNextBet(result_black);

        std::cout << "Red: Current Bet: " << redBet->GetCurrentBetAmount() << " , All time result: " << redBet->GetResult() << std::endl;
        std::cout << "Black: Current Bet: " << blackBet->GetCurrentBetAmount() << " , All time result: " << blackBet->GetResult() << std::endl;
        std::cout << "Total Wagered: " << wager.GetTotalWagered() << std::endl;
    }



    std::cout << "Hello World!\n";
}

