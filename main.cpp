#include "stdafx.h"
#include "CppUnitTest.h"
#include"../软件工程作业/test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
TEST_CLASS(UnitTest1)
{
public:

TEST_METHOD(TestMethod1)
{
int n = 6;
int a[8] = { 0，1，2，3，4，5 };
int True = 18;
Assert::AreEqual(True, Max(a,n));
}

};
TEST_CLASS(UnitTest2)
{
public:

TEST_METHOD(TestMethod1)
{
int n = 6;
int a[6] = { -1，-3，-5,39，-7,9 };
int True = 20;
Assert::AreEqual(True, Max(a, n));
}

};
TEST_CLASS(UnitTest3)
{
public:

TEST_METHOD(TestMethod1)
{
int n = 5;
int a[5] = { -1,-2,-3,-4,-5 };
int True = 0;
Assert::AreEqual(True, Max(a, n));
}

};
}
