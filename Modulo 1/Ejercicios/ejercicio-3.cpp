#include <stdio.h>
#include <iostream>
using namespace std;
/*
    AUTOR: Lucas Aguirre.
    Consigna:
    Escribir en lenguaje C un programa que calcule la nota promedio de 3
    exámenes.
    1. Pida por teclado cada una de las notas.
    2. Calcule el promedio de las 3 notas.
    3. Muestre por pantalla el resultado.
*/
main(){
	float nota1, nota2, nota3, promedio;
	do{
        cout << "Ingrese la primera nota: " << endl;
        cin >> nota1;
        if(nota1 < 1)
            cout << "La nota que ingrese no puede ser menor a 1." << endl;
        if(nota1 > 10)
            cout << "La nota que ingrese no puede ser mayor a 10." << endl;
	}while(nota1 < 1 || nota1 > 10);
	do{
        cout << "Ingrese la segunda nota: " << endl;
        cin >> nota2;
        if(nota2 < 1)
            cout << "La nota que ingrese no puede ser menor a 1." << endl;
        if(nota2 > 10)
            cout << "La nota que ingrese no puede ser mayor a 10." <<endl;
	}while(nota2 < 1 || nota2 > 10);
	do{
        cout << "Ingrese la tercera nota: " << endl;
        cin >> nota3;
        if(nota3 < 1)
            cout << "La nota que ingrese no puede ser menor a 1 y no mayor a 10." << endl;
        if(nota3 > 10)
            cout << "La nota que ingrese no puede ser mayor a 10." <<endl;
	}while(nota3 < 1 || nota3 > 10);
	promedio = (nota1 + nota2 + nota3) / 3;
	cout << "El promedio es: " << promedio << endl;

	cout << "Fin del programa.";
}
