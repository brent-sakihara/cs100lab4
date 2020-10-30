#ifndef __Sub_Mock_HPP__
#define __Sub_Mock_HPP__

#include "base.hpp"

class OneSubMock : public Base {
    public:
        OneSubMock() : Base() { }

	virtual double evaluate() { return 1.5; }
	virtual std::string stringify() { return "(3.000000 - 1.500000)"; }
}

class NegThreeSubMock : public Base {
    public:
        NegThreeSubMock() : Base() { }

        virtual double evaluate() { return -3.5; }
        virtual std::string stringify() { return "(-1.800000 - 1.700000)"; }

};

class ZeroSubMock : public Base {
    public:
        ZeroSubMock() : Base() { }

        virtual double evaluate() { return 0.0; }
        virtual std::string stringify { return "(3.000000 - 3.000000)"; }
};

#endif

