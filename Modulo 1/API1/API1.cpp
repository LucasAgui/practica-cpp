#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
/*
    AUTOR: Lucas Aguirre.
    Consigna:
    ● El programa debe solicitar al usuario que ingrese un límite inferior y superior de
    números para el juego.
    ● El programa debe solicitar al usuario que ingrese la cantidad de intentos
    máximos.
    ● El programa debe generar un número aleatorio dentro del rango ingresado por
    el usuario.
    ● El programa debe solicitar al usuario que ingrese un número para intentar
    adivinar el número generado.
*/
main(){
	int limiteInferior, limiteSuperior, cIntentos = 1, cIntentosMaximos, nroAleatorio, nro;
	//Pido y guardo los datos
	cout << "Bienvenido a 'Adivine el Numero', en este programa le solicitare que introduzca los limites para poder adivinar un Nro Aleatorio." << endl;
	do{
        cout << "\nIngrese el limite inferior: ";
        cin >> limiteInferior;
        if(limiteInferior < 0)
            cout << "El limite inferior no puede ser menor a 0.";
	}while(limiteInferior < 0);
	do{
        cout << "\nAhora ingrese el limite superior: ";
        cin >> limiteSuperior;
        if(limiteSuperior <= limiteInferior)
            cout << "El limite superior no puede ser igual o menor a el limite inferior.";
	}while(limiteSuperior < limiteInferior);
	do{
        cout << "\nPor ultimo, la cantidad de intentos maximos: ";
        cin >> cIntentosMaximos;
        if(cIntentosMaximos < 1)
            cout << "La cantidad de intentos maximos no puede ser menor a 1.";
	}while(cIntentosMaximos < 1);
	nroAleatorio = limiteInferior+rand()%(limiteSuperior - limiteInferior + 1);
	//Comienzo con el juego
	while(cIntentos <= cIntentosMaximos){
		//Pido un numero
		if(cIntentos == cIntentosMaximos)
			cout << "\nEsta es tu ultima oportunidad para adivinar, mucha suerte:\n";
		else
			cout << "\nIntente adivinar: ";
		cin >> nro;
		//Primera salida si adivina
		if(nro == nroAleatorio){
			cout << "\nFELICIDADES, HAS ADIVINADO!!!";
			break;
		}else{ 	//Digo si era mas alto o mas bajo y muestro intentos, si era el ultimo intento salgo del ciclo mostrando si era mas alto o mas bajo y un mensaje.
			if(nroAleatorio > nro){
				if(cIntentos == cIntentosMaximos)
					cout << "\n(Era mas alto...)";
				else
					cout << "\n(Mas alto...)";
			}else{
				if(cIntentos == cIntentosMaximos)
					cout << "\n(Era mas bajo...)";
				else
					cout << "\n(Mas bajo...)";
			}
			if(cIntentos == cIntentosMaximos){
				cout << "\nLo lamento, esta era tu ultima oportunidad." << endl;
				cIntentos++;
			}else{
				cout << "\nYa vas <" << cIntentos << "> Intentos." << endl;
				cIntentos++;
			}
		}
	}
	//Segunda salida
    cout << "\nSuerte para la proxima!" << endl;

	cout << "\nFin del programa.";
}
