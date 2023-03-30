#include "class.h"

void Tline::setA(int num) {
    a = num;
}
void Tline::setB(int num) {
    b = num;
}
void Tline::setC(int num) {
    c = num;
}
int Tline::getA() {
    return a;
}
int Tline::getB() {
    return b;
}
int Tline::getC() {
    return c;
}
void Tline::Print() {
    if (b < 0 && c < 0) cout << a << "x + (" << b << "y) + (" << c << ") = 0" << endl;
    else if (b < 0) cout << a << "x + (" << b << "y) + " << c << " = 0" << endl;
    else if (c < 0) cout << a << "x + " << b << "y + (" << c << ") = 0" << endl;
    if (b >= 0 && c >= 0) cout << a << "x + " << b << "y + " << c << " = 0" << endl;
}