// Distancia Dos Puntos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int a, b, c, d;
float resultado;
int distancia(int a, int b, int c, int d);



int main()
{
	cout << "Ingrese la coordenada de x primer punto" << endl;
	cin >> a;
	cout << "Ingrese la coordenada de y primer punto" << endl;
	cin >> b;
	cout << "Ingrese la coordenada de x segundo punto" << endl;
	cin >> c;
	cout << "Ingrese la coordenada de y segundo punto" << endl;
	cin >> d;
	
	resultado = distancia(a, b, c, d);
	cout << "La distancia entre los dos puntos es " << resultado << endl;
	system("pause");
    return 0;
}

int distancia(int a, int b, int c, int d) {
	int d1, d2;
	d1 =  c - a;
	d2 = d - b; 
	d1 = pow(d1, 2);
	d2 = pow(d2, 2);
	resultado = d1 + d2;
	resultado = pow(resultado, 0.5); // pow (#, 0.5) busca la raiz cuadrada
	return resultado;
}

