// Maximo Comun Divisor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int a, b, Resultado;
int MCD(int a, int b);

int main()
{
	cout << "Ingrese su primer numero" << endl;
	cin >> a;
	cout << "Ingrese su segundo numero" << endl;
	cin >> b;
	Resultado = MCD(a, b);
	cout << "El maximo comun divisor es " << Resultado << endl;
	system("pause");
    return 0;
}

int MCD(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
		}
	Resultado = a; 
	return Resultado;
	
}
