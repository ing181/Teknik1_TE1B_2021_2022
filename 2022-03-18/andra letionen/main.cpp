#include <iostream>
using namespace std;
int main()
{
    // cout �r sk�rmen
    // << �r utmatningsoperatorn
    // endl betyder ny rad
    cout << "Hello world!" << endl;
    string in;
    // cin �r tangentbordet
    // >> �r inmatningsoperatorn
    // in �r en variabel
    // en variabel �r till f�r att inneh�lla
    // olika v�rden.
    // En textsr�ng som anv�ndaren matat in eller ett tal
    // till exempel
    cin >> in;
    cout << in << endl;
    int i;
    cin >> i;
    cout << "Du matade in talet " << i << endl;
    int j;
    cin >> j;
    cout << "Du matade in talet " << j << endl;
    cout << i  << " + " << j << " = " << j+i << endl;
    return 0;
}
