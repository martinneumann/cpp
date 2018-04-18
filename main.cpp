#include <iostream>
using namespace std;
#include "tdate.h"
#include "ttime.h"
int main()
{
	TDate D1, D2(1, 5, 2018);
	TTime T1, T2(17, 45), T3(6, 17, 43);
	cout << "\nKlasse TDate:" << endl;
	cout << "Standardkonstruktor Heutiges Datum D1:       ";   D1.print();   cout << endl;
	cout << "Konstruktor         Tag der Arbeit (D2):     ";   D2.print();   cout << endl;
	cout << "\nKlasse TTime:" << endl;
	cout << "Standardkonstruktor Aktuelle Uhrzeit T1:     ";   T1.print();   cout << endl;
	cout << "Konstruktor         Beginn der Uebung (T2):  ";   T2.print();   cout << endl;
	cout << "Konstruktor         Zeit zum Aufstehen (T3): ";   T3.print();   cout << endl;
	return 0;
}
