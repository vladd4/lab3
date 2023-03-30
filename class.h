#pragma once
#include <iostream>
using namespace std;

class Tline {
    int a, b, c;
public:
    void setA(int num); // сетери класу
    void setB(int num);
    void setC(int num);

    int getA(); // гетери класу
    int getB();
    int getC();

    void Print(); // функція для виведення прямої з її коефіцієнтами
};
