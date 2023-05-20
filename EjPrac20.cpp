/*Imprimir los números del 1 al 100, pero reemplazar los múltiplos de 3 por "Fizz", los múltiplos de 5 por "Buzz" y los múltiplos de ambos por "FizzBuzz".*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz ";
        } else if (i % 3 == 0) {
            cout << "Fizz ";
        } else if (i % 5 == 0) {
            cout << "Buzz ";
        } else {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}