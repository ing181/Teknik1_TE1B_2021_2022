#include <iostream>

using namespace std;

int main()
{
    // F�r att svenska tecken ska fungera
    // i Windows. �ndrar teckenkodningen till 1252
    // d�r svenska tecken finns med
    system("CHCP 1252");
    // Suddar ut det som skrivits ut "Clear Screen"
    system("CLS");
    cout << "��� ���" << endl;
    return 0;
}
