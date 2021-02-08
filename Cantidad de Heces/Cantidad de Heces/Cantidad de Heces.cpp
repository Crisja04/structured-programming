// Cantidad de Heces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
	Leyenda
		V = Cantidad total de vacas 
		VE = Cantidad de vacas embarazadas
		VNE = Cantidad de vacas no embarazadas
		PorcManana = Porcentaje de heces en la manana 
		PorcTarde = Porcentaje de heces en la tarde 
		CHE = Cantidad de heces embarazadas
		CHNE = Cantidad de heces no embarazadas 
		CHM = Cantidad de heces en la manana 
		CHT = Cantidad de heces en la tarde 
		CHTT = Cantidad de heces total 
		CH = Cantidad de heces 
*/


int main()
{
	int V = 5, VE = 2, VNE = 3;
	float PorcManana = 0.025, PorcTarde = 0.043, CH = 2.00, CHE, CHNE, CHM, CHT, CHTT;

	CHM = CH + (CH * PorcManana);
	CHT = CH + (CH * PorcTarde);
	CHE = 4 * (VE * ((2 * CHT) + (3 * CHM)));
	CHNE = 4 * (VNE * ((2 * CH) + (3 * CHM)));
	CHM = 4 * (V * (3 * CHM));
	CHT = 4 * ((VE * (2 * CHT)) + (VNE * (2 * CH)));
	CHTT = CHE + CHNE;
	cout << "La cantidad de heces en la tarde fue de " << CHT << " libras \n";
	cout << "La cantidad de heces en la manana fue de " << CHM << " libras \n";
	cout << "La cantidad de heces de las embarazadas fue de " << CHE << " libras \n";
	cout << "La cantidad de heces de las no embarazadas fue de " << CHNE << " libras \n";
	cout << "La cantidad de heces total fue de " << CHTT << " libras \n";

	system("pause");
    return 0;
}

