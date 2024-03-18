
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

    Line& operator=(const Line& line); // ���������

    Line& operator++(); // ���������� ���������
    Line operator++(int); // ����������� ���������
    Line& operator--(); // ���������� ���������
    Line operator--(int); // ����������� ���������
    friend istream& operator>>(istream& in, Line& line); // �������� � ���������
    friend ostream& operator<<(ostream& out, const Line& line); // ������ �� �����

    operator string() const; // ������������ � ������� �����

    double function(double x) const; // ���������� ��� �������� x �������� ������� y
};

