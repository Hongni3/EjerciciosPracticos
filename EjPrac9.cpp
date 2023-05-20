/*Solicitar al usuario que ingrese un número y determinar si es un número perfecto.*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int num;

    cout << "Ingrese numero: ";
    cin >> num;

    if (esNumeroPerfecto(num)) {
        cout << "El numero " << num << " es un numero perfecto." << endl;
    } else {
        cout << "El numero " << num << " no es un numero perfecto." << endl;
    }

    return 0;
}

bool esNumeroPerfecto(int num) {
    int sumaDivisores = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }

    return sumaDivisores == num;
}