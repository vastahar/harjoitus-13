// HARJOITUS 13
// Harri Vastamäki
// IIOS14S1

#include <iostream>
#include <cstring>
using namespace std;

void main()
{
	char etunimi[15];
	char sukunimi[20];
	char kokonimi[35];

	cout << "Anna etunimesi: " << endl;
	cin >> etunimi;
	cout << "Anna sukunimesi: " << endl;
	cin >> sukunimi;
	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);
	cout << "Nimesi on: " << kokonimi << endl;

}