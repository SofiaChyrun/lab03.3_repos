// ChyrunSofialab3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_03_3.cpp
// < Чирун Софія >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; 
    double R1; 
    double R2;
    double y; 
    cout << "Please input R1<R2, R2<3" << endl;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    if (R1 < R2 && R2 < 3) {

        if (x <= -2 * R1)
            y = -x - 2 * R1;
        else
            if (-2 * R1 < x && x <= 0)
                y = sqrt(-pow(x, 2) - 2 * x * R1);
            else
                if (0 < x && x <= 2 * R2)
                    y = -sqrt(2 * x * R2 - pow(x, 2));
                else
                    if (2 * R2 < x && x <= 6)
                        y = (-1 / (6 - 2 * R2)) * (x - 2 * R2);
                    else
                        y = -1;

        cout << endl;
        cout << "y = " << y << endl;
    }
    else cout << "Error of input data";
    cin.get();
    return 0;
}