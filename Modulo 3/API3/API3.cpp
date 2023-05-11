#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
    AUTOR: LUCAS AGUIRRE.
    CONSIGNA:
    El programa debe permitir al usuario ingresar varios números para
    intentar adivinar el número generado, y guardarlos en un array.
    ● El programa debe verificar si el número ingresado ya fue ingresado
    anteriormente y no contemplarlo como un intento.
    ● El programa debe indicar al usuario mediante una función los números
    que ya fueron ingresados. No se deben contemplar los números
    repetidos, es decir solo se contabilizan una vez.
*/
void mostrarOrdenados(int numerosIngresados[], int cantidadNumeros);
int main(){
    int rangoMin, rangoMax, cantidadIntentos, intentos = 0, numeroIngresado, numeroAleatorio;
    bool ingresadoAnteriorme, adivino = false;
    //pido y guardo los datos para comenzar con el juego
    cout << "Bievenido, este es un juego en el que intentaras adivinar un numero secreto, generado bajo los criterios que desees." << endl;
    do{
        cout << "\nIngrese un rango mínimo: ";
        cin >> rangoMin;
        cout << endl;
        if(!(rangoMin >= 0))
            cout << "\nEl rango no puede ser inferior a 1..." << endl;
    }while(!(rangoMin >= 0));
    do{
        cout << "Ingrese un rango maximo: ";
        cin >> rangoMax;
        cout << endl;
        if(rangoMax < rangoMin)
            cout << "\nEl rango maximo no puede ser igual o menor al rango mínimo..." << endl;
    }while(rangoMax < rangoMin);
    do{
        cout << "Ingrese la cantidad de intentos máximos: ";
        cin >> cantidadIntentos;
        cout << endl;
        if(cantidadIntentos < 1)
            cout << "La cantidad de intentos máximos no puede ser menor a 1..." << endl;
    }while(cantidadIntentos < 1);
    //comienza el juego
    int numerosIngresados[cantidadIntentos];
    int numerosIngresadosOrdenados[intentos];
    srand(time(NULL));
    numeroAleatorio = rangoMin + rand() % (rangoMax - rangoMin + 1);
    cout << "COMIENZA EL JUEGO" << endl;
    do{
        //pido y guardo el número ingresado por el usuario
        ingresadoAnteriorme = false;
        cout << "\nIntente adivinar el número secreto: ";
        cin >> numeroIngresado;
        //verifico si fue ingresado anteriormente
        for(int x = 0; x < intentos; x++){
            if(numerosIngresados[x] == numeroIngresado)
                ingresadoAnteriorme = true;
        }
        if(!(ingresadoAnteriorme)){
            numerosIngresados[intentos] = numeroIngresado;
            intentos++;
            if(numeroIngresado == numeroAleatorio){
                cout << "ADIVINASTE!!! El número secreto era <" << numeroAleatorio << "> y te costo (" << intentos + 1 << ") intentos" << endl;
                adivino = true;
                break;
            }else{
                if(intentos != cantidadIntentos){
                    if(numeroIngresado < numeroAleatorio)
                        cout << "\nEl número secreto es mas alto";
                    else
                        cout << "\nEl número secreto es mas bajo";

                        if(intentos > 1){
                            cout << " y los números que ingresaste anteriormente son:\n[";
                            mostrarOrdenados(numerosIngresados, intentos);
                            cout << "]" << endl;

                        }
                    cout << "\nVas " << intentos << "/" << cantidadIntentos << " intentos" <<  endl;
                }
            }
        }else{
            cout << "\nEl número que ingresaste ya fue ingresado anteriormente. Esto no cuenta como un intento." << endl;
        }
    }while(intentos < cantidadIntentos);
    if(!(adivino))
        cout << "Te quedaste sin intentos, suerte para la próxima." << endl;
    cout << "Fin del programa.";

    return 0;
}
void mostrarOrdenados(int numerosIngresados[], int cantidadNumeros){
    int aux;
    for(int x = 0; x < cantidadNumeros; x++){
        for(int y = 0; y < cantidadNumeros - 1; y++){
            if(numerosIngresados[y] > numerosIngresados[y + 1]){
                aux = numerosIngresados[y];
                numerosIngresados[y] = numerosIngresados[y + 1];
                numerosIngresados[y + 1] = aux;
            }
        }
    }
    for(int x = 0; x < cantidadNumeros; x++){
        cout << " <" << numerosIngresados[x] << "> ";
    }
}
