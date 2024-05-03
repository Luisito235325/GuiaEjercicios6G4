#include <iostream>
/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/
using namespace std;

// Declaración de la función calcularSuma
// Recibe un número natural n e imprime la suma de los números naturales desde 1 hasta n
void calcularSuma(int num);

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    // Llamada a la función calcularSuma con el número ingresado por el usuario como argumento
    calcularSuma(num);

    return 0;
}

// Definición de la función calcularSuma
// Recibe un número natural num e imprime la suma de los números naturales desde 1 hasta num
void calcularSuma(int num) {
    int suma = 0;
    // Bucle que suma los números naturales desde 1 hasta num
    for (int i = 1; i <= num; ++i) {
        suma += i;
    }
    // Imprime el resultado de la suma
    cout << "La suma de los numeros desde 1 hasta " << num << " es: " << suma << endl;
}