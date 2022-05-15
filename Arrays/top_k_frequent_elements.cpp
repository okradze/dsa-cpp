#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
  vector<vector<int>> freq(nums.size());
  unordered_map<int, int> count;

  for (auto &&num : nums)
  {
    count[num]++;
  }

  for (auto &&c : count)
  {
    freq[c.second - 1].push_back(c.first);
  }

  vector<int> result;

  for (int i = freq.size() - 1; i >= 0; i--)
  {
    for (auto &&num : freq[i])
    {
      if (k > 0)
      {
        result.push_back(num);
        k--;
      }
    }
  }

  return result;
}

int main()
{
  vector<int> v = {1, 1, 1, 2, 2, 3};
  topKFrequent(v, 2);
  return 0;
}