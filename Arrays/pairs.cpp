#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
  unordered_set<int> set;
  vector<int> result;

  for (int i = 0; i < arr.size(); i++)
  {
    int x = target - arr[i];

    if (set.find(x) != set.end())
    {
      result.push_back(x);
      result.push_back(arr[i]);
      return result;
    }

    set.insert(arr[i]);
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