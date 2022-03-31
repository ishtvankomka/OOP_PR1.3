#include "Fraction.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
using namespace std;

void Fraction::Read()
{
    long int a;
    unsigned short int b;
    cout << "Set the integer "; cin >> a;
    cout << "Set the fraction "; cin >> b;

    Init(a, b);
}

void Fraction::Display() const
{
    double a = convertToDouble();
    cout << a <<  endl;
}

void Fraction::Init(long int a, unsigned short int b)
{
    set_integer(a);
    set_fraction(b);
}

Fraction toFraction(double n)
{
    stringstream s;
    s << n;
    string str = s.str();
    string integer_a = strtok(str.data(), ".");
    string fraction_a = strtok(0, "");

    Fraction nn;
    long int integer_b;
    istringstream ( integer_a ) >> integer_b;
    nn.set_integer(integer_b);
    
    unsigned short int fraction_b;
    istringstream ( fraction_a ) >> fraction_b;
    nn.set_fraction(fraction_b);
    
    return nn;
}

Fraction sum(Fraction a, Fraction b)
{
    double sum =  a.convertToDouble() + b.convertToDouble();
    return toFraction(sum);
}

Fraction multiplication(Fraction a, Fraction b)
{
    double sum =  a.convertToDouble() * b.convertToDouble();
    return toFraction(sum);
}

double Fraction::convertToDouble() const
{
    return toNumber(toString());
}

string Fraction::toString() const
{
    long int integer = get_integer();
    unsigned short int fraction = get_fraction();
    stringstream ss1;
    ss1 << integer;
    string str1 = ss1.str();
    stringstream ss2;
    ss2 << fraction;
    string str2 = ss2.str();
    return str1 + "." + str2;
}

double Fraction::toNumber(string str) const
{
    double number;
    istringstream ( str ) >> number;
    return number;
}
