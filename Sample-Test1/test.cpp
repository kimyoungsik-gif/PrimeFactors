#include "pch.h"
#include "../Project15/PrimeFactor.cpp"

using namespace std;

TEST(TestCaseName, of1) {

	PrimeFactor pf;
	auto ret = pf.of(1);
	vector<int> expected = {};
	EXPECT_EQ(ret, expected);
}

TEST(TestCaseName, of2) {

	PrimeFactor pf;
	auto ret = pf.of(2);
	vector<int> expected = {2};
	EXPECT_EQ(ret, expected);
}