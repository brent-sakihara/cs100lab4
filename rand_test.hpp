#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(RandTest, RandLTHundredEvaluate) {
    Rand* test = new Rand();
    Op* test2 = new Op(100);
    EXPECT_LT(test->evaluate(), test2->evaluate());
}

TEST(RandTest, RandGTNegativeEvaluate) {
    Rand* test = new Rand();
    Op* test2 = new Op(-1);
    EXPECT_GT(test->evaluate(), test2->evaluate());
}

TEST(RandTest, RandGEZeroEvaluate) {
    Rand* test = new Rand();
    Op* test2 = new Op(0);
    EXPECT_GE(test->evaluate(), test2->evaluate());
}

TEST(RandTest, RandLENintetyNineEvaluate) {
    Rand* test = new Rand();
    Op* test2 = new Op(99);
    EXPECT_LE(test->evaluate(), test2->evaluate());
}

TEST(RandTest, RandNotDecimalEvaluate) {
    Rand* test = new Rand();
    Op* test2 = new Op(10.01234);
    EXPECT_NE(test->evaluate(), test2->evaluate());
}

#endif
