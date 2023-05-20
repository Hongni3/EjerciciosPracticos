/*Solicitar al usuario que ingrese dos números y mostrar el máximo común divisor (MCD) de ambos.*/

#include <iostream>
using namespace std;

int calcularMCD(int a, int b) {
    if (b == 0) {
        return a;
    }

    return calcularMCD(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Ingrese primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese segundo numero: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}