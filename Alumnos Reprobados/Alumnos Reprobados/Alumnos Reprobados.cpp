// Alumnos Reprobados.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int Calif[10], Resultado;
int Reprobados(int Calif[10]);


int main()
{
	cout << "Introduzca las calificaciones de 10 estudiantes" << endl;
	Resultado = Reprobados(Calif);
	cout << "El numero de reprobados es " << Resultado << endl;
	system("pause");
    return 0;
}

int Reprobados(int Calif[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		cin >> Calif[i];
		if (Calif[i] < 7) {
			Resultado++;
		}
	}
	return Resultado;
}

