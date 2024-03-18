
#include <iostream>
#include "Line.h"

int main() {
    Line a(1, 1);
    cout << a << endl;
    double x;
    cout << "Enter x value: ";
    cin >> x;
    cout << "y at x = " << x << ": " << a.function(x) << endl;
    Line b;
    cout << "Input coefficients A and B ->" << endl;
    cin >> b;
    cout << b << endl;
    cout << "Enter x value: ";
    cin >> x;
    cout << "y at x = " << x << ": " << b.function(x) << endl;
    cout << "Size of class with #pragma pack(1): " << sizeof(a) << endl;
#pragma pack(1)
    cout << "Size of class without #pragma pack(1): " << sizeof(a) << endl;
    return 0;
 
}
