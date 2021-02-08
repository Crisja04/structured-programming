// Numeros En Letra.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
long long int Num;
void Unidades(long long int);
void Decenas(long long int); /*
void Centenas(long long int);
void Miles(long long int);
void Millones(long long int); */



int main()
{
	cout << "Introduzca el numero que quiere en letras" << endl;
	cin >> Num;
	if (Num == 1 || Num >= 15) {
		Unidades(Num);
	}
	if (Num < 15 && Num <= 99) {
		Decenas(Num);
	} /*
	if (Num > 99 && Num <= 999) {
		Centenas(Num);
	}
	if (Num > 999 && Num <= 999999) {
		Miles(Num);
	}
	if (Num > 999999 && Num <= 999999999999) {
		Millones(Num);
	} */
	system("pause");
    return 0;
}

void Unidades(long long int Num) {
	switch (Num) {
	case 1: cout << "Uno";
		break;
	case 2: cout << "Dos";
		break;
	case 3: cout << "Tres";
		break;
	case 4: cout << "Cuatro";
		break;
	case 5: cout << "Cinco";
		break;
	case 6: cout << "Seis";
		break;
	case 7: cout << "Siete";
		break;
	case 8: cout << "Ocho";
		break;
	case 9: cout << "Nueve";
		break;
	case 10: cout << "Diez";
		break;
	case 11: cout << "Once";
		break;
	case 12: cout << "Doce";
		break;
	case 13: cout << "Trece";
		break;
	case 14: cout << "Catorce";
		break;
	case 15: cout << "Quince";
		break;
	}
}

void Decenas(long long int Num){
	if (Num - 10 < 10) {
		cout << "diez y ";
		Unidades(Num);
	}
	if (Num - 20 < 10 && Num != 0) {
		cout << "veinti";
		Unidades(Num);
	}
	if (Num - 20 == 20) {
			cout << "Veinte";
	}
	if (Num - 30 < 10 && Num != 0) {
		cout << "treinta y ";
		Unidades(Num);
	}
	if (Num - 30 == 0) {
		cout << "Treinta";
	}
			
}
