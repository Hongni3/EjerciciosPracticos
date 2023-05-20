/*Escribir un programa que determine si un número ingresado por el usuario es primo.*/
#include <iostream>

using namespace std;

int main() {
    int num;
    bool esPrimo = true;

    cout << "Ingresa un numero: "<< endl;
    cin >> num;

    if (num <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " no es un numero primo" << endl;
    }

    return 0;
}