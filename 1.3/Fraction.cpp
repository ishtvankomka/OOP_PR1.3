#include "Fraction.hpp"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Fraction::Init(long int a1, unsigned short int a2, long int b1, unsigned short int b2)
{
        set_first_integer(a1);
        set_first_fraction(a2);
        set_second_integer(b1);
        set_second_fraction(b2);
}

void Fraction::Read()
{
    long int a1, b1;
    unsigned short int a2, b2;
    cout << "Set the first integer "; cin >> a1;
    cout << "Set the first fraction "; cin >> a2;
    cout << "Set the second integer "; cin >> b1;
    cout << "Set the second fraction "; cin >> b2;
    Init(a1, a2, b1, b2);
    cout << "First number: " << convert(get_first_integer(), get_first_fraction()) << endl;
    cout << "Second number: " << convert(get_second_integer(), get_second_fraction()) << endl;
}

void Fraction::Display()
{
    int botton;
    do
    {
        cout << "MENU:\n1 - +\n2 - *\n3 - EXIT" << endl;
        cin >> botton;
        switch(botton)
        {
            case 1:
                cout << "Result of + is " << sum() << endl;
                break;
            case 2:
                cout << "Result of * is " << multiplication() << endl;
                break;
            case 3:
                cout << "Program is terminated" << endl;
                break;
        }
    }
    while(botton != 3);
}

double Fraction::sum()
{
    return convert(get_first_integer(), get_first_fraction()) +
    convert(get_second_integer(), get_second_fraction());
}

double Fraction::multiplication()
{
    return convert(get_first_integer(), get_first_fraction()) *
    convert(get_second_integer(), get_second_fraction());
}

double Fraction::convert(long int a, unsigned short int b)
{
    return toNumber(toString(a, b));
}

string Fraction::toString(long int a, unsigned short int b)
{
    stringstream ss1;
    ss1 << a;
    string str1 = ss1.str();
    stringstream ss2;
    ss2 << b;
    string str2 = ss2.str();
    return str1 + "." + str2;
}

double Fraction::toNumber(string str)
{
    double a;
    istringstream ( str ) >> a;
    return a;
}
