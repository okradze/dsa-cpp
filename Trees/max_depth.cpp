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

int maxDepth(TreeNode *root, int depth = 0)
{
  if (root == nullptr)
    return depth;

  int left = maxDepth(root->left, depth + 1);
  int right = maxDepth(root->right, depth + 1);

  return max(left, right);
}

int main()
{
  return 0;
}