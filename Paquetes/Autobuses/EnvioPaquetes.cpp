// Programa para calculo de costo de envio de un paquete
// Cristian Tavarez


#include "stdafx.h"
#include <iostream> // Biblioteca de funciones 
using namespace std; // Acorta la escritura de dichas funciones
/* Leyenda
	R = Region de destino
	P = Peso del paquete
	PF = Precio final del envio
*/


int main()
{
	int R;  // Variables Enteras
	double P, PF; // Variables Reales

	cout << "Calculo de costo de envio \n";
	cout << "Este programa calcula el costo del paquete a enviar \n";
	cout << "Ingrese el peso de su paquete (kilogramos) \n";
	cin >> P;
	P = P * 1000;
	while (P < 5000) // Condicion de peso para el envio
	{
		cout << "Su paquete pesa menos de 5kg no puede ser enviado \n";
		cout << "Ingrese un peso mayor a 5kg \n ";
		cin >> P;
		P = P * 1000;
	}
	cout << "Ingrese el destino de su paquete \n"; 
	Peso: // Destino del goto
	cout << "Norteamerica (1), Centroamerica (2), Suramerica (3), Europa (4), Asia (5) \n";
	cin >> R;
	switch (R) { // Desicion multiple para la region 
		case 1:
			PF = P * 11.00;
			break;
		case 2:
			PF = P * 10.00;
			break;
		case 3:
			PF = P * 12.00;
			break;
		case 4:
			PF = P * 24.00;
			break;
		case 5:
			PF = P * 27.00;
			break;
		default:
			cout << "Ingrese una region valida \n"; // Valor de error en la region 
			goto Peso; // Instruccion para devolverse al inicio
	}
	cout << "El envio del paquete de " << P << " gramos " << " costara " << PF << endl;
		
	system("pause"); // Mantiene la ventana abierta 
    return 0;
}


