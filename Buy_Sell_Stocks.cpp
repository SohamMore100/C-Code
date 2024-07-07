// Buy & Sell Stocks code

#include <iostream>
using namespace std;

void maxProfit(int prices[], int n)
{
    int bestBuy[100];
    bestBuy[0] = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }
    int MaxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int curProfit = prices[i] - bestBuy[i];
        MaxProfit = max(MaxProfit, curProfit);
    }
    cout << "Maximum Profit : " << MaxProfit << endl;
}

int main()
{

    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);

    return 0;
}