
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isIdentical(TreeNode *s, TreeNode *t)
{
  if (s == nullptr and t == nullptr)
    return true;

  if (s == nullptr or t == nullptr)
    return false;

  if (s->val != t->val)
  {
  }

  return s->val == t->val and isIdentical(s->left, t->left) and isIdentical(s->right, t->right);
}

bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
  return isIdentical(root, subRoot);
}
