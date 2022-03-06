#include <iostream>

using namespace std;

int main()
{
    // För att svenska tecken ska fungera
    // i Windows. Ändrar teckenkodningen till 1252
    // där svenska tecken finns med
    system("CHCP 1252");
    // Suddar ut det som skrivits ut "Clear Screen"
    system("CLS");
    cout << "ÅÄÖ åäö" << endl;
    return 0;
}
