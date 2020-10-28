#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op_mock.hpp"
#include "pow_mock.hpp"
#include "rand_mock.hpp"
#include "arithmetic_operations.hpp"

TEST(SubTest, SubEvaluatePosAndPos) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_NEAR(difference->evaluate(), 0.0, 0.0001);
}

TEST(SubTest, SubEvaluatePosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_NEAR(difference->evaluate(), 8.8, 0.0001);
}

TEST(SubTest, SubEvaluateNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_NEAR(difference->evaluate(), 0.0, 0.0001);
}

TEST(SubTest, SubEvaluateNegAndZero) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_NEAR(difference->evaluate(), -3.6, 0.0001);
}

TEST(SubTest, SubEvaluateNegAndDiv) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        FiveOpMock* val2 = new FiveOpMock();
	NegThreeOpMock* val3 = new NegThreeOpMock();
	Div* val4 = new Div(val2, val3);
        Sub* difference = new Sub(val1, val4);
        EXPECT_NEAR(difference->evaluate(), -2.155555, 0.0001);
}

TEST(SubTest, SubStringifyPosAndPos) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_EQ(difference->stringify(), "(5.2 - 5.2)");
}

TEST(SubTest, SubStringifyPosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_EQ(difference->stringify(), "(5.2 - -3.6)");
}

TEST(SubTest, SubStringifyNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_EQ(difference->stringify(), "(-3.6 - -3.6)");
}

TEST(SubTest, SubStringifyNegAndZero) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Sub* difference = new Sub(val1, val2);
        EXPECT_EQ(difference->stringify(), "(-3.6 - 0)");
}

TEST(SubTest, SubStringifyMultAndDiv) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
	Mult* val3 = new Mult(val1, val2);
	NegThreeOpMock* val4 = new NegThreeOpMock();
	FiveOpMock* val5 = new FiveOpMock();
	Div* val6 = new Div(val4, val5);
        Sub* difference = new Sub(val3, val6);
        EXPECT_EQ(difference->stringify(), "((5.2 * 5.2) - (-3.6 / 5.2))");
}

#endif
