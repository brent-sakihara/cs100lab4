#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "pow.hpp"
#include "OpMock.cpp"

TEST(PowTest, PowEightAndTwoEvaluate) {
    Op* test = new Op(8);
    Op* test2 = new Op(2);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 64.000000);
}

TEST(PowTest, PowNegOneAndThreeEvaluate) {
    Op* test = new Op(-1);
    Op* test2 = new Op(3);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), -1.000000);
}

TEST(PowTest, PowFourPointEightAndTwoPointFiveEvaluate) {
    Op* test = new Op(4.8);
    Op* test2 = new Op(2.5);
    Pow* power = new Pow(test, test2);
    EXPECT_NEAR(power->evaluate(), 50.478111, 0.000001);
}

TEST(PowTest, PowNegativeSixtyFourAndOneEvaluate) {
    Op* test = new Op(-64);
    Op* test2 = new Op(1);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), -64.000000);
}

TEST(PowTest, PowHundredAndZeroEvaluate) {
    Op* test = new Op(100);
    Op* test2 = new Op(0);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 1.000000);
}

TEST(PowTest, PowFiveAndThreeStringify) {
    Op* test = new Op(5);
    Op* test2 = new Op(3);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->stringify(), "(5.000000 ** 3.000000)");
}

TEST(PowTest, PowNegFivePointEightAndTwoPointSixFourStringify) {
    Op* test = new Op(-5.8);
    Op* test2 = new Op(2.64);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->stringify(), "(-5.800000 ** 2.640000)");
}

TEST(PowTest, PowNegativeTwentyFourAndEightStringify) {
    Op* test = new Op(-24);
    Op* test2 = new Op(8);
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->stringify(), "(-24.000000 ** 8.000000)");
}

TEST(PowTest, PowZeroAndFourEvaluate) {
    TwentyMultZeroMock* test = new TwentyMultZeroMock();
    TwoAddTwoMock* test2 = new TwoAddTwoMock();
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 0.000000);
}

TEST(PowTest, PowEightAndNegativeThreeEvaluate) {
    EightRandMock* test = new EightRandMock();
    NegativeNineDivThreeMock* test2 = new NegativeNineDivThreeMock();
    Pow* power = new Pow(test, test2);
    EXPECT_NEAR(power->evaluate(), 0.001953, 0.000001);
}

TEST(PowTest, PowTwentyAndZeroEvaluate) {
    Op* test = new Op(20);
    ZeroSubZeroMock* test2 = new ZeroSubZeroMock();
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 1.000000);
}

TEST(PowTest, PowEighthAndNegativeEightEvaluate) {
    OneDivEightMock* test = new OneDivEightMock();
    NegativeThreeSubFiveMock* test2 = new NegativeThreeSubFiveMock();
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 16777216.000000);
}

TEST(PowTest, PowNegativeThreeAndNegativeEightEvaluate) {
    NegativeNineDivThreeMock* test = new NegativeNineDivThreeMock();
    NegativeThreeSubFiveMock* test2 = new NegativeThreeSubFiveMock();
    Pow* power = new Pow(test, test2);
    EXPECT_NEAR(power->evaluate(), 0.000152, 0.000001);
}

TEST(PowTest, PowOneAndNegativeThreeEvaluate) {
    Op* test = new Op(1);
    EightAddNegativeElevenMock* test2 = new EightAddNegativeElevenMock();
    Pow* power = new Pow(test, test2);
    EXPECT_EQ(power->evaluate(), 1.000000);
}


#endif
