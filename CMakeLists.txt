cmake_minimum_required(VERSION 3.25)
project(leetcode_treenode_cpp)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
add_compile_options(-fmodules-ts)

#add_compile_options(-fbuiltin-module-map)

#add_compile_options(-fimplicit-module-maps)

add_executable(leetcode_treenode_cpp
        bfsTravelsal.cxx
        freeTreeNode.cxx
        LeetCodeTreeNodeToString.cxx
        parseLeetCodeBinaryTree.cxx
        serializeTreeNode.cxx
        test.cpp
        traversalTreeNode.cxx
        TreeNode.cxx)
