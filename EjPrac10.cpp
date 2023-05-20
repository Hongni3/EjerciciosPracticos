/*Imprimir los primeros 100 números primos.*/

#include <iostream>
using namespace std;
int main(){
      cout << "Los primeros 100 numeros primos son:" << endl;

    int cantidadPrimos = 0;
    int numero = 2;

    while (cantidadPrimos < 100) {
        bool esPrimo = true;

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            cout << numero << " ";
            cantidadPrimos++;
        }

        numero++;
    }

    cout << endl;

    return 0;
}