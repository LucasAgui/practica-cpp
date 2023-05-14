#include <stdio.h>
#include <iostream>
using namespace std;
main(){
/*
	AUTOR: Lucas Aguirre.
	Consigna:
	Escribir en lenguaje C un programa que convierte pesos argentinos en dólares.
	1. Pida por teclado la cantidad de pesos.
	2. Calcule su equivalente en dólares.
	3. Muestre por pantalla el resultado.
*/
	float pesos, precioDolar, resultado;
	do{
		cout << "Ingrese el precio actual del dolar: " << endl;
		cin >> precioDolar;
		if(precioDolar < 1)
			cout << "El precio del dolar no puede ser menor a 1." << endl;
	}while(precioDolar < 1);
	do{
		cout << "Ingrese la cantidad de pesos: " << endl;
		cin >> pesos;
		if(pesos < 1)
			cout << "Debe ser un valor mayor a 1" << endl;
	}while(pesos < 1);
	resultado = pesos / precioDolar;
	cout << "La cantidad de dolares es: " << resultado << endl;

	cout << "Fin del programa.";
}
