// Temperaturas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
float Cel(float);
float Far(float);
float Temp, Resultado;
unsigned short int Selector;



int main()
{
	cout << "1. Para Farenheit a Celsius " << endl;
	cout << "2. Para Celsius a Farenheit " << endl;
	cin >> Selector;
	cout << "Introduzca la temperatura" << endl;
	cin >> Temp;
	
	if (Selector == 1) {
		Far(Temp);
	}
	else {
		Cel(Temp);

	}
	cout << "El resultado es " << Resultado << endl;
	system("pause");
    return 0;
}

float Far(float Temp) {
		Resultado = (Temp - 32) * 1.8;
		return Resultado;
}

float Cel(float Temp) {
	Resultado = Temp * 1.8 + 32;
	return Resultado;
}

