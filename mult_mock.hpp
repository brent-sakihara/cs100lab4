#ifndef __Mult_Mock_HPP__
#define __Mult_Mock_HPP__

#include "base.hpp"

class FiveMultMock : public Base {
    public:
        FiveMultMock() : Base() { }
        virtual double evaluate() { return 5.2; }
        virtual std::string stringify() { return "(2.6 * 2)"; }
};

class NegFiveMultMock : public Base {
    public:
        NegFiveMultMock() : Base() { }
	virtual double evaluate() { return -5.0; }
        virtual std::string stringify() { return "(-2.5 * 2)"; }        
};

class ZeroMultMock : public Base {
    public:
        ZeroMultMock() : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "(0.0 * 5.0)"; } 
};

#endif 

