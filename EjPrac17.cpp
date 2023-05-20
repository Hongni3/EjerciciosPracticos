/*Determinar si un número ingresado por el usuario es perfecto o no.*/
#include <iostream>
using namespace std;

bool esNumeroPerfecto(int numero) {
    int sumaDivisores = 0;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }

    return sumaDivisores == numero;
}

int main() {

    
    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    if (esNumeroPerfecto(numero)) {
        cout << "El numero " << numero << " es un numero perfecto." << endl;
    } else {
        cout << "El numero " << numero << " no es un numero perfecto." << endl;
    }

    return 0;
}

