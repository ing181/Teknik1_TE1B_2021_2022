#include <iostream>

using namespace std;

int main()
{
    // För att svenska tecken ska fungera
    // i Windows. Ändrar teckenkodningen till 1252
    // där svenska tecken finns med
    // CHCP "Change codepage" till 1252
    // system betyder att vi startar ett Windowsprogram, i detta fall "CHCP"
    system("CHCP 1252");
    // Här startar vi programmet "cls"
    // som suddar ut det som skrivits ut "Clear Screen"
    system("CLS");
    cout << "ÅÄÖ åäö" << endl;
    return 0;
}
