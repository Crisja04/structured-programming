// Piramide.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int Altura, i, Espacio, k = 0;

	cout << "Escriba la altura de su piramide " << endl;
	cin >> Altura;
	for (i = 1; i <= Altura; i++, k = 0) {
		for (Espacio = 1; Espacio <= Altura - i; ++Espacio) {
			cout << " ";
		 }
		while (k != 2 * i - 1) {
			cout << "* ";
			++k;
		}
	cout << "\n";
	}
	system("pause");
    return 0;
}

