#include "functions.h"
#include "class.h"

void input(int& v1, int& v2, int& v3) {
    cout << "Enter a: ";
    cin >> v1;
    cout << "Enter b: ";
    cin >> v2;
    cout << "Enter c: ";
    cin >> v3;
}

void line_input(int &n, int& v1, int& v2, int& v3, Tline *lines) {
    char flag = ' ';
    while (flag != 'N') {
        cout << "Line: " << (n + 1) << endl;
        input(v1, v2, v3);
        lines[n].setA(v1);
        lines[n].setB(v2);
        lines[n].setC(v3);
        lines[n].Print();
        cout << "--------------" << endl;
        cout << "Enter Y/N to continue: ";
        cin >> flag;
        n++;
    }
}

void point_input(int *point, int n, Tline *lines) {
    cout << "Enter point in format (a b): ";
    cin >> point[0] >> point[1];

    cout << "Point (" << point[0] << ";" << point[1] << ")" << endl << endl;

    for (int i = 0; i < n; i++) {
        if (point[0] == ((-1 * lines[i].getB() * point[1]) - lines[i].getC()) / lines[i].getA()) {
            cout << setw(6) << "True:" << " Point is on line " << (i + 1) << ": ";
            lines[i].Print();
        }
        else {
            cout << setw(6) << "False:" << " Point is not on the line " << (i + 1) << endl;
        }
    }
}