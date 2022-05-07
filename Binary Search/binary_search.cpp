#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target)
{
  int left = 0;
  int right = nums.size() - 1;

  while (left <= right)
  {
    int mid = (left + right) / 2;

    if (nums[mid] == target)
    {
      return mid;
    }
    else if (target > nums[mid])
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }

  return -1;
}

int main()
{
  cout << search({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 7) << endl;
  return 0;
}