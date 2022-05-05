#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool isValid(string s)
{
  stack<char> stk;

  for (char c : s)
  {
    if (c == '(')
    {
      stk.push(')');
    }
    else if (c == '[')
    {
      stk.push(']');
    }
    else if (c == '{')
    {
      stk.push('}');
    }
    else
    {
      if (stk.empty() || stk.top() != c)
      {
        return false;
      }
      stk.pop();
    }
  }

  return stk.empty();
}

int main()
{
  cout << isValid("[]") << endl;
  return 0;
}