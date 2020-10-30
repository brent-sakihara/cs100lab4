#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op_mock.hpp"
#include "pow_mock.hpp"
#include "rand_mock.hpp"
#include "add_mock.hpp"
#include "arithmetic_operations.hpp"

//MultTests

TEST(MultTest, MultEvaluatePosAndPos) {
	FiveOpMock* val1 = new FiveOpMock(); 
	FiveOpMock* val2 = new FiveOpMock();
	Mult* product = new Mult(val1, val2);
	EXPECT_NEAR(product->evaluate(), 27.04, 0.0001);
}

TEST(MultTest, MultEvaluateNegAndPos) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_NEAR(product->evaluate(), -18.72, 0.0001);
}

TEST(MultTest, MultEvaluateNegAndNeg) {
	NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_NEAR(product->evaluate(), 12.96 , 0.0001);
}

TEST(MultTest, MultEvaluateZeroAndPos) {
        ZeroOpMock* val1 = new ZeroOpMock();
        FiveOpMock* val2 = new FiveOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_NEAR(product->evaluate(), 0.0, 0.0001);
}

TEST(MultTest, MultEvaluateAddAndNeg) {
	ThreeAddMock* val1 = new ThreeAddMock();
	NegThreeOpMock* val2 = new NegThreeOpMock();
	Mult* product = new Mult(val1, val2);
	EXPECT_NEAR(product->evaluate(), -12.6, 0.0001);	
}

TEST(MultTest, MultStringifyPosAndPos) {
	FiveOpMock* val1 = new FiveOpMock();
	FiveOpMock* val2 = new FiveOpMock();
	Mult* product = new Mult(val1, val2);
	EXPECT_EQ(product->stringify(), "(5.2 * 5.2)");
}

TEST(MultTest, MultStringifyPosAndNeg) {
        FiveOpMock* val1 = new FiveOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_EQ(product->stringify(), "(5.2 * -3.6)");
}

TEST(MultTest, MultStringifyNegAndNeg) {
        NegThreeOpMock* val1 = new NegThreeOpMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_EQ(product->stringify(), "(-3.6 * -3.6)");
}

TEST(MultTest, MultStringifyZeroAndNeg) {
        ZeroOpMock* val1 = new ZeroOpMock();
	NegThreeOpMock* val2 = new NegThreeOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_EQ(product->stringify(), "(0 * -3.6)");
}

TEST(MultTest, MultStringifyAddAndNeg) {
        NegSixAddMock* val1 = new NegSixAddMock();
        NegThreeOpMock* val2 = new NegThreeOpMock();
        Mult* product = new Mult(val1, val2);
        EXPECT_EQ(product->stringify(), "((-3.5 + -3) * -3.6)");
}



#endif //__MULT_TEST_HPP__
