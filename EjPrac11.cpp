/*Solicitar al usuario que ingrese una cadena y determinar si es un palíndromo.*/
#include <iostream>
using namespace std;
int main(){
    string cadena;

    cout << "Ingrese porfavor una cadena: ";
    cin >> cadena; 
      bool esPalindromo = true;

    int inicio = 0;
    int fin = cadena.length() - 1;

    while (inicio < fin) {
        if (cadena[inicio] != cadena[fin]) {
            esPalindromo = false;
            break;
        }

        inicio++;
        fin--;
    }

    if (esPalindromo) {
        cout << "La cadena resulta ser un palindromo." << endl;
    } else {
        cout << "La cadena resulta no ser un palindromo." << endl;
    }

    return 0;
}