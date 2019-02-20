#ifndef FRUIT_BUYER_H
#define FRUIT_BUYER_H
#include <iostream>

#include "FruitSeller.h"

using namespace std;

class FruitBuyer {
    private:
        int myMoney;
        int numOfApples;
    public:
        void InitMembers(int money);
        void BuyApples(FruitSeller &seller, int money);
        void ShowBuyResult();
};

#endif
