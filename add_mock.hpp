#ifndef __Add_Mock_HPP__
#define __Add_Mock_HPP__

#include "base.hpp"

class ThreeAddMock : public Base {
    public:
        ThreeAddMock() : Base() { }
        virtual double evaluate() { return 3.5; }
        virtual std::string stringify() { return "(2.1 + 1.4)"; }
};

class NegSixAddMock : public Base {
    public:
        NegSixAddMock() : Base() { }
        virtual double evaluate() { return -6.5; }
        virtual std::string stringify() { return "(-3.5 + -3)"; }
};

class ZeroAddMock : public Base {
    public:
        ZeroAddMock() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "(-1.0 + 1.0)"; }
};


#endif

