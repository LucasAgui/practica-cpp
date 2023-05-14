#include <stdio.h>
#include <iostream>
using namespace std;
/*
    AUTOR: Lucas Aguirre.
    Consigna:
    Escribir en lenguaje C un programa que calcule el volumen de un cubo.
    1. Pida por teclado la arista de un cubo.
    2. Calcule el volumen de un cubo.
    3. Muestre por pantalla el resultado.
*/
main(){
	float arista, resultado;
	do{
        cout << "Ingrese la arista de un cubo: " << endl;
        cin >> arista;
        if(arista < 1)
            cout << "El aristra no puede ser menor a 1." << endl;
	}while(arista < 1);
	resultado = arista * 3;
	cout << "El volumen del cubo es: "<< resultado << endl;

	cout << "Fin del programa.";
}

