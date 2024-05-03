#include <iostream>
#include <vector>
/*. Crea un programa que permita al usuario ingresar dos vectores de la 
misma longitud y luego calcule su producto punto. Muestra el resultado 
al finalizar el cálculo.*/
using namespace std;

// Función para calcular el producto punto de dos vectores
int productoPunto(const vector<int>& vector1, const vector<int>& vector2);

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

    // Calcular el producto punto de los dos vectores
    int resultado = productoPunto(vector1, vector2);

    // Mostrar el resultado del producto punto
    cout << "El producto punto de los dos vectores es: " << resultado << endl;

    return 0;
}

// Función para calcular el producto punto de dos vectores
int productoPunto(const vector<int>& vector1, const vector<int>& vector2) {
    int longitud = vector1.size();
    int resultado = 0;

    // Multiplicar los elementos correspondientes de los dos vectores y sumar los resultados
    for (int i = 0; i < longitud; ++i) {
        resultado += vector1[i] * vector2[i];
    }

    return resultado;
}
