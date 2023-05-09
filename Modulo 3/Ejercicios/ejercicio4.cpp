#include <iostream>
using namespace std;
/*
AUTOR: LUCAS AGUIRRE
CONSIGNA:
	Ejercicio 4
	Escribir en lenguaje C un programa que nos indique si una palabra es palindromo.
	1. Pida por teclado una palabra.
	2. Mostrar por pantalla:
	a. Es palindrome.
	b. No es palindrome.
	Nota: No es necesario utilizar recursividad, pero si lo desea puede hacerlo.
*/
string quitarEspacios(string palabra){
	string palabraSinEspacios;
	for(int i = 0; i < palabra.length(); i++){
		if(palabra[i] != ' ')
			palabraSinEspacios += palabra[i];
	}
	return palabraSinEspacios;
}
bool palabraPolindroma(string palabra){
	int a = 0;
	int b = palabra.length() - 1;
	for(int i = 0; i < palabra.length(); i++){
		if(tolower(palabra[a]) == tolower(palabra[b])){
			a++;
			b--;
		}else
			return false;
	}
	return true;
}
int main(){
	string palabra, palabraSinEspacios;
	//pido la palabra/frase y la guardo
	cout << "Este es un programa para descubrir si una palabra o frase es polindromo\nIngrese una palabra o frase: " << endl;
	getline(cin, palabra);
	//le quito los espacios con una funcion
	palabraSinEspacios = quitarEspacios(palabra);
	//evaluo si es polindroma y muestro el resultado
	if(palabraPolindroma(palabraSinEspacios))
		cout << "La palabra/frase es polindroma..." << endl;
	else
		cout << "La palabra/frase no es polindroma..." << endl;
	cout << "\nFin del programa.";
	
	return 0;
}
