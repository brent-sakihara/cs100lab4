#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEightEvaluate) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpNegOneEvaluate) {
    Op* test = new Op(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(OpTest, OpFourPointTwoFiveEvaluate) {
    Op* test = new Op(4.25);
    EXPECT_EQ(test->evaluate(), 4.25);
}

TEST(OpTest, OpSevenDoubleEvaluate) {
    Op* test = new Op(-7.654321);
    EXPECT_EQ(test->evaluate(), -7.654321);
}

TEST(OpTest, OpHundredThousandStringify) {
    Op* test = new Op(100001);
    EXPECT_EQ(test->stringify(), "100001.000000");
}

TEST(OpTest, OpNegEightThousandDoubleStringify) {
    Op* test = new Op(-8436.18);
    EXPECT_EQ(test->stringify(), "-8436.180000");
}

TEST(OpTest, OpBigNumberStringify) {
    Op* test = new Op(987123);
    EXPECT_EQ(test->stringify(), "987123.000000");
}

TEST(OpTest, OpSmallNumStringify) {
    Op* test = new Op(0.25193485);
    EXPECT_EQ(test->stringify(), "0.251935");
}

TEST(OpTest, OpNinetyDoubleEvaluateStringify) {
    Op* test = new Op(90.6745);
    EXPECT_EQ(test->evaluate(), 90.6745);
    EXPECT_EQ(test->stringify(), "90.674500");
}

TEST(OpTest, Op2DoubleEvaluateStringify) {
    Op* test = new Op(2.1000001);
    EXPECT_EQ(test->evaluate(), 2.1000001);
    EXPECT_EQ(test->stringify(), "2.100000");
}



#endif //__OP_TEST_HPP__
