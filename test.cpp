

#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/TextOutputter.h>
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#include <sstream>
#include <unordered_set>

import leetcode_treenode_cpp.TreeNode;
import leetcode_treenode_cpp.parseLeetCodeBinaryTree;
import leetcode_treenode_cpp.LeetCodeTreeNodeToString;
import leetcode_treenode_cpp.freeTreeNode;
import leetcode_treenode_cpp.serializeTreeNode;
using namespace std;
using namespace leetcode_treenode_cpp;

void println(int s)
{

    cout << s << endl;
}

void println(string s)
{
    cout << s << endl;
}

void assertEquals(string s1, string s2)
{
    CPPUNIT_ASSERT_EQUAL(s1, s2);
}

class StringTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(StringTest);

    CPPUNIT_TEST(test3);

    CPPUNIT_TEST(test5);
    CPPUNIT_TEST(test6);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}

    void tearDown() {}

    void test3()
    {
        println("test3 start");
        auto rawString = string("[4,2,7,1,3]");

        TreeNode *root = nullptr;
        int status = parseLeetCodeBinaryTree(rawString, &root);
        CPPUNIT_ASSERT_EQUAL(0, status);

        std::string result = LeetCodeTreeNodeToString(root);
        CPPUNIT_ASSERT_EQUAL(result, rawString);
        println(result);

        auto serialized = string("TreeNode{val:4,left:TreeNode{val:2,left:TreeNode{val:1,left:null,right:null},right:TreeNode{val:3,left:null,right:null}},right:TreeNode{val:7,left:null,right:null}}");
        println(serialized);
        CPPUNIT_ASSERT_EQUAL(serializeTreeNode(root),
                             serialized);
        freeTreeNode(root);
        println("test3 end");
    }
    void test5()
    {
        println("test5 start");
        auto rawString = string("[-4,-2,-7,-1,-3]");

        TreeNode *root = nullptr;
        int status = parseLeetCodeBinaryTree(rawString, &root);
        CPPUNIT_ASSERT_EQUAL(0, status);

        std::string result = LeetCodeTreeNodeToString(root);
        CPPUNIT_ASSERT_EQUAL(result, rawString);
        println(result);

        auto serialized = string("TreeNode{val:-4,left:TreeNode{val:-2,left:TreeNode{val:-1,left:null,right:null},right:TreeNode{val:-3,left:null,right:null}},right:TreeNode{val:-7,left:null,right:null}}");
        CPPUNIT_ASSERT_EQUAL(serializeTreeNode(root),
                             serialized);
        println(serialized);
        freeTreeNode(root);
        println("test5 end");
    }
    void test6()
    {
        println("test6 start");
        auto rawString = string("[1,null,-4,-2,-7,-1,-3]");

        TreeNode *root = nullptr;
        int status = parseLeetCodeBinaryTree(rawString, &root);
        CPPUNIT_ASSERT_EQUAL(0, status);

        std::string result = LeetCodeTreeNodeToString(root);
        CPPUNIT_ASSERT_EQUAL(result, rawString);
        println(result);
        println(serializeTreeNode(root));
        auto serialized = string("TreeNode{val:1,left:null,right:TreeNode{val:-4,left:TreeNode{val:-2,left:TreeNode{val:-1,left:null,right:null},right:TreeNode{val:-3,left:null,right:null}},right:TreeNode{val:-7,left:null,right:null}}}");
        CPPUNIT_ASSERT_EQUAL(serializeTreeNode(root),
                             serialized);

        freeTreeNode(root);
        println("test6 end");
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(StringTest);

int main(int argc, char *argv[])
{
    CppUnit::TestResult r;
    CppUnit::TestResultCollector rc;
    r.addListener(&rc);

    CppUnit::TestRunner runner;
    runner.addTest(CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    runner.run(r);

    CppUnit::TextOutputter o(&rc, std::cout);
    o.write();

    return rc.wasSuccessful() ? 0 : -1;
}