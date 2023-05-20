/*Imprimir los primeros 20 términos de la secuencia de números de Pell.*/

#include <iostream>
using namespace std;

int main() {
    int terminos = 20;
    int p0 = 0;
    int p1 = 1;

    cout << "Los primeros " << terminos << " terminos de la secuencia de numeros de Pell son:" << std::endl;
    cout << p0 << " " << p1 << " ";

    for (int i = 2; i < terminos; i++) {
        int pn = 2 * p1 + p0;
        cout << pn << " ";

        p0 = p1;
        p1 = pn;
    }

    cout << endl;

    return 0;
}