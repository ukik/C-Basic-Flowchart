#include <iostream> // library input and output

using namespace std;

// Declaration
float validator(float value)
{
    cin >> value;
    while(cin.fail()) {
        cout << "Error! must be numbers" << endl;
        cin.clear();
        //sytnax: iostream.ignore(streamsize n = 1, int delim = EOF);
        cin.ignore(256,'\n'); // 256 maximun ascii transform charater (0-256), '\n' deliminator to newline
        cin >> value;
    }
    return value;
}
