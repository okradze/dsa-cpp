#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class MinStack
{
private:
  vector<int> stack;
  vector<int> mins;

public:
  MinStack()
  {
  }

  void push(int val)
  {
    stack.push_back(val);

    if (mins.empty())
    {
      mins.push_back(val);
    }
    else if (mins.back() > val)
    {
      mins.push_back(val);
    }
    else
    {
      mins.push_back(mins.back());
    }
  }

  void pop()
  {
    stack.pop_back();
    mins.pop_back();
  }

  int top()
  {
    return stack.back();
  }

  int getMin()
  {
    return mins.back();
  }
};

int main()
{
  MinStack *obj = new MinStack();

  obj->push(-2);
  obj->push(0);
  obj->push(-3);
  cout << obj->getMin() << endl;
  obj->pop();
  cout << obj->top() << endl;
  cout << obj->getMin() << endl;

  return 0;
}