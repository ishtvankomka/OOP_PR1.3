#include <iostream>
#include "Fraction.hpp"
using namespace std;

int main() {
    Fraction n1;
    n1.Read();
    n1.Display();
    
    Fraction n2;
    n2.Read();
    n2.Display();
    
    Fraction nsum;
    nsum = sum(n1, n2);
    cout << "Sum:" << endl;
    nsum.Display();
    
    Fraction nmultiplication;
    nmultiplication = multiplication(n1, n2);
    cout << "Multiplication:" << endl;
    nmultiplication.Display();

    return 0;
}
