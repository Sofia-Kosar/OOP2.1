// Line.cpp
#include "Line.h"
#include <sstream>

Line::Line(double A, double B) {
    if (A == 0) {
        throw invalid_argument("Invalid argument: A cannot be 0");
    }
    first = A;
    second = B;
}

Line::Line(const Line& line) : first(line.first), second(line.second) {} // конструктор копіювання
double Line::getFirst() const {
    return first;
}

double Line::getSecond() const {
    return second;
}

void Line::setFirst(double A) {
    if (A == 0) {
        throw invalid_argument("Invalid argument: A cannot be 0");
    }
    first = A;
}

void Line::setSecond(double B) {
    second = B;
}

Line& Line::operator=(const Line& line) {
    if (&line == this)
        return *this;
    first = line.first;
    second = line.second;
    return *this;
}

Line& Line::operator++() {
    ++first;
    return *this;
}

Line Line::operator++(int) {
    Line temp = *this;
    ++second;
    return temp;
}

Line& Line::operator--() {
    --first;
    return *this;
}

Line Line::operator--(int) {
    Line temp = *this;
    --second;
    return temp;
}

istream& operator>>(istream& in, Line& line) {
    cout << "Enter coefficients A and B:" << endl;
    in >> line.first >> line.second;
    if (line.first == 0) {
        throw invalid_argument("Invalid argument: A cannot be 0");
    }
    return in;
}

ostream& operator<<(ostream& out, const Line& line) {
    out << "y = " << line.first << " * x + " << line.second;
    return out;
}

Line::operator string() const {
    return "y = " + to_string(first) + " * x + " + to_string(second);
}

double Line::function(double x) const {
    return first * x + second;
}
