/*Solicitar al usuario que ingrese un número y mostrar su representación en binario.*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "En binario " << numero << "es: ";

    if (numero == 0) {
        cout << "0";
    } else {
        int binario[32];
        int indice = 0;

        while (numero > 0) {
            binario[indice] = numero % 2;
            numero /= 2;
            indice++;
        }

        for (int i = indice - 1; i >= 0; i--) {
            cout << binario[i];
        }
    }

    cout << endl;

    return 0;
}