#include <iostream>
using namespace std;
/*
AUTOR: LUCAS AGUIRRE
CONSIGNA:
	Ejercicio 5
	Escribir en lenguaje C un programa que calcule las notas que estan por encima del
	promedio.
	1. Pida por teclado la cantidad de alumnos.
	2. Por cada alumno pida una nota.
	3. Muestre por pantalla:.
	a. El promedio de las notas
	b. Todas las notas que están por encima del promedio.
*/
int cantidadPorEncima(int promedio, int notas[], int cantidadAlumnos){
	int contador = 0;
	for(int i = 0; i < cantidadAlumnos; i++){
		if(notas[i] > promedio)
			contador++;
	}
	return contador;
}
int main(){
	int cantidadAlumnos, cantidadEncimaDelPromedio, acumulador = 0, indice = 0;
	//solicito cantidad de alumnos y la guardo
	cout << "Ingrese la cantidad de alumnos: " << endl;
	cin >> cantidadAlumnos;
	//creo el arreglo con el mismo tamanio que la cantidad de alumnos
	int alumnos[cantidadAlumnos];
	//solicito las notas
	for(int i = 0; i < cantidadAlumnos; i++){
		cout << "Introduzca la nota del alumno numero " << i + 1 << ": \n"; 
		cin >> alumnos[i];
		acumulador += alumnos[i];
	}
	//evaluo la cantidad de notas por encima del promedio para crear un arreglo con el tamanio acorde
	cantidadEncimaDelPromedio = cantidadPorEncima(acumulador / cantidadAlumnos, alumnos, cantidadAlumnos);
	//creo el arreglo para guardar las notas por encima del promedio
	int notasPorEncima[cantidadEncimaDelPromedio];
	//guardo las notas por encima del promedio
	for(int i = 0; i < cantidadAlumnos; i++){
		if(alumnos[i] > acumulador / cantidadAlumnos){
			notasPorEncima[indice] = alumnos[i];
			indice++;
		}
	}
	//muestro el promedio y aquellas notas que estan por encima del promedio
	cout << "El promedio de las notas es: " << acumulador / cantidadAlumnos << ".\nY las notas que estan por encima del promedio son: " << endl;
	for(int i = 0; i < cantidadEncimaDelPromedio; i++){
		cout << notasPorEncima[i] << endl;
	}
	cout << "Fin del programa.";
	
	return 0;
}
