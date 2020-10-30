#ifndef __RAND_mock_HPP__
#define __RAND_mock_HPP__

#include "base.hpp"

class ThirteenRandMock : public Base {
    public:
        ThirteenRandMock() : Base() {}
        virtual double evaluate() { return 13.5; }
        virtual std::string stringify() { return "13.500000"; }
};

class NegTwelveRandMock : public Base {
    public:
        NegTwelveRandMock() : Base() {}
        virtual double evaluate() { return -12.3; }
        virtual std::string stringify() { return "-12.300000"; }
};

class ZeroRandMock : public Base {
    public:
	ZeroRandMock() : Base() {}
	virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return "0.000000"; }

};


#endif //__RAND_mock_HPP__

