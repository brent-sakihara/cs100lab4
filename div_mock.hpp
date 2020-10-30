#ifndef __Div_Mock_HPP__
#define __Div_Mock_HPP__

#include "base.hpp"

class TwoDivMock : public Base {
    public:
        TwoDivMock() : Base() { }
        virtual double evaluate() { return 2.5; }
        virtual std::string stringify() { return "(5.000000 / 2.000000)"; }
};

class NegTenDivMock : public Base {
    public:
        NegTenDivMock() : Base() { }
        virtual double evaluate() { return -10.0; }
        virtual std::string stringify() { return "(-20.000000 / 2.000000)"; }

};

class ZeroDivMock : public Base {
    public:
        ZeroDivMock() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "(0.000000 / 2.000000)"; }

};

#endif

