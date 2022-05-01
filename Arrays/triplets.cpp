#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int target)
{
  sort(arr.begin(), arr.end());
  int size = arr.size();
  int operations = 0;

  vector<vector<int>> triplets;

  for (int i = 0; i < size - 3; i++)
  {
    int low = i + 1;
    int high = size - 1;

    while (low < high)
    {
      int sum = arr[i] + arr[low] + arr[high];
      operations++;

      if (sum == target)
      {
        vector<int> triplet{arr[i], arr[low], arr[high]};
        triplets.push_back(triplet);
        low++;
        high--;
      }
      else if (sum > target)
      {
        high--;
      }
      else
      {
        low++;
      }
    }
  }

  cout << "Operations: " << operations << endl;

  return triplets;
}

int main()
{
  vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};

  vector<vector<int>> result = triplets(arr, 18);

  for (vector<int> v : result)
  {
    for (int num : v)
    {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}