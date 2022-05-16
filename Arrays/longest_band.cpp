#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestBand(vector<int> &nums)
{
  int n = nums.size();
  unordered_set<int> set;
  int longest = 0;

  // Store every number in set
  for (int num : nums)
  {
    set.insert(num);
  }

  for (int num : nums)
  {
    // If number is not start of band continue loop
    if (set.find(num - 1) != set.end())
    {
      continue;
    }

    // Number is start of band. Find it's end
    int bandLength = 1;
    int nextNum = num + 1;

    while (set.find(nextNum) != set.end())
    {
      bandLength++;
      nextNum++;
    }

    if (bandLength > longest)
    {
      longest = bandLength;
    }
  }

  return longest;
}

int main()
{
  vector<int> nums{100, 4, 200, 1, 3, 2};

  longestBand(nums);

  return 0;
}