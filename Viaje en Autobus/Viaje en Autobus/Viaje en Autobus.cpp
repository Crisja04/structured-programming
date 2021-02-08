// Viaje en Autobus.cpp
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*	Leyenda
	CT = Costo Total
	CPP = Costo por persona
	CA = Costo autobus
	KM = Kilometros recorridos
	NP = Numero de personas 
	TA = Tipo de autobus
*/

int main()
{
	float CT, CPP, CA, KM; // Variables Reales
	int NP, TA, NB;			// Variables Enteras


	cout << "Escriba el numero de personas que iran al viaje (minimo 20) \n";
	cin >> NP;
	if (NP < 20) { // Decision para el numero de personas minimo
		cout << "El costo del viaje se calculara en base a 20 personas \n";
		NB = 20;
	
	}
	cout << "Escriba el numero de kilometros a recorrer \n";
	cin >> KM;
	Tipo:
	cout << "Elija el tipo de autobus que desea A (1), B (2) o C (3) \n";
	cin >> TA;
	
	switch (TA) { // Eleccion del tipo de autobus
		case 1: CA = 2.0;
			break;
		case 2: CA = 2.5;
			break;
		case 3: CA = 3.0;
			break;
		default: cout << "El tipo de autobus no existe \n";
			goto Tipo;
	}
	if (NP < 20) {
		CT = NB * KM * CA;
	} else {
		CT = NP * KM * CA;
	}
	CPP = CT / NP;
	cout << "El costo por persona es " << CPP << endl;
	cout << "El costo por el viaje es " << CT << endl;
	system("pause"); // Mantiene la ventana abierta
    return 0;
}

