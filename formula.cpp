#include <iostream> // library input and output

#include "formula.h"

using namespace std;

// Implementation
void input_formula()
{
    int formula;

    cout << "------------------------------------------------" << endl;
    cout << "Please select your formula to use...." << endl << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl << endl;
    cout << "Warning: any keys except 1,2,3 will terminate the program...? ";
    cin >> formula;
    cout << endl << "------------------------------------------------" << endl;

    switch(formula){
    case 1:
        if(square_initialization() == 0){
            input_formula(); // repeat this formula
        }
        break;
    case 2:
        if(rectangle_initialization() == 0){
            input_formula(); // repeat this formula
        }
        break;
    case 3:
        if(circle_initialization() == 0){
            input_formula(); // repeat this formula
        }
        break;
    default:
        cout << endl;
        cout << "Terimakasih Sudah Menggunakan Aplikasi Ini...";
        cout << endl;
        break;
    }
}

