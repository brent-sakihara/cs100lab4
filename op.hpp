#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() {
	num = value;
	}
        double evaluate();
        std::string stringify();
     private:
	double num = 0;
};

#endif //__OP_HPP__
