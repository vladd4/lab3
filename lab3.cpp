#include "functions.h"

int main()
{   
    int v1, v2, v3;
    int n = 0;
    Tline *lines = new Tline[n];
    
    cout << "Enter lines: " << endl;
    line_input(n, v1, v2, v3, lines);
    
    int point[2];
    point_input(point, n, lines);
}

