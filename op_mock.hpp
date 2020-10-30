#ifndef __OP_Mock_HPP__
#define __OP_Mock_HPP__

#include "base.hpp"

class FiveOpMock : public Base {
    public:
        FiveOpMock() : Base() { }
        virtual double evaluate() { return 5.2; }
        virtual std::string stringify() { return "5.200000"; }
};

class NegThreeOpMock : public Base {
    public:
	NegThreeOpMock() : Base() { }
	virtual double evaluate() { return -3.6; }
	virtual std::string stringify() { return "-3.600000"; }
};

class ZeroOpMock : public Base {
    public:
	ZeroOpMock() : Base() { }
	virtual double evaluate() { return 0; }
	virtual std::string stringify() { return "0.000000"; }
};

#endif //__OP_Mock_HPP__
