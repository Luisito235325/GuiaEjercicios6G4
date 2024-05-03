#include <iostream>
#include <vector>
/*Diseña un programa que solicite al usuario ingresar dos matrices y 
luego realice la multiplicación de matrices. Asegúrate de que las 
dimensiones de las matrices sean compatibles para la multiplicación y 
muestra la matriz resultante*/
using namespace std;

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2);

int main() {
    // Solicitar al usuario las dimensiones de las matrices
    int filas1, columnas1, filas2, columnas2;
    cout << "Ingrese el número de filas y columnas de la primera matriz: ";
    cin >> filas1 >> columnas1;
    cout << "Ingrese el número de filas y columnas de la segunda matriz: ";
    cin >> filas2 >> columnas2;

    // Verificar si las matrices son compatibles para la multiplicación
    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 1;
    }

    // Crear las matrices con las dimensiones especificadas
    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));

    // Solicitar al usuario los elementos de la primera matriz
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Solicitar al usuario los elementos de la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Realizar la multiplicación de matrices
    vector<vector<int>> resultado = multiplicarMatrices(matriz1, matriz2);

    // Mostrar la matriz resultante
    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < resultado.size(); ++i) {
        for (int j = 0; j < resultado[0].size(); ++j) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    // Crear una matriz resultante con las dimensiones adecuadas
    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            for (int k = 0; k < columnas1; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}