// Costo de Llamada.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
	Leyenda 
	T = Tiempo
	C = Costo 
	D = Dia 
	H = Hora 
	CT = Costo Total
	I = Impuesto
*/

int main()
{
	int T = 0, D = 0, H = 0;
	double C = 0.00, CT = 0.00, I = 0.00;
	cout << "Escriba la duracion de la llamada (minutos) \n";
	cin >> T;

	if (T <= 5) {
		C = 1.00;
		CT = T * C;
	} else if (T <= 8 && T > 5) {
		C = 0.80;
		T = T - 5;
		CT = 5.00;
		CT = CT + (C * T);
	} else if ( T <= 10 && T > 8 ) {
		C = 0.70;
		T = T - 8;
		CT = 7.40;
		CT = CT + (C * T);
	} else if (T > 10) {
		C = 0.50;
		T = T - 10;
		CT = 8.80;
		CT = CT + (C * T);
	}
	comienzo:
	cout << "Escriba el dia de la llamada Lunes-Sabado (1), Domingo (2) \n";
	cin >> D;
	if (D == 2) {
		I = 0.03;
	}	
	else if (D == 1) {
		cout << "Escriba la hora de la llamada matutina (1), verpetina (2) \n";
		cin >> H;
			 if (H == 1) {
				I = 0.15;
			 } if (H == 2) {
				 I = 0.10;
			 }
		}	
	else {
		cout << "El valor ingresado no es valido \n";
		goto comienzo;
	}
	I = CT * I;
	CT = CT + I;
	cout << "El precio de la llamada es " << CT << endl;
	system("pause");
    return 0;
}

