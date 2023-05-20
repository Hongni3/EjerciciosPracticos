/*Solicitar al usuario que ingrese un número y verificar si es un número Armstrong.*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    int sumaCubosDigitos = calcularSumaCubosDigitos(numero);

    if (sumaCubosDigitos == numero) {
        cout << "El numero " << numero << " es un numero Armstrong." << endl;
    } else {
        cout << "El numero " << numero << " no es un numero Armstrong." << endl;
    }

    return 0;
}

int calcularSumaCubosDigitos(int numero) {
    int suma = 0;
    int numeroOriginal = numero;

    while (numero > 0) {
        int digito = numero % 10;
        suma += digito * digito * digito;
        numero /= 10;
    }

    return suma;
}
