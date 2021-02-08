// Calculos Varios Con Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void Potencia();
void AreaTrapecio();
void AreaTriangulo();
void Suma();
void Producto();
short unsigned int Selector;


int main()
{
	Selector = 1;
	while (Selector != 0) {
		cout << "Elija el tipo de operacion" << endl;
		cout << "1. Potencia de un numero entero" << endl;
		cout << "2. Area de un trapecio" << endl;
		cout << "3. Area de un triangulo" << endl;
		cout << "4. Suma de dos numeros" << endl;
		cout << "5. Producto de dos numeros" << endl;
		cout << "0. Para salir " << endl;
		cin >> Selector;

		switch (Selector) {
		case 1: Potencia();
			break;
		case 2: AreaTrapecio();
			break;
		case 3: AreaTriangulo();
			break;
		case 4: Suma();
			break;
		case 5: Producto();
			break;
		}
	}
	system("pause");
    return 0;
}

void Potencia() {
	int a, b, c = 0 ;
	cout << "Escriba la base" << endl; 
	cin >> a;
	cout << "Escriba el exponente" << endl;
	cin >> b;
	c = a;
	 while (b != 1 ) {
		c = c * a;
		b = b - 1;
	}
	cout << "El resultado es "  << c << endl;
}

void AreaTrapecio() {
	float a, b, c, d = 0;
	cout << "Escriba el valor de la primera base " << endl;
	cin >> a;
	cout << "Escriba el valor de la segunda base " << endl;
	cin >> b;
	cout << "Escriba el valor de la altura ";
	cin >> c;
	d = ((a*b)*c) / 2;
	cout << "El resultado es " << d << endl;
}

void AreaTriangulo() {
	float a, b, c = 0;
	cout << "Escriba el valor de la base " << endl;
	cin >> a;
	cout << "Escriba el valor de la altura " << endl;
	cin >> b;
	c = (a*b) / 2;
	cout << "El resultado es " << c << endl;
}

void Suma() {
	float a, b, c = 0;
	cout << "Ingrese su primer valor ";
	cin >> a;
	cout << "Ingrese su segundo valor ";
	cin >> b;
	c = a + b;
	cout << "El resultado es " << c << endl;
}

void Producto() {
	float a, b, c = 0;
	cout << "Ingrese su primer valor ";
	cin >> a;
	cout << "Ingrese su segundo valor ";
	cin >> b;
	c = a * b;
	cout << "El resultado es " << c << endl;
}
