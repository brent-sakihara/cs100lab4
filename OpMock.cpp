#ifndef __OPMOCK_HPP__
#define __OPMOCK_HPP__

#include "base.hpp"

//Op class mocks
class SevenOpMock: public Base {
    public:
        SevenOpMock(): Base() { };

        double evaluate() { return 7.5; }
        std::string stringify() { return "7.500000"; }
};

class ZeroOpMock: public Base {
    public:
        ZeroOpMock(): Base() { };

        double evaluate() { return 0.0; }
        std::string stringify() { return "0.000000"; }
};

class NegativeFiveOpMock: public Base {
    public:
        NegativeFiveOpMock(): Base() { };

        double evaluate() { return -5; }
        std::string stringify() { return "-5.000000"; }
};

class NegativeSixteenPointFour: public Base {
    public:
	NegativeSixteenPointFour(): Base() { };
	double evaluate() { return -16.5; }
	std::string stringify() { return "-16.500000"; }
};

//Rand class mocks
class EightRandMock : public Base {
     public:
	EightRandMock() : Base() { };
	double evaluate() {return 8;}
	std::string stringify() {return "8.000000";}
};

class TwoPointOneRandMock : public Base {
     public:
        TwoPointOneRandMock() : Base() { };
        double evaluate() {return 2.1;}
        std::string stringify() {return "2.100000";}
};

class NegativeFourPointFiveRandMock : public Base {
     public:
        NegativeFourPointFiveRandMock() : Base() { };
        double evaluate() {return -4.5;}
        std::string stringify() {return "-4.500000";}
};

class NegativeTwentyOneRandMock : public Base {
     public:
        NegativeTwentyOneRandMock() : Base() { };
        double evaluate() {return -21;}
        std::string stringify() {return "-21.000000";}
};


//Pow class mocks
class FourPowTwoMock : public Base {
     public:
	FourPowTwoMock() : Base() { };
	double evaluate() { return 16.000000; }
	std:: string stringify() { return "(4.000000 ** 2.000000)"; }
};

class OnePowOneMock : public Base {
     public:
        OnePowOneMock() : Base() { };
        double evaluate() { return 1.000000; }
        std:: string stringify() { return "(1.000000 ** 1.000000)"; }
};

class EightPowThreeMock : public Base {
     public:
        EightPowThreeMock() : Base() { };
        double evaluate() { return 512.000000; }
        std:: string stringify() { return "(8.000000 ** 3.000000)"; }
};

class NegativeNinePowTwoMock : public Base {
     public:
        NegativeNinePowTwoMock() : Base() { };
        double evaluate() { return 81.000000; }
        std:: string stringify() { return "(-9.000000 ** 2.000000)"; }
};

class FourPowNegativeOneMock : public Base {
     public:
        FourPowNegativeOneMock() : Base() { };
        double evaluate() { return 0.250000; }
        std:: string stringify() { return "(4.000000 ** -1.000000)"; }
};

class OnePowZeroMock : public Base {
     public:
        OnePowZeroMock() : Base() { };
        double evaluate() {return 1;}
        std::string stringify() {return "1.000000 ** 0.000000";}
};



//Mult class mocks
class EightMultTwoMock : public Base {
      public:
	EightMultTwoMock() : Base() { };
	double evaluate() {return 16;}
	std::string stringify() {return "(8.000000 * 2.000000)";}
};

class FivePointOneMultNegativeThreeMock : public Base {
      public:
        FivePointOneMultNegativeThreeMock() : Base() { };
        double evaluate() {return -15.3;}
        std::string stringify() {return "(5.100000 * -3.000000)";}
};

class NegativeTenMultFifteenMock : public Base {
      public:
        NegativeTenMultFifteenMock() : Base() { };
        double evaluate() {return -150;}
        std::string stringify() {return "(-10.000000 * 15.000000)";}
};

class TwentyMultZeroMock : public Base {
      public:
        TwentyMultZeroMock() : Base() { };
        double evaluate() {return 0;}
        std::string stringify() {return "(20.000000 * 0.000000)";}
};

class EightPointSevenMultSixPointOneMock : public Base {
     public:
        EightPointSevenMultSixPointOneMock() : Base() { };
        double evaluate() {return 53.07;}
        std::string stringify() {return "8.700000 / 6.100000";}
};


//Div class mocks
class FourDivTwoMock : public Base {
     public:
	FourDivTwoMock() : Base() { };
	double evaluate() {return 2;}
	std::string stringify() {return "4.000000 / 2.000000";}
};

class OneDivEightMock : public Base {
     public:
        OneDivEightMock() : Base() { };
        double evaluate() {return 0.125;}
        std::string stringify() {return "1.000000 / 8.000000";}
};

class NegativeNineDivThreeMock : public Base {
     public:
        NegativeNineDivThreeMock() : Base() { };
        double evaluate() {return -3;}
        std::string stringify() {return "-9.000000 / 3.000000";}
};

class TenDivNegativeSixteenMock : public Base {
     public:
        TenDivNegativeSixteenMock() : Base() { };
        double evaluate() {return -0.625;}
        std::string stringify() {return "10.000000 / -16.000000";}
};

class OnePointFiveDivThreePointTwoMock : public Base {
     public:
        OnePointFiveDivThreePointTwoMock() : Base() { };
        double evaluate() {return 0.46875;}
        std::string stringify() {return "1.500000 / 3.200000";}
};

class ZeroDivOneMock : public Base {
     public:
        ZeroDivOneMock() : Base() { };
        double evaluate() {return 0;}
        std::string stringify() {return "0.000000 / 1.000000";}
};


//Add class mocks
class TwoAddTwoMock : public Base {
     public:
	TwoAddTwoMock() : Base() { };
	double evaluate() {return 4;}
	std::string stringify() {return "2.000000 + 2.000000";}
};

class FourAddNegativeFiveMock : public Base {
     public:
        FourAddNegativeFiveMock() : Base() { };
        double evaluate() {return -1;}
        std::string stringify() {return "4.000000 + -5.000000";}
};

class OneAddSixteenPointThreeMock : public Base {
     public:
        OneAddSixteenPointThreeMock() : Base() { };
        double evaluate() {return 17.3;}
        std::string stringify() {return "1.000000 + 16.300000";}
};

class EightAddNegativeElevenMock : public Base {
     public:
        EightAddNegativeElevenMock() : Base() { };
        double evaluate() {return -3;}
        std::string stringify() {return "8.000000 + -11.000000";}
};

class OnePointTwoThreeAddZeroMock : public Base {
     public:
        OnePointTwoThreeAddZeroMock() : Base() { };
        double evaluate() {return 1.23;}
        std::string stringify() {return "1.230000 + 0.000000";}
};

class ZeroAddZeroMock : public Base {
     public:
        ZeroAddZeroMock() : Base() { };
        double evaluate() {return 0;}
        std::string stringify() {return "0.000000 + 0.000000";}
};


//Sub class mocks
class EightSubFourMock : public Base {
     public:
	EightSubFourMock() : Base() { };
	double evaluate() {return 4;}
	std::string stringify() {return "8.000000 - 4.000000";}
};

class TwoPointTwoSubOneMock : public Base {
     public:
        TwoPointTwoSubOneMock() : Base() { };
        double evaluate() {return 1.1;}
        std::string stringify() {return "2.200000 - 1.000000";}
};

class NegativeFiveSubNegativeOneMock : public Base {
     public:
        NegativeFiveSubNegativeOneMock() : Base() { };
        double evaluate() {return -4;}
        std::string stringify() {return "-5.000000 - -1.000000";}
};

class NegativeThreeSubFiveMock : public Base {
     public:
        NegativeThreeSubFiveMock() : Base() { };
        double evaluate() {return -8;}
        std::string stringify() {return "-3.000000 - 5.000000";}
};

class ZeroSubZeroMock : public Base {
     public:
        ZeroSubZeroMock() : Base() { };
        double evaluate() {return 0;}
        std::string stringify() {return "0.000000 - 0.000000";}
};


#endif
