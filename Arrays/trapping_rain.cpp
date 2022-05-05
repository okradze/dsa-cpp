#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int total = 0;
    int maxLeft = 0;
    int maxRight = 0;

    for (int h : height)
    {
    }

    return total;
}

int main()
{
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << trap(height) << endl;
    cout << height.size() << endl;

    return 0;
}