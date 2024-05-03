#include <iostream>
/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 son: " << endl;

    for (int i = 1; i <= 100; i++){
        suma += i * i; 
        cout << suma << endl;
    }
    return 0;
}
