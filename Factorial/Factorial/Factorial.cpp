// Factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void Factorial();

int main()
{
	unsigned short int Selector = 1;
	while (Selector != 0) {
		cout << "Presione 0 para salir " << endl;
		cout << "Presione 1 para seguir " << endl;
		Factorial();
		cin >> Selector;
	}
	
	system("pause");
    return 0;
}
 
void Factorial() {
	int Fact = 1, Num;
	cout << "Ingrese el numero para el factorial" << endl;
	cin >> Num;
	while (Num != 0) {
		Fact = Fact * Num;
		Num--;
	}
	cout << "El factorial es " << Fact << endl;
}
