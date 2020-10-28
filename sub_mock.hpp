#ifndef __Sub_Mock_HPP__
#define __Sub_Mock_HPP__

#include "base.hpp"

class OneSubMock : public Base {
    public:
        OneSubMock() : Base() { }

	virtual double evaluate() { return 1.5; }
	virtual std::string stringify() { return "(3.0 - 1.5)"; }
}

class NegThreeSubMock : public Base {
    public:
        NegThreeSubMock() : Base() { }

        virtual double evaluate() { return -3.5; }
        virtual std::string stringify() { return "(-1.8 - 1.7)"; }

}

class ZeroSubMock : public Base {
    public:
        ZeroSubMock() : Base() { }

        virtual double evaluate() { return 0.0; }
        virtual std::string stringify { return "(3.0 - 3.0)"; }
}

#endif

