#ifndef __Arithmetic_Operations_HPP__
#define __Arithmetic_Operations_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
        Mult(Base* leftN, Base* rightN) : Base() {left = leftN; right = rightN; }
        virtual double evaluate();
        virtual std::string stringify();
    private:
	Base* left;
	Base* right;

};

#endif
