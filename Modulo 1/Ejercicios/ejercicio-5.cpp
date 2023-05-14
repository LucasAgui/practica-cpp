#include <stdio.h>
#include <iostream>>
using namespace std;
/*
    AUTOR: Lucas Aguirre.
    Consigna:
    Escribir en lenguaje C un programa que calcule el perímetro de una
    circunferencia.
    1. Pida por teclado el radio de una circunferencia.
    2. Calcule el perímetro de la circunferencia.
    3. Muestre por pantalla el resultado.
    Nota: π (pi) debe declararse como una constante.
*/

main() {
	float radio;
	const float pi = 3.1416;
	do{
        cout << "Ingrese el radio: " << endl;
        cin >> radio;
        if(radio < 1)
            cout << "El radio no puede ser menor a 1." << endl;
	}while(radio < 1);
	cout << "El perimetro de la circunferencia es: " << radio * pi << endl;

	cout << "Fin del programa.";
}
