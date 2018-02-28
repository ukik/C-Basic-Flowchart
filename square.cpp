#include <iostream> // library input and output
#include <stdio.h>  // library extended output

#include "formula.h"

using namespace std;

// Initialization
float length = 0;

// Declaration
float square_calculation(float length)
{
    const float SQUARE = length * length;

    return SQUARE;
}

int square_initialization()
{
    cout << "1. Square = length x length, entry your length number: ";
    printf("So, your Square area is %.2f", square_calculation(validator(length))); // print validator only number
    cout << endl << "------------------------------------------------" << endl;

    if(input_repeat() == 1){
        square_initialization();
    }else{
        return 0;
    }
}
