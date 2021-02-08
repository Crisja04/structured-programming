// Numero de Billetes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	float Dinero;
	unsigned short int BillA, BillB, BillC, BillD, BillE, BillF, BillG, BillH, BillI;
	BillA = BillB = BillC = BillD = BillE = BillF = BillG = BillH = BillI = 0;

	cout << "Introduzca la cantidad de dinero " << endl;
	cin >> Dinero;
	while (Dinero >= 1000.00) {
		Dinero -= 1000.00;
		BillA++;
	}
	while (Dinero >= 500.00) {
		Dinero -= 500.00;
		BillB++;
	}
	while (Dinero >= 20.00) {
		Dinero -= 20.00;
		BillC++;
	}
	while (Dinero >= 5.00) {
		Dinero -= 5.00;
		BillD++;
	}
	while (Dinero >= 1.00) {
		Dinero -= 1.00;
		BillE++;
	}
	while (Dinero >= 0.25) {
		Dinero -= 0.25;
		BillF++;
	}
	while (Dinero >= 0.10) {
		Dinero -= 0.10;
		BillG++;
	}
	while (Dinero >= 0.05) {
		Dinero -= 0.05;
		BillH++;
	}
	while (Dinero >= 0.01) {
		Dinero -= 0.01;
		BillI++;
	}

	cout << "Se necesitaran " << BillA << " billetes de 1000 pesos" << endl;
	cout << "Se necesitaran " << BillB << " billetes de 500 pesos" << endl;
	cout << "Se necesitaran " << BillC << " billetes de 20 pesos" << endl;
	cout << "Se necesitaran " << BillD << " monedas de 5 pesos" << endl;
	cout << "Se necesitaran " << BillE << " monedas de 1 peso" << endl;
	cout << "Se necesitaran " << BillF << " monedas de 25 centavos" << endl;
	cout << "Se necesitaran " << BillG << " monedas de 10 centavos" << endl;
	cout << "Se necesitaran " << BillH << " monedas de 5 centavos" << endl;
	cout << "Se necesitaran " << BillI << " monedas de 1 centavo" << endl;
	system("pause");
    return 0;
}

