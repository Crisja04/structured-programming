// Contador.cpp


#include "stdafx.h"
#include <iostream>
using namespace std;
/*	
    Leyenda
	N = Numero final
	I = Inicio de la cuenta
*/


int main()
{
	int N, I; // I es el contador 

	cout << "Ingrese el numero hasta el que quiere contar \n";
	cin >> N;
	for (I = 0; I <= N; I = I + 1) { // la condicion I <= N establece la cantidad de veces a ejecutar
		cout << I << endl;

	}
	system("pause"); // mantiene la ventana abierta
    return 0;
}

