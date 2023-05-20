/*Calcular la suma de los números pares del 1 al 100.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
        int suma = 0;

    for (int i = 2; i <= 100; i += 2) {
         if (i % 2 == 0) {
            suma += i;
        }
    }

    cout << "Las sumas de los numeros pares del 1 al 100 es: " << suma << endl;

    return 0;
}
