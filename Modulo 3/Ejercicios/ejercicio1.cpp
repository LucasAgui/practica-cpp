#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
/*
AUTOR: LUCAS AGUIRRE
CONSIGNA:
	Escribir en lenguaje C un programa que calcule la potencia de un numero y sume
	todas las potencias.
	1. Pida por teclado un numero.
	2. Pida por teclado la potencia.
	3. Muestre por pantalla el mensaje:
	a. “<numero> elevado a la <potencia> es: <resultado>
	4. Preguntar al usuario si desea introducir otro numero.
	5. Repita los pasos 1, 2 y 3 mientras que el usuario no responda ‘n’ de no.
	6. Muestre por pantalla la suma de las potencias calculadas.
	Nota: Se debe utilizar una funcion que realice el calculo. Utilizar do while.
*/
using namespace std;
int main(){
	int nro, potencia, acumulador = 0; 
	string respuesta = "si";
	do{
		cout << "Ingrese un numero: " << endl;  //pido datos
		cin >> nro;
		cout << "Ingrese la potencia: " << endl;
		cin >> potencia;
		cout << "El resultado es: " << (nro*nro)*potencia << endl; 	//muestro resultado
		cout << "Desea introducir otro numero? (si/no)\n"; 	// pregunto si quiere seguir
		cin >> respuesta;
		transform(respuesta.begin(), respuesta.end(), respuesta.begin(), ::toupper);
		acumulador += (nro*nro)*potencia;
	}while(respuesta == "SI" );
	cout << "La suma de todas las potencias es: " << acumulador << "\n Fin del programa.";
	
	return 0;
}
