#include <iostream>
#include <vector>
using namespace std;

int mountain(vector<int> arr) {
  if(arr.size() < 3) return 0;

  int result = 0;

  // 1) Find Peak
  // 2) Count Left Peak size
  // 3) Count Right Peak size
  // 4) If size is greater update result
  for(int i = 1; i < arr.size() - 1;) {
    // We found peak
    if(arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
      int count = 1;
      int j = i;

      while(j > 0 and arr[j - 1] < arr[j]) {
        count++;
        j--;
      }

      while(i < arr.size() - 1 and arr[i] > arr[i + 1]) {
        count++;
        i++;
      }

      if(count > result) result = count;
    } else {
      i++;
    }
  }

  return result;
}

int main() {
  vector<int> arr {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,-4};
  int result = mountain(arr);

  cout << result << endl;

  return 0;
}