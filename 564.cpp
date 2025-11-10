#include <iostream>
#include <vector>

using namespace std;

/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. 
However, you can sell and buy the stock multiple times on the same day, ensuring you never hold than one share of the stock.

Find and return the maximum profit you can achieve.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0;
        int dayFirst = 0;
        for (int i = 1; i < prices.size(); i++) {
            int day = 0;
            if (prices[i-1] < prices[i]) {
                day = prices[i-1];
            } else {
                int dayFinal = day - prices[dayFirst];
                if (dayFinal > 0) total += dayFinal;
                dayFirst = i;
            }
        }
        return total;
    }
};

int main(int argc, char const *argv[]) {
    vector<int> prices = {7,1,5,3,6,4};

    Solution sol;
    int k = sol.maxProfit(prices);
    cout << "k: " << k << endl;

    return 0;
}