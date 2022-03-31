#pragma once
#include <string>

using namespace std;

class Fraction
{
private:
    long int integer;
    unsigned short int fraction;
    
public:
    void Read();
    void Display() const;
    void Init(long int, unsigned short int);
    
    long int get_integer() const {return integer;};
    unsigned short int get_fraction() const {return fraction;};
    void set_integer(long int value) { integer = value; };
    void set_fraction(unsigned short int value) { fraction = value; };
    
    friend Fraction sum(Fraction, Fraction);
    friend Fraction multiplication(Fraction, Fraction);
    
    friend Fraction toFraction(double);
    double convertToDouble() const;
    string toString() const;
    double toNumber(string) const;
};
