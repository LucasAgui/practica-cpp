#include <iostream>
using namespace std;
/*
AUTOR: LUCAS AGUIRRE
CONSIGNA:
	Ejercicio 3
	Escribir en lenguaje C un programa que calcule el promedio y la nota mas alta de
	todos los alumnos de un curso.
	1. Pida por teclado la cantidad de alumnos.
	2. Pida por teclado la nota por cada alumno.
	3. Muestre por pantalla:
	a. Todas las notas ingresadas.
	b. El promedio de todas las notas.
	c. La nota mas alta.
	Nota: Debe utilizar arrays.
*/
int main(){
	int cantidadAlumnos, notaMasAlta = 0, acumulador = 0;
	float promedio;
	//pido la cantidad de alumnos
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> cantidadAlumnos;
	//creo el vector de las notas en base a la cantidad de alumnos
	int notasAlumnos[cantidadAlumnos];
	for(int x = 0; x < cantidadAlumnos; x++){
		//pido las notas
		cout << "Ingrese la nota del alumno numero " << x + 1 << ":\n";
		cin >> notasAlumnos[x];
		if(notasAlumnos[x] > notaMasAlta) //guardo la nota mas alta
			notaMasAlta = notasAlumnos[x];
		acumulador += notasAlumnos[x]; //acumulo las notas ingresadas
	}
	//muestro los datos por pantalla
	cout << "Esta es la lista de notas ingresadas.\n";
	for(int x = 0; x < cantidadAlumnos; x++){
		cout << "Nota nro " << x << ": " << notasAlumnos[x] << endl;
	}
	cout << "El promedio es de: " << acumulador / cantidadAlumnos << "\nY la nota mas alta es: " << notaMasAlta;

	return 0;
}
