#include "pch.h"
#include "../Project15/PrimeFactor.cpp"

using namespace std;

class PrimeFixture : public testing::Test {
public:
	PrimeFactor PrimeFactor;
	vector<int> expected;
};
TEST_F(PrimeFixture, of1) {
	expected = {};
	EXPECT_EQ(PrimeFactor.of(1), expected);
}

TEST_F(PrimeFixture, of2) {
	expected = {2};
	EXPECT_EQ(PrimeFactor.of(2), expected);
}

TEST_F(PrimeFixture, of3) {
	expected = { 3 };
	EXPECT_EQ(PrimeFactor.of(3), expected);
}

TEST_F(PrimeFixture, of4) {
	expected = { 2, 2 };
	EXPECT_EQ(PrimeFactor.of(4), expected);
}