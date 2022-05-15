#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
  unordered_map<string, vector<string>> groups;

  for (auto &&str : strs)
  {
    string key = str;
    sort(key.begin(), key.end());
    groups[key].push_back(str);
  }

  vector<vector<string>> anagrams;

  for (auto &&group : groups)
  {
    anagrams.push_back(group.second);
  }

  return anagrams;
}