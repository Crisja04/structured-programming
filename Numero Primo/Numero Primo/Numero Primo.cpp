// Numero Primo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
	int i, j, tope;
	bool prime;
	cout << "Ingrese el tope " << endl;
	cin >> tope;
	for (int i = 2; i < tope; i++) {
		bool prime = true;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				prime = false;
				break;
			}
		}
		if (prime) {
			cout << i << " ";
		}
	}
	system("pause");
    return 0;
}

