#include "FruitSeller.h"

void FruitSeller::InitMembers(int price, int num, int money) {
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money) {
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;

    return num;
}

void FruitSeller::ShowSalesResult() {
    cout << "남은사과 : " << numOfApples << endl;
    cout << "판매수익 : " << myMoney << endl;
}
