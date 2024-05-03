#include <iostream>
/*. Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Los numeros impares en orden descendente de 1 y 100 son: " << endl;

    for (int i = 99; i >= 1; i-=2){
        cout << i << endl;
    }
    return 0;
}
