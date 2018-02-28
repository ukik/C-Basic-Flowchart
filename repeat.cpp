#include <iostream> // library input and output
#include <conio.h>  // library event keyboard ascii
#include <stdio.h>  // library extended output

#include "formula.h"

using namespace std;

int input_repeat()
{
    char status;

    cout << "Are you want to repeat (y/n)? " << endl;
    // detect to evaluate only keyboard y or n
    do{
        status = getch();
        cout << "Press 'y' or 'n' to continue program... " << status << endl;
        //printf("%c (%d) \n", status, status); // check input using string alias, %c keyboard char, %d ascii char
    } while( (status != 'y') && (status != 'n'));
    cout << endl << "------------------------------------------------" << endl;

    return status == 'y' ? 1 : 0;
}
