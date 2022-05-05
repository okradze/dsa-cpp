#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
  if (prices.size() < 2)
    return 0;

  int maxProfit = 0;
  int left = 0;
  int right = 1;

  while (right < prices.size())
  {
    if (prices[left] < prices[right])
    {
      int profit = prices[right] - prices[left];
      if (profit > maxProfit)
      {
        maxProfit = profit;
      }
    }
    else
    {
      left = right;
    }

    right++;
  }

  return maxProfit;
}

int main()
{
  vector<int> prices = {7, 1, 5, 3, 6, 4};

  maxProfit(prices);

  return 0;
}