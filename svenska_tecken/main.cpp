#include <iostream>

using namespace std;

int main()
{
    // F�r att svenska tecken ska fungera
    // i Windows. �ndrar teckenkodningen till 1252
    // d�r svenska tecken finns med
    // CHCP "Change codepage" till 1252
    // system betyder att vi startar ett Windowsprogram, i detta fall "CHCP"
    system("CHCP 1252");
    // H�r startar vi programmet "cls"
    // som suddar ut det som skrivits ut "Clear Screen"
    system("CLS");
    cout << "��� ���" << endl;
    return 0;
}
