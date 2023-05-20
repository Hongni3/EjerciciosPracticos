/*Calcular la suma de los dígitos de un número ingresado por el usuario.*/

#include <iostream>
using namespace std; 
int calcularSumaDigitos(int numero) {
    int suma = 0;

    while (numero > 0) {
        int digito = numero % 10;
        suma += digito;
        numero /= 10;
    }

    return suma;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    int sumaDigitos = calcularSumaDigitos(numero);

    cout << "La suma de los dígitos de " << numero << " es: " << sumaDigitos << endl;

    return 0;
}