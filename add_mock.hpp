#ifndef __Add_Mock_HPP__
#define __Add_Mock_HPP__

#include "base.hpp"

class ThreeAddMock : public Base {
    public:
        ThreeAddMock() : Base() { }
        virtual double evaluate() { return 3.5; }
        virtual std::string stringify() { return "(2.100000 + 1.400000)"; }
};

class NegSixAddMock : public Base {
    public:
        NegSixAddMock() : Base() { }
        virtual double evaluate() { return -6.5; }
        virtual std::string stringify() { return "(-3.500000 + -3.000000)"; }
};

class ZeroAddMock : public Base {
    public:
        ZeroAddMock() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "(-1.000000 + 1.000000)"; }
};


#endif

