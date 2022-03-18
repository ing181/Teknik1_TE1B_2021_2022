#include <iostream>
using namespace std;
int main()
{
    // cout är skärmen
    // << är utmatningsoperatorn
    // endl betyder ny rad
    cout << "Hello world!" << endl;
    string in;
    // cin är tangentbordet
    // >> är inmatningsoperatorn
    // in är en variabel
    // en variabel är till för att innehålla
    // olika värden.
    // En textsräng som användaren matat in eller ett tal
    // till exempel
    cin >> in;
    cout << in << endl;
    int i;
    cin >> i;
    cout << "Du matade in talet " << i << endl;
    int j;
    cin >> j;
    cout << "Du matade in talet " << j << endl;
    cout << i " + " << j << " = " << j+i << endl;
    return 0;
}
