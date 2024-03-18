
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Line {
private:
    double first;  
    double second; 

public:
    Line() : first(1), second(0) {} 
    Line(double A, double B); 
    Line(const Line& line); 

    void setFirst(double A);
    void setSecond(double B);
    double getFirst() const; 
    double getSecond() const;

    Line& operator=(const Line& line); // присвоєння

    Line& operator++(); // префіксний інкремент
    Line operator++(int); // постфіксний інкремент
    Line& operator--(); // префіксний декремент
    Line operator--(int); // постфіксний декремент
    friend istream& operator>>(istream& in, Line& line); // введення з клавіатури
    friend ostream& operator<<(ostream& out, const Line& line); // виводу на екран

    operator string() const; // перетворення у літерний рядок

    double function(double x) const; // обчислення для заданого x значення функції y
};

