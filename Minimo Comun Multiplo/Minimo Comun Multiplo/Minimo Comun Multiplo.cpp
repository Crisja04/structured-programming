// Minimo Comun Multiplo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;
int a, b, Resultado;
int MCM(int a, int b);

int main()
{
	cout << "Ingrese su primer numero" << endl;
	cin >> a;
	cout << "Ingrese su segundo numero" << endl;
	cin >> b;
	Resultado = MCM(a, b);
	cout << "El minimo comun multiplo es " << Resultado << endl;
	system("pause");
	return 0;
}

int MCM(int a, int b) {
	int menor, i;
	if (a > b) {
		menor = b;
	}
	else {
		menor = a;
	}
	for (i = 1; i <= menor; i++) {
		if (a % i == 0 && b % i == 0) {
			Resultado = i;
			Resultado = (a*b) / Resultado;
			}
		}
	;
	return Resultado;

}

