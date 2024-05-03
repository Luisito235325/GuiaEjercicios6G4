#include <iostream>
#include <vector>
/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/
using namespace std;

// Función que suma dos vectores y devuelve el resultado
vector<int> sumarVectores(const vector<int>& vector1, const vector<int>& vector2);

// Función que muestra los elementos de un vector
void mostrarVector(const vector<int>& vector);

int main() {
    // Solicitar al usuario la longitud de los vectores
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Crear dos vectores de la longitud especificada
    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    // Solicitar al usuario los elementos del primer vector
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    // Solicitar al usuario los elementos del segundo vector
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Calcular la suma de los dos vectores
    vector<int> suma = sumarVectores(vector1, vector2);

    // Mostrar la suma de los dos vectores
    cout << "La suma de los dos vectores es:" << endl;
    mostrarVector(suma);

    return 0;
}

// Función que suma dos vectores elemento por elemento
vector<int> sumarVectores(const vector<int>& vector1, const vector<int>& vector2) {
    int longitud = vector1.size(); // Obtener la longitud de los vectores
    vector<int> resultado(longitud); // Crear un vector para almacenar el resultado

    // Sumar los elementos de los dos vectores y guardar el resultado en el vector resultado
    for (int i = 0; i < longitud; ++i) {
        resultado[i] = vector1[i] + vector2[i];
    }

    return resultado; // Devolver el vector con la suma de los dos vectores
}

// Función que muestra los elementos de un vector
void mostrarVector(const vector<int>& vector) {
    for (int i = 0; i < vector.size(); ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}