#include <iostream>
using namespace std;
/*
AUTOR: LUCAS AGUIRRE
CONSIGNA:
	Ejercicio 2
	Escribir en lenguaje C un programa con un menú que simula ser una calculadora de 2
	números.
	1. Muestre un menú con 5 opciones:
	a. Sumar dos numeros.
	b. Restar dos numeros.
	c. Multiplicar dos numeros.
	d. Dividir 2 numeros. (No se debe permitir dividir por 0).
	e. Salir.
	2. Pida por teclado la opcion deseada. Deberá ser introducida mientras que la
	opcion no sea mayor o igual que ‘1’ y menor o igual que ‘5’.
	3. Ejecute la opcion seleccionada del menu.
	4. Repita los pasos 1, 2 y 3 mientras que el usuario no seleccione la opcion 5 del
	menu. (Salir).
	Nota: Se debe crear una funcion para cada operacion. Utilizar do while para el menu.
*/
int main(){
	int opcion, n1, n2;
	
	cout << "Esto es una calculadora de 2 numeros.";
	//pido que elija la opcion
	cout << "\nPor favor seleccione el tipo de operacion que desea realizar:\n1. Sumar dos numeros.\n2. Restar dos numeros.\n3. Multiplicar dos numeros.\n4.Dividir 2 numeros.\n5. Salir\n.";
	cin >> opcion;
	do{
	//solicito los numeros
		cout << "\nIngrese el primer numero: " << endl;
		cin >> n1;
		cout << "\nIngrese el segundo numero: " << endl;
		cin >> n2;
	//evaluo la opcion y muestro un resultado
		switch(opcion){
			case 1:
				cout << "El resultado es: " << n1 + n2 << endl;
			break;
			case 2:
				cout << "El resultado es: " << n1 - n2 << endl;
			break;
			case 3:
				cout << "El resultado es: " << n1 * n2 << endl;
			break;
			case 4:
				if(n2 != 0)
					cout << "El resultado es: " << n1 / n2 <<endl;
				else
					cout << "No se permite dividir por 0" << endl;
			break;
		}
	//vuelvo a pedir que elija la opcion
		cout << "\nPor favor seleccione el tipo de operacion que desea realizar:\n1. Sumar dos numeros.\n2. Restar dos numeros.\n3. Multiplicar dos numeros.\n4.Dividir 2 numeros.\n5. Salir\n.";
		cin >> opcion;
	}while(opcion != 5);
	cout << "Fin del programa.";
	
	return 0;
}
