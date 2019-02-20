#include <iostream>

using namespace std;

class FruitSeller {
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMembers(int price, int num, int money);
        int SaleApples(int money);
        void ShowSalesResult();
};

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

class FruitBuyer {
    private:
        int myMoney;
        int numOfApples;
    public:
        void InitMembers(int money);
        void BuyApples(FruitSeller &seller, int money);
        void ShowBuyResult();
};

void FruitBuyer::InitMembers(int money) {
    myMoney = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money) {
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult() {
    cout << "현재잔액 : " << myMoney << endl;
    cout << "사과개수 : " << numOfApples << endl;
}

int main(void) {
    FruitSeller seller;

    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);

    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();

    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();

    return 0;
}