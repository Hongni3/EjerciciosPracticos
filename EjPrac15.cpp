/*Generar una tabla de multiplicar para un número ingresado por el usuario.*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "La tabla de multiplicar del " << numero << "es:" << endl;

    for (int i = 1; i <= 13; i++) {
        int resultado = numero * i;
        cout << numero << " x " << i << " = " << resultado << endl;
    }

    return 0;
}