// Contar Vocales.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	short unsigned int c, a, e, i, o, u, Num;
	Num = c = a = e = i = o = u = 0;
	char Vocales[50];
	cout << "Ingrese sus vocales" << endl;
	cout << "Ingrese el numero de vocales deseadas" << endl;
	cin >> Num;
	cout << "Presione Enter despues de cada vocal" << endl;
	for (c = 0; c < Num; c++) {
		cin >> Vocales[c];
	}
	for (c = 0; c < Num; c++) {
		if (Vocales[c] ==  a ) {
			a++;
		}
		if (Vocales[c] ==  e) {
			e++;
		}
		if (Vocales[c] ==  i) {
			i++;
		}
		if (Vocales[c] == o) {
			o++;
		}
		if (Vocales[c] ==  u) {
			u++;
		}
	}
		cout << "Hay " << a << 'a' << endl;
		cout << "Hay " << e << 'e' << endl;
		cout << "Hay " << i << 'i' << endl;
		cout << "Hay " << o << 'o' << endl;
		cout << "Hay " << u << 'u' << endl;
	
	system("pause");
    return 0;
}

