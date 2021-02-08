// Asignatura.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int clasificacion(signed short int n);
void selector(int c);


signed short int n;
signed short int c;


int main()
{
	cout << "Introduzca su nota \n";
	cin >> n;
	c = clasificacion(n);
	selector(c);
	system("pause");
    return 0;
}

int clasificacion(signed short int n)
{
	if (n == 9 || n == 10) {
		return 1;
	}
	if (n == 7 || n == 8 ) {
		return 2;
	}
	if (n == 6) {
		return 3;
	}
	else if (n == 5) {
		return 4;
	}
	else if (n == 3 || n == 4) {
		return 5;
	}
	else if (n < 3 && n >= 0) {
		return 6;
	}
	else
		return 7;
}

void selector(int c) {
	switch (c) {
	case 1: cout << "Sobresaliente" << endl;
		break;
	case 2: cout << "Notable" << endl;
		break;
	case 3: cout << "Bien" << endl;
		break;
	case 4: cout << "Suficiente" << endl;
		break;
	case 5: cout << "Insuficiente" << endl;
		break;
	case 6: cout << "Muy Deficiente" << endl;
		break;
	default: cout << "Nota Incorrecta" << endl;
		break;
	}
}

