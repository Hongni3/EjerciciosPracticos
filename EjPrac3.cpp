/*Calcular el factorial de un número ingresado por el usuario utilizando un bucle.*/

#include <iostream>
using namespace std;
int main(){
    int num;
    int factorial =1;
    cout << "Ingrese un numero para saber su factorial"<< endl;
    cin>> num;
    if (num < 0 ){
        cout<< "Are u Crazy man? No hay definicion para factorial negativo, va estudia mejor <( ￣^￣).." <<endl;

    }else {
    for (int i = 1; i <= num; i++){
        factorial *=i;
        cout << "El Factorial de " << num << " es " << factorial <<endl;
            
        }
    
    }
    return 0;
}