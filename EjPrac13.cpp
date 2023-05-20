/*Imprimir los números impares del 1 al 50 en orden descendente.*/

#include <iostream>
using namespace std;

int main() {
    cout << "Numeros impares del 1 al 50 en orden descendente:" << endl;

    for (int i = 50; i >= 1; i--) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}