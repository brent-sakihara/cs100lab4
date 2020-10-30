#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op_mock.hpp"
#include "pow_mock.hpp"
#include "rand_mock.hpp"
#include "add_mock.hpp"
#include "arithmetic_operations.hpp"

//DivTests

TEST(DivTest, DivEvaluatePosAndPos) {
	FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_NEAR(quotient->evaluate(), 1.0, 0.0001);
}

TEST(DivTest, DivEvaluatePosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_NEAR(quotient->evaluate(), -1.444444, 0.0001);
}

TEST(DivTest, DivEvaluateNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_NEAR(quotient->evaluate(), 1.0, 0.0001);
}

TEST(DivTest, DivEvaluateNegAndZero) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_THROW(quotient->evaluate(), std::runtime_error);
}

TEST(DivTest, DivEvaluateNegAndPow) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        EightPowMock* val2 = new EightPowMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_NEAR(quotient->evaluate(), -0.45, 0.0001);
}

TEST(DivTest, DivStringifyPosAndPos) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_EQ(quotient->stringify(), "(5.2 / 5.2)");
}                              

TEST(DivTest, DivStringifyPosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_EQ(quotient->stringify(), "(5.2 / -3.6)");
}

TEST(DivTest, DivStringifyNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_EQ(quotient->stringify(), "(-3.6 / -3.6)");
}

TEST(DivTest, DivStringifyPosAndZero) {
        FiveOpMock* val1 = new FiveOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_EQ(quotient->stringify(), "(5.2 / 0)");
}

TEST(DivTest, DivStringifyPosAndPow) {
        FiveOpMock* val1 = new FiveOpMock();
        NegOnePowMock* val2 = new NegOnePowMock();
        Div* quotient = new Div(val1, val2);
        EXPECT_EQ(quotient->stringify(), "(5.2 / (-1 ** 3))");
}

#endif
