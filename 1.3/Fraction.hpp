#pragma once
#include <string>

using namespace std;

class Fraction
{
private:
    long int first_integer, second_integer;
    unsigned short int first_fraction, second_fraction;
    
public:
    void Read();
    void Display();
    void Init(long int, unsigned short int, long int, unsigned short int);
    long int get_first_integer() {return first_integer;};
    unsigned short int get_first_fraction() {return first_fraction;};
    long int get_second_integer() {return second_integer;};
    unsigned short int get_second_fraction() {return second_fraction;};
    void set_first_integer(long int value) { first_integer = value; };
    void set_first_fraction(unsigned short int value) { first_fraction = value; };
    void set_second_integer(long int value) { second_integer = value; };
    void set_second_fraction(unsigned short int value) { second_fraction = value; };
    double sum();
    double multiplication();
    double convert(long int, unsigned short int);
    string toString(long int, unsigned short int);
    double toNumber(string);
    
};
