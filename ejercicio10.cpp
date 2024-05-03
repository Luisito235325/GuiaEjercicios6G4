#include <iostream>
#include <vector>
/*Implementa un programa que solicite al usuario ingresar una matriz y 
luego calcule su transposición. La transposición de una matriz se 
realiza intercambiando filas por columnas. Imprime la matriz 
transpuesta como salida*/
using namespace std;

// Función para calcular la transposición de una matriz
vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz);

int main() {
    // Solicitar al usuario las dimensiones de la matriz
    int filas, columnas;
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> columnas;

    // Crear la matriz con las dimensiones especificadas
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // Solicitar al usuario los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la transposición de la matriz
    vector<vector<int>> matriz_transpuesta = transponerMatriz(matriz);

    // Mostrar la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < matriz_transpuesta.size(); ++i) {
        for (int j = 0; j < matriz_transpuesta[0].size(); ++j) {
            cout << matriz_transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Función para calcular la transposición de una matriz
vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();

    // Crear una matriz transpuesta con las dimensiones invertidas
    vector<vector<int>> matriz_transpuesta(columnas, vector<int>(filas));

    // Calcular la transposición de la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz_transpuesta[j][i] = matriz[i][j];
        }
    }

    return matriz_transpuesta;
}