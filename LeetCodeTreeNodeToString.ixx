module;


#include <string>

#include <iterator>
#include <regex>
#include <sstream>

export module leetcode_treenode_cpp.LeetCodeTreeNodeToString;

import leetcode_treenode_cpp.TreeNode;

import leetcode_treenode_cpp.bfsTravelsal;

namespace leetcode_treenode_cpp
{

//    using std::basic_stringstream;
    using std::stringstream;
    export std::string LeetCodeTreeNodeToString(TreeNode *root)
    {
        stringstream sstream;
        auto result = bfsTravelsal(root);
        std::regex vowel_re("(,null){1,}\\]$");

        std::regex_replace(std::ostreambuf_iterator<char>(sstream), result.begin(),
                           result.end(), vowel_re, "]");
        return sstream.str();
    }
}