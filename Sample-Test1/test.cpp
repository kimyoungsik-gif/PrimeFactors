#include "pch.h"
#include "../Project15/PrimeFactor.cpp"

using namespace std;

TEST(TestCaseName, TestName1) {

	PrimeFactor pf;
	auto ret = pf.of(1);
	vector<int> expected = {};
	EXPECT_EQ(ret, expected);
}