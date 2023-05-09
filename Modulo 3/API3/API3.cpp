#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>

using namespace std;

//AUTOR: LUCAS AGUIRRE
int cantidadNros(string numeros){
	int contador = 1;
	int longitud = numeros.length();
		for(int i = 1; i < longitud; i++){
			if(numeros[i] == ' ')
				contador++;
		}
	return contador;
}
bool ingresadoAnteriormente(int arrayEnteros[], int longitud, int nro){
	cout << "\nLa longitud es " << longitud << endl;
	for(int x = 0; x < longitud; x++){
		if(nro == arrayEnteros[x])
			return true;
	}
	return false;
}
int main(){
	int rangoMin, rangoMax, cantidadIntentosMax, nroAleatorio, cantidadNumeros, numeroActual, intentosRestantes, longitudArray = 0, adivinoIntento;
	string cadenaIngresada;
	bool adivino = false, ingresadoConAnterioridad = false;
	cout << "Este es un juego de donde intentaras adivinar un numero aleatorio dentro de un rango que definas y en una cantidad de intentos maximos que tambien definiras..." << endl;
	//pido rango minimo, maximo y cantidad de intentos y los guardo
	do{
		cout << "\nIngrese el rango minimo para generar su numero aleatorio: " << endl;
		cin >> rangoMin;
	}while(rangoMin < 0);
	do{
		cout << "Ingrese el rango maximo: " << endl;
		cin >> rangoMax;
	}while(rangoMax < rangoMin);
	do{
		cout << "Ingrese la cantidad de intentos maximos: " << endl;
		cin >> cantidadIntentosMax;
	}while(cantidadIntentosMax < 0);
//genero numero aleatorio
srand(time(NULL));
nroAleatorio = rangoMin+rand()%(rangoMax - rangoMin + 1);
//creo el vector que contendra todos los numeros ingresados por el usuario con la cantidad igual a la de intentos maximos y la cantidad de intentos restantes
int nrosIngresados[cantidadIntentosMax];
intentosRestantes = cantidadIntentosMax;

	for(int i = 0; i < cantidadIntentosMax; i++){
		ingresadoConAnterioridad = false;
		//solicito al usuario que intente adivinar
		cout << "\nIntente adivinar el número secreto: ";
		cin >> cadenaIngresada;
		cantidadNumeros = cantidadNros(cadenaIngresada);
		if(cantidadNumeros == 1){ //si hay un solo numero en la cadena hago esto
			numeroActual = stoi(cadenaIngresada);
			if(!ingresadoAnteriormente(nrosIngresados, longitudArray, numeroActual)){
				nrosIngresados[i] = numeroActual;
				longitudArray++;
				if(numeroActual == nroAleatorio){ //evaluo si adivino
					adivinoIntento = i + 1;
					adivino = true;
					break;
				}else{ //si no adivino, le digo si era mas alto o mas bajo
					if(!(i + 1 == cantidadIntentosMax)){
						if(numeroActual < nroAleatorio){
							cout << "\nEl número es mas alto. ";
						}else
							cout << "\nEl número es mas bajo. ";
					}else{
						cout << "\nEra tu ultimo intento." << endl;		
						break;
					}	
				}
			}else
				ingresadoConAnterioridad = true;
		}else{ //sino hago esto
			cout << cantidadNumeros << "\n" << cadenaIngresada << endl;
			for(int x = 0; x < cantidadNumeros; x++){
				if(cadenaIngresada[x] == ' '){
					string cadenaNroActual;
					int nroActual;
					int indice = x;
					if(!ingresadoAnteriormente(nrosIngresados, longitudArray, nroActual)){
							nrosIngresados[i + x] = nroActual;
						for(int j = 0; j < indice; j++){
							cadenaNroActual += cadenaIngresada[j];
						}
						nroActual = stoi(cadenaNroActual);
						if(nroActual == nroAleatorio){
							adivinoIntento = i + 1 + x;
							adivino = true;
							break;
						}else{
							if(!(i + x == cantidadIntentosMax)){
								if(nroActual < nroAleatorio)
									cout << "\nEl número es mas alto que " << nroActual << endl;
								else
									cout << "\nEl número es mas bajo que " << nroActual << endl;	
							}else{
								cout << "\nEra tu ultimo intento." << endl;	
								break;
							}
								
						}
					}else
						ingresadoConAnterioridad = true;
				}
			}
		}
		if(ingresadoConAnterioridad){
			i--;
			cout << "Este numero ya habia sido ingresado con anterioridad, repita el proceso..." << endl;
		}else{
			intentosRestantes -= cantidadNumeros;
			cout << "Este fue tu intento Nro (" << i + 1 << ").\nTe quedan " << intentosRestantes << " intentos." << endl;
			if(cantidadNumeros > 1)
				longitudArray += cantidadNumeros;
		}
	}
	if(adivino)
		cout << "Felicidades, adivinaste el numero secreto que era el " << nroAleatorio << " en " << adivinoIntento << " intentos." << endl;
	else
		cout << "Suerte para proxima";
	cout << "\nFin del programa.";
	
	return 0;
}