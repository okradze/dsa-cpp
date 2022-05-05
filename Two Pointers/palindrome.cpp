#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
  int left = 0;
  int right = s.length() - 1;

  while (left <= right)
  {
    if (isalnum(s[left]) && isalnum(s[right]))
    {
      if (tolower(s[left]) != tolower(s[right]))
      {
        return false;
      }

      left++;
      right--;
    }
    else
    {
      if (!isalnum(s[left]))
      {
        left++;
      }

      if (!isalnum(s[right]))
      {
        right--;
      }
    }
  }

  return true;
}

// bool isPalindrome(string s)
// {
//   string filtered = "";

//   for (char c : s)
//   {
//     if (isalnum(c))
//     {
//       filtered += tolower(c);
//     }
//   }

//   int left = 0;
//   int right = filtered.size() - 1;

//   while (left <= right)
//   {
//     if (filtered[left] != filtered[right])
//     {
//       return false;
//     }
//     left++;
//     right--;
//   }

//   return true;
// }

int main()
{
  cout << isPalindrome("A man, a plan, a canal: Panama") << endl;

  return 0;
}