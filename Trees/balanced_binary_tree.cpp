#include <tuple>
#include <math.h>
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

int height(TreeNode *root)
{
  if (root == nullptr)
    return 0;

  return max(height(root->left), height(root->right)) + 1;
}

bool isBalanced(TreeNode *root)
{
  if (root == nullptr)
    return true;

  return isBalanced(root->left) and isBalanced(root->right) and abs(height(root->left) - height(root->right)) <= 1;
}

// tuple<bool, int> balanced(TreeNode *root)
// {
//   if (root == nullptr)
//     return make_tuple(true, 0);

//   tuple<bool, int> left = balanced(root->left);
//   tuple<bool, int> right = balanced(root->right);

//   bool balanced = get<0>(left) and get<0>(right) and abs(get<1>(left) - get<1>(right)) <= 1;

//   return make_tuple(balanced, max(get<1>(left), get<1>(right)) + 1);
// }

// bool isBalanced(TreeNode *root)
// {
//   return get<0>(balanced(root));
// }

int main()
{
  return 0;
}