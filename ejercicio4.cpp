#include <iostream>
/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
using namespace std;

void promedioEst();

#define MAX 10

int est[MAX];
int suma;
float promedio;

int main(int argc, char const *argv[])
{
    promedioEst();
    cout << "El promedio general de la seccion es: " << promedio << endl;
    return 0;
}

void promedioEst()
{
    for (int i = 0; i < MAX; i++) 
    {
        cout << "Escriba la nota del estudiante " << i + 1 << ": ";
        cin >> est[i];
        suma += est[i];
    }
    promedio = suma / MAX; 
}