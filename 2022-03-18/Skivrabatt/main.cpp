#include <iostream>
using namespace std;
// Övning 7.6, sidan 89
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"swedish");
	double antal_skivor, pris;
	cout << "mata in antalet skivor: ";
    cin >> antal_skivor;
    
    if (antal_skivor < 10)
		pris = 9.9 * antal_skivor;
	else if (antal_skivor < 50)
	    pris = 9.9 * antal_skivor - (antal_skivor * 0.05);
	else if (antal_skivor < 100)
		pris = 9.9 * antal_skivor - (antal_skivor * 0.1);
	else
	    pris = 9.9 * antal_skivor - (antal_skivor * 0.15);

cout << antal_skivor << " kostar " << pris << " kronor" << endl;
	return 0;
}
