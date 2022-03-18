#include <iostream>
using namespace std;
// Uppgift 4.5, sidan 63

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"swedish");
	cout << "Mata in täljaren: ";
	int taljare;
	cin >> taljare;
	cout << "Mata in nämnaren: ";
	int namnare;
	cin >> namnare;
	cout << "Du matade in " << taljare << "/" << namnare << endl;	
	// Division med int returnerar heltalsdelen (och kastar bort ev.
	// bråkdelar)
	cout << "Det motsvarar " << (taljare/namnare) << " ";
	// Operatorn modulus % returnerar resten vid division,
	cout << (taljare % namnare) << "/" << namnare << endl;
	
	
	return 0;
}
