#include <iostream> // library input and output
#include <stdio.h>  // library extended output

#include "formula.h"

using namespace std;

// Initialization
const double PI = 22/7;
float radius = 0;

// Declaration
float circle_calculation(float radius)
{
    const float CIRCLE = PI * radius * radius;

    return CIRCLE;
}

int circle_initialization()
{
    cout << "3. Circle = PI x radius x radius, entry your radius number: ";
    printf("So, your Circle area is %.2f", circle_calculation(validator(radius))); // print validator only number
    cout << endl << "------------------------------------------------" << endl;

    if(input_repeat() == 1){
        circle_initialization();
    }else{
        return 0;
    }
}
