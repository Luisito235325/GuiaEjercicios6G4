#include <iostream>
/* Para un grupo de clase de 8 estudiantes, realice un programa que 
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/
using namespace std;

#define MAX 8

void calcularPro(int notas[], int tamaño);

int main(int argc, char const *argv[])
{
    int notas;
    int est[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas;
        est[i] = notas; // Guardamos la nota en el array est
    }

    calcularPro(est, MAX);

    return 0;
}

void calcularPro(int notas[], int tamaño)
{
    int aprobados = 0, reprobados = 0, suma = 0;
    float promedio;

    for (int i = 0; i < tamaño; i++)
    {
        suma += notas[i];
        if (notas[i] >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    promedio = static_cast<float>(suma) / tamaño;

    cout << "Cantidad de alumnos aprobados son: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados son: " << reprobados << endl;
    cout << "El promedio de los estudiantes es: " << promedio << endl;
}