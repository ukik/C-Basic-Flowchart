#include <iostream> // library input and output
#include <stdio.h>  // library extended output

#include "formula.h"

using namespace std;

// Initialization
float height = 0, width = 0;

// Declaration
float rectangle_calculation(float height, float width)
{
    const float RECTANGLE = height * width;

    return RECTANGLE;
}

int rectangle_initialization()
{
    cout << "2. Rectangle = height x width" << endl;
    cout << "entry your height number: ";
    height = validator(height); // override value
    cout << "entry your width number: ";
    width = validator(width); // override value
    printf("So, your Rectangle area is %.2f", rectangle_calculation(height, width));
    cout << endl << "------------------------------------------------" << endl;

    if(input_repeat() == 1){
        rectangle_initialization();
    }else{
        return 0;
    }
}
