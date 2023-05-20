/*Solicitar al usuario que ingrese un número y determinar si es positivo o negativo.*/
#include <iostream>
using namespace std;
int main(){
    
    int num;
    cout << "Ingrese un numero y le diremos si es negativo o positivo "<<endl;
    cin >> num;
    if (num <0){
        cout<< "El numero que usted ingrso es Negativo "<<endl;
    } else {
        if (num > 0){
            cout << "El numero que usted ingreso es positivo "<<endl;
        }
    }
    
    return 0;
}
