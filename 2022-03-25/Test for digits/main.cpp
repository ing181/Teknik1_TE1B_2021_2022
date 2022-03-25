#include <iostream>

// Används för strcpy
#include <string.h>
using namespace std;

int main()
{
   // För att Windows cmd ska kunna använda svenska tecken
   system("chcp 1252");

   cout << "Mata in ett heltal" << endl;
   // string, en variabeltyp avsedd för textsträngar
   string s_heltal;

   cin >> s_heltal;
   for (int i=0; i<s_heltal.size(); i++)
   {
       // ifall talet börjar med minus
       // Klarar negativa tal
       if (s_heltal[i] == '-') {
       // i ökar med 1 (vi hoppar över att testa första tecknet
        i = i + 1;
       }
       // Om det tecken vi kollar har ascci värdet mellan
       // värdet för 0 och 9. (De ligger i ordning)
       if (s_heltal[i] < '0' || s_heltal[i] > '9') {
        cout << "Felaktig inmatning" << endl;
       }
   }

       // Nu vet vi att inmatningen är korrekt.
       // Återstår att göra om string till typen heltal (int)
       // En datatyp som är avsed för många tecken
       // Förklaras längre ner
       // Nu blir det krångligt
       // Vi kommer inpå pekare. Pekare innehåller adressen till
       // den plats i datorns RAM-minnne där värdet på
       // variabeln finns.
       // Det är ett sätt att komma åt värdet.
       // (Vet vi var värdet finns, kan vi komma åt det)
       // c_string ska vara så stor så att s_heltal får plats
       char *c_string = new char [s_heltal.length()+1];
       // datatypen string (s_heltal) kopieras till
       // c_string
       strcpy(c_string, s_heltal.c_str());
       // atoi omvandlar charsträngen c_string till heltal
       int heltal = atoi(c_string);
       // Nu har vi ett heltal som går att räkna med och jämföra med
       cout << heltal << endl;

    return 0;
}

/*

    Funktioner
    Använder kod som någon annan har gjort
    Vi behöver inte veta hur de fungerar
    Vi måste veta hur de ska användas
    EX:
    strcpy(c_string, s_heltal.c_str());
    strcpy() kopierar från s_heltal till c_string
    c_str() Gör om en cstring till en string (byter datatyp)

    string s="abcde";
    då har s[0] värdet 'a'
    då har s[1] värdet 'b'
    och så vidare
    kallas array

    Forsats
    // i ökar med 1 för varje "varv"
    for (int i=0; i<10; i++)
    {

        cout << s[i] << endl; // a, b, c, ...

    }
    pröva!
*/
