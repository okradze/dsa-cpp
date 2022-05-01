#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestBand(vector<int> arr)
{
  int n = arr.size();
  unordered_set<int> set;
  int longest = 0;

  // Store every number in set
  for (int num : arr)
  {
    set.insert(num);
  }

  for (int num : arr)
  {
    // If number is not start of band continue loop
    if (set.find(num - 1) == set.end())
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
  vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};

  cout << longestBand(arr) << endl;

  return 0;
}