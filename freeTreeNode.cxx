module;
#include <stdlib.h>
//// +build ignore
//
// #pragma once
//
//// #ifndef _serialize_Tree_Node_
//// #define _serialize_Tree_Node_
// #include "TreeNode.hpp"
// #include <iostream>
// #include <stdio.h>
// #include <string>
//
// #include <sstream>
// using namespace std;

export module leetcode_treenode_cpp.freeTreeNode;
import leetcode_treenode_cpp.TreeNode;

export namespace leetcode_treenode_cpp
{
    /*export*/ void freeTreeNode(TreeNode *root)
    {

        if (root == NULL)
        {

            return;
        }

        freeTreeNode(root->left);
        freeTreeNode(root->right);
        delete root;
        // cout << "freeTreeNode:" << root << endl;
        return;
    }
    // #endif //
}