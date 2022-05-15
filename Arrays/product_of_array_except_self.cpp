#include <iostream>
#include <vector>
using namespace std;

// [2,3,4,5]
// [1,2,6,24]
vector<int> productExceptSelf(vector<int> &nums)
{
  vector<int> result(nums.size());

  int prefix = 1;

  for (int i = 0; i < nums.size(); i++)
  {
    result[i] = prefix;
    prefix *= nums[i];
  }

  int postfix = 1;

  for (int i = nums.size() - 1; i >= 0; i--)
  {
    result[i] *= postfix;
    postfix *= nums[i];
  }

  return result;
}

int main()
{
  vector<int> v = {2, 3, 4, 5};
  productExceptSelf(v);
  return 0;
}