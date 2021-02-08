// Serie Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void Fibonacci(int);
int termino;


int main()
{
	int Selector = 1;
	while (Selector != 0) {
		cout << "Escriba el termino deseado" << endl;
		cin >> termino;
		Fibonacci(termino);
		cout << "Escriba 0 para terminar " << endl;
		cout << "Escriba 1 para seguir " << endl;
		cin >> Selector;
	}
	system("pause");
    return 0;
}

void Fibonacci(int termino) {
	int N1 = 0, N2 = 1, Resultado, i;
	for (i = 1; i != termino; i++) {
		Resultado = N1 + N2;
		N1 = N2;
		N2 = Resultado;
		cout << "-" << Resultado;
	}
}

