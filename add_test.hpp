#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op_mock.hpp"
#include "pow_mock.hpp"
#include "rand_mock.hpp"
#include "arithmetic_operations.hpp"

TEST(AddTest, AddEvaluatePosAndPos) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_NEAR(sum->evaluate(), 10.4, 0.0001);
}

TEST(AddTest, AddEvaluatePosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_NEAR(sum->evaluate(), 1.6, 0.0001);
}

TEST(AddTest, AddEvaluateNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_NEAR(sum->evaluate(), -7.2, 0.0001);
}

TEST(AddTest, AddEvaluatePosAndZero) {
        FiveOpMock* val1 = new FiveOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_NEAR(sum->evaluate(), 5.2, 0.0001);
}

TEST(AddTest, AddEvaluatePosAndRand) {
        FiveOpMock* val1 = new FiveOpMock();
        NegTwelveRandMock* val2 = new NegTwelveRandMock();
        Add* sum = new Add(val1, val2);
        EXPECT_NEAR(sum->evaluate(), -7.1, 0.0001);
}

TEST(AddTest, AddStringifyPosAndPos) {
        FiveOpMock* val1 = new FiveOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_EQ(sum->stringify(), "(5.200000 + 5.200000)");
}

TEST(AddTest, AddStringifyPosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_EQ(sum->stringify(), "(5.200000 + -3.600000)");
}

TEST(AddTest, AddStringifyNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_EQ(sum->stringify(), "(-3.600000 + -3.600000)");
}

TEST(AddTest, AddStringifyNegAndZero) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        ZeroOpMock* val2 = new ZeroOpMock();
        Add* sum = new Add(val1, val2);
        EXPECT_EQ(sum->stringify(), "(-3.600000 + 0.000000)");
}

TEST(AddTest, AddStringifyPowAndMult) {
        EightPowMock* val1 = new EightPowMock();
        FiveOpMock* val2 = new FiveOpMock();
	NegThreeOpMock* val3 = new NegThreeOpMock();
	Mult* val4 = new Mult(val2, val3);
        Add* sum = new Add(val1, val4);
        EXPECT_EQ(sum->stringify(), "((2.000000 ** 3.000000) + (5.200000 * -3.600000))");
}


#endif
