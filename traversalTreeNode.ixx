

export module leetcode_treenode_cpp.traversalTreeNode;
import <vector>;

import leetcode_treenode_cpp.TreeNode;
export namespace leetcode_treenode_cpp {
using std::vector;

export void traversalTreeNode(TreeNode* root, vector<TreeNode*>& nodes)
{

    if (root == NULL) {

        return;
    }

    traversalTreeNode(root->left, nodes);
    traversalTreeNode(root->right, nodes);
    // delete root;
    // cout << "freeTreeNode:" << root << endl;

    nodes.emplace_back(root);
    return;
}
// #endif //
//}
}