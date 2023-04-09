module;
#include <sstream>
// +build ignore
//
// #pragma once
// #include <queue>
// #include <string>
//
// using namespace std;
// #include "TreeNode.hpp"
// #include "bfsTravelsal.hpp"
//
// #include <iostream>
// #include <iterator>
// #include <regex>
// #include <sstream>

// namespace test {
export module leetcode_treenode_cpp.LeetCodeTreeNodeToString;
import <string>;
import leetcode_treenode_cpp.TreeNode;
// import <sstream>;
import <regex>;
import <iterator>;
import leetcode_treenode_cpp.bfsTravelsal;
import <iostream>;
export namespace leetcode_treenode_cpp {

using std::basic_stringstream;
using std::stringstream;
export std::string LeetCodeTreeNodeToString(TreeNode* root)
{
    stringstream sstream;
    auto result = bfsTravelsal(root);
    std::regex vowel_re("(,null){1,}\\]$");

    std::regex_replace(std::ostreambuf_iterator<char>(sstream), result.begin(),
        result.end(), vowel_re, "]");
    return sstream.str();
}
}