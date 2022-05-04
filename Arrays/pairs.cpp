#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
  unordered_map<int, int> map;
  vector<int> result;

  for (int i = 0; i < nums.size(); i++)
  {
    int x = target - nums[i];

    if (map.find(x) != map.end())
    {
      result.push_back(map[x]);
      result.push_back(i);
      return result;
    }

    map[nums[i]] = i;
  }

  return result;
}

int main()
{
  vector<int> arr{10, 5, 2, 3, -6, 9, 11};

  auto p = pairSum(arr, 4);

  if (p.size() == 0)
  {
    cout << "No pairs found" << endl;
  }
  else
  {
    cout << p[0] << " " << p[1] << endl;
  }

  return 0;
}