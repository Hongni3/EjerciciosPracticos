/*Solicitar al usuario que ingrese una cadena y contar cuántas vocales contiene.*/

#include <iostream>

using namespace std;

int main() {
    string cadena;
    int contador = 0;

    cout << "Ingresa una cadena: ";
    getline(cin, cadena);

    for (char c : cadena) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }

    cout << "La cadena contiene " << contador << " vocales." << endl;

    return 0;
}