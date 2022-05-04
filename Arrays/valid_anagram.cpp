#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool validAnagram(string s, string t)
{
  int n = s.length();

  if (n != t.length())
    return false;

  unordered_map<char, int> counts;

  for (int i = 0; i < n; i++)
  {
    counts[s[i]]++;
    counts[t[i]]--;
  }

  for (auto c : counts)
  {
    if (c.second)
      return false;
  }

  return true;
}

int main()
{
  string s = "anagram";
  string t = "nagaram";

  cout << validAnagram(s, t) << endl;

  return 0;
}