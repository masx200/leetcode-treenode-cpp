export module leetcode_treenode_cpp.TreeNode;
/*export*/ namespace leetcode_treenode_cpp {
export struct TreeNode {
    int val = 0;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {
        // cout << "newTreeNode:" << this << endl;
    }
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {
        // cout << "newTreeNode:" << this << endl;
    }
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {
        // cout << "newTreeNode:" << this << endl;
    }
};
}

// export leetcode_treenode_cpp::TreeNode;
