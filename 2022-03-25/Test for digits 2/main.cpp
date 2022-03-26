#include <iostream>
#include <string.h>
using namespace std;
bool checkDigit(string in);
int stringToInt(string in);
int main()
{
    string inmatning;
    cout << "Enter an integer > ";
    cin >> inmatning;

    while(!checkDigit(inmatning)) {
        cout << "Incorrect entry, please try again" << endl;
        cout << "> ";
        cin >> inmatning;
    }

    cout << stringToInt(inmatning) << endl;
    system("PAUSE");
    return 0;
}
bool checkDigit(string in)
{
    for(unsigned int i = 0; i < in.size(); i++) {

        if(in[i] == '-') {
            i = i + 1;
        }

        if(in[i] < '0' || in[i] > '9') {
            return false;
        }
    }

    return true;
}
int stringToInt(string in)
{
  //  char *c_string = new char [in.length() + 1];
  //  strcpy(c_string, in.c_str());
  //  int integer = atoi(c_string);
    int integer = atoi(in.c_str());
    return integer;
}
