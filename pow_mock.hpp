#ifndef __Pow_Mock_HPP__
#define __Pow_Mock_HPP__

#include "base.hpp"

class EightPowMock : public Base {
    public:
        EightPowMock() : Base() { }
        virtual double evaluate() { return 8.0; }
        virtual std::string stringify() { return "(2 ** 3)"; }
};

class NegOnePowMock : public Base {
    public:
        NegOnePowMock() : Base() { }
        virtual double evaluate() { return -1.0; }
        virtual std::string stringify() { return "(-1 ** 3)"; }
};

class ZeroPowMock : public Base {
    public:
        ZeroPowMock() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "(0.0 ** 3.0)"; }
};

#endif
