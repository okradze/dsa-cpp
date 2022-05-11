#include <iostream>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
private:
  int maxDiameter = 0;

public:
  int traverse(TreeNode *root)
  {
    if (root == nullptr)
      return 0;

    int left = traverse(root->left);
    int right = traverse(root->right);

    maxDiameter = max(maxDiameter, left + right);

    return max(left, right) + 1;
  }

  int diameterOfBinaryTree(TreeNode *root)
  {
    if (root == nullptr)
      return 0;

    traverse(root);
    return maxDiameter;
  }
};

int main()
{
  return 0;
}