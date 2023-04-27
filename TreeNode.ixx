module;

export module leetcode_treenode_cpp.TreeNode;
namespace leetcode_treenode_cpp {
export struct TreeNode {
  int val = 0;
  TreeNode *left = nullptr;
  TreeNode *right = nullptr;

  TreeNode(int x = 0, TreeNode *left = nullptr, TreeNode *right = nullptr)
      : val(x), left(left), right(right) {}
};
} // namespace leetcode_treenode_cpp
