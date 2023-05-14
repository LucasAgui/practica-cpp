#include <stdio.h>
#include <iostream>
using namespace std;
/*
    AUTOR: Lucas Aguirre.
    Consigna:
    Escribir en lenguaje C un programa que intercambie los valores de 2 variables. 1. Pida por teclado 2 números enteros y los guarda en las variables v1 y v2
    2. Intercambie los valores de las variables de la siguiente manera:
    a. El contenido de v1 pasa a v2.
    b. El contenido de v2 pasa a v1.
    3. Muestre por pantalla el resultado.
*/
main(){
    int n1, n2, holder;
    cout << "Este es un programa que invierte el orden de los numeros que ingresaste. " << endl;
    cout << "Ingrese un numero: " << endl;
    cin >> n1;
    cout << "Ingrese otro numero: " << endl;
    cin >> n2;
    cout << "El primer numero que ingreso fue <" << n1 << "> y el segundo <" << n2 << ">." << endl;
    holder = n1;
    n1 = n2;
    n2 = holder;
    cout << "Luego de intercambiar los numeros de lugar..." << endl;
    cout << "El primer numero que ingreso fue <" << n1 << "> y el segundo <" << n2 << ">." << endl;

    cout << "Fin del programa.";
}
