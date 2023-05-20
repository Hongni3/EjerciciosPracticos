/*Solicitar al usuario que ingrese un número y calcular la suma de los dígitos pares.*/
#include <iostream>
using namespace std; 

int sumaDigitosPares(int numero) {
    int suma = 0;

    while (numero > 0) {
        int digito = numero % 10;

        if (digito % 2 == 0) {
            suma += digito;
        }

        numero /= 10;
    }

    return suma;
}

int main() {
    int numero;

    cout << "Ingrese un num: ";
    cin >> numero;

    int sumaPares = sumaDigitosPares(numero);

    cout << "La suma de los digitos pares son: " << sumaPares << endl;

    return 0;
}