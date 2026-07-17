/*
----------------------------------------
Problem : Best Time to Buy and Sell Stock
Difficulty : Easy
Approach : Linear Traversal (Running Minimum)
Time Complexity : O(n)
Space Complexity : O(1)
Author : Sidra
Date : 17-07-2026
----------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function Prototype
int MaxProfit(vector<int>& prices);

int main()
{
    int size;

    cout << "Enter the size of an Array: ";
    cin >> size;

    vector<int> prices(size);

    cout << "Enter the Stock Prices :\n";

    for (int i = 0; i < size; i++)
    {
        cin >> prices[i];
    }

    cout << "\nMaximum Profit is: " << MaxProfit(prices);

    return 0;
}

// Function Definition
int MaxProfit(vector<int>& prices)
{
    int bestBuy = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        // Update the minimum buying price
        bestBuy = min(bestBuy, prices[i]);

        // Calculate profit if sold today
        int profit = prices[i] - bestBuy;

        // Update maximum profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}