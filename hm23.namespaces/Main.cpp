#include <iostream>
#include <windows.h>

#include "Fraction.h"
#include "Complex.h"

using namespace std;
using namespace frn;
using namespace cmx;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Fraction f;
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    f = f1 + f2;
    cout << "сума = ";
    f.Print();

    f = f1 - f2;
    cout << "р≥зниц€ = ";
    f.Print();

    f = f1 * f2;
    cout << "добуток = ";
    f.Print();

    f = f1 / f2;
    cout << "д≥ленн€ = ";
    f.Print();


    cout << "--------------------------------" << endl;


    Complex c;
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -2.0);

    c = c1 + c2;
    cout << "сума = ";
    c.Print();

    c = c1 - c2;
    cout << "р≥зниц€ = ";
    c.Print();

    c = c1 * c2;
    cout << "добуток = ";
    c.Print();

    c = c1 / c2;
    cout << "д≥ленн€ = ";
    c.Print();



    return 0;
}
