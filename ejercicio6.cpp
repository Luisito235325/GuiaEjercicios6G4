#include <iostream>
/* Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
using namespace std;

int main()
{
    // Inicializamos la variable 'suma' en 0 para almacenar la suma de los números pares
    int suma = 0;

    // Recorremos los números del 100 al 200
    for (int i = 100; i <= 200; ++i)
    {
        // Verificamos si 'i' es par (su residuo al dividir entre 2 es 0)
        if (i % 2 == 0)
        {
            // Si 'i' es par, lo sumamos a 'suma'
            suma += i;
        }
    }

    // Mostramos el resultado en la consola
    cout << "La suma de los numeros pares entre 100 y 200 es: " << suma << endl;

    return 0;
}