#include <iostream>

// Anv�nds f�r strcpy
#include <string.h>
using namespace std;

int main()
{
   // F�r att Windows cmd ska kunna anv�nda svenska tecken
   system("chcp 1252");

   cout << "Mata in ett heltal" << endl;
   // string, en variabeltyp avsedd f�r textstr�ngar
   string s_heltal;

   cin >> s_heltal;
   for (int i=0; i<s_heltal.size(); i++)
   {
       // ifall talet b�rjar med minus
       // Klarar negativa tal
       if (s_heltal[i] == '-') {
       // i �kar med 1 (vi hoppar �ver att testa f�rsta tecknet
        i = i + 1;
       }
       // Om det tecken vi kollar har ascci v�rdet mellan
       // v�rdet f�r 0 och 9. (De ligger i ordning)
       if (s_heltal[i] < '0' || s_heltal[i] > '9') {
        cout << "Felaktig inmatning" << endl;
       }
   }

       // Nu vet vi att inmatningen �r korrekt.
       // �terst�r att g�ra om string till typen heltal (int)
       // En datatyp som �r avsed f�r m�nga tecken
       // F�rklaras l�ngre ner
       // Nu blir det kr�ngligt
       // Vi kommer inp� pekare. Pekare inneh�ller adressen till
       // den plats i datorns RAM-minnne d�r v�rdet p�
       // variabeln finns.
       // Det �r ett s�tt att komma �t v�rdet.
       // (Vet vi var v�rdet finns, kan vi komma �t det)
       // c_string ska vara s� stor s� att s_heltal f�r plats
       char *c_string = new char [s_heltal.length()+1];
       // datatypen string (s_heltal) kopieras till
       // c_string
       strcpy(c_string, s_heltal.c_str());
       // atoi omvandlar charstr�ngen c_string till heltal
       int heltal = atoi(c_string);
       // Nu har vi ett heltal som g�r att r�kna med och j�mf�ra med
       cout << heltal << endl;

    return 0;
}

/*

    Funktioner
    Anv�nder kod som n�gon annan har gjort
    Vi beh�ver inte veta hur de fungerar
    Vi m�ste veta hur de ska anv�ndas
    EX:
    strcpy(c_string, s_heltal.c_str());
    strcpy() kopierar fr�n s_heltal till c_string
    c_str() G�r om en cstring till en string (byter datatyp)

    string s="abcde";
    d� har s[0] v�rdet 'a'
    d� har s[1] v�rdet 'b'
    och s� vidare
    kallas array

    Forsats
    // i �kar med 1 f�r varje "varv"
    for (int i=0; i<10; i++)
    {

        cout << s[i] << endl; // a, b, c, ...

    }
    pr�va!
*/
