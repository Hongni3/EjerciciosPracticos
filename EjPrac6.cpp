/*Imprimir la serie de Fibonacci hasta el número 1000.*/

#include <iostream>
using namespace std;
int main(){
    
    int numeroAn1 = 0;
    int numeroAc2 = 1;

    cout << "Serie de Fibonacci hasta el número 1000:" << endl;
    cout << numeroAn1 << " " << numeroAc2 << " ";

    while (numeroAn1 + numeroAc2 <= 1000) {
        int suma = numeroAn1 + numeroAc2;
        cout << suma << " ";
        numeroAn1 = numeroAc2;
        numeroAc2 = suma;
    }
    return 0;
};

