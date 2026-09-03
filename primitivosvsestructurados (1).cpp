#include <iostream>
using namespace std;

const int NUM_ESTUDIANTES_INICIAL = 5;

// Mostrar los elementos del arreglo
void mostrar(float notas[], int n) {
    cout << "Recorrido -> ";

    for (int i = 0; i < n; i++) {
        cout << notas[i];

        if (i < n - 1) {
            cout << ", ";
        }
    }

    cout << endl;
}

// Buscar un valor específico
int buscar(float notas[], int n, float valor) {
    int comparaciones = 0;

    for (int i = 0; i < n; i++) {
        comparaciones++;

        if (notas[i] == valor) {
            cout << "Encontrada en la posicion: " << i << endl;
            cout << "(" << comparaciones << " comparacion(es))" << endl;

            return i;
        }
    }

    cout << "No encontrada tras " << comparaciones
         << " comparacion(es)" << endl;

    return -1;
}

// Insertar un nuevo elemento al final
void insertarAlFinal(float notas[], int &n, float valor) {
    notas[n] = valor;
    n++;
}

// Eliminar un elemento de una posición dada
void eliminarPorPosicion(float notas[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++) {
        notas[i] = notas[i + 1];
    }

    n--;
}

// Sección de tipos de datos primitivos
void seccionPrimitivos() {
    cout << "===== 1. TIPOS DE DATOS PRIMITIVOS =====" << endl;

    // Cada variable primitiva almacena UN solo valor a la vez
    float notaEstudiante1 = 4.5;
    float notaEstudiante2 = 3.8;
    float notaEstudiante3 = 4.2;
    char grupo = 'A';
    bool cursoAprobado = true;

    cout << "Nota estudiante 1: " << notaEstudiante1 << endl;
    cout << "Nota estudiante 2: " << notaEstudiante2 << endl;
    cout << "Nota estudiante 3: " << notaEstudiante3 << endl;
    cout << "Grupo: " << grupo
         << " | Aprobado: " << cursoAprobado << endl;
}

// Sección de tipos de datos estructurados
void seccionEstructurados() {
    cout << "===== 2. TIPOS DE DATO ESTRUCTURADO (ARREGLO) =====" << endl;

    float notas[100] = {4.5, 3.8, 4.2, 2.9, 3.5};
    int n = NUM_ESTUDIANTES_INICIAL;

    cout << "\n-- Recorrido --" << endl;
    mostrar(notas, n);

    cout << "\n-- Busqueda de la nota 4.2 --" << endl;
    buscar(notas, n, 4.2);

    cout << "\n-- Insercion de la nota 3.9 --" << endl;
    insertarAlFinal(notas, n, 3.9);
    mostrar(notas, n);

    cout << "\n-- Eliminacion de la nota en la posicion 1 --" << endl;
    eliminarPorPosicion(notas, n, 1);
    mostrar(notas, n);

    cout << "\n-- Acceso directo --" << endl;
    cout << "Acceso directo notas[0] = " << notas[0]
         << " -> 1 sola operacion (acceso por indice)" << endl;

    cout << "\n-- Busqueda --" << endl;
    cout << "Buscar un valor recorre, en el peor caso, TODOS los elementos"
         << endl;
}

int main() {
    seccionPrimitivos();
    seccionEstructurados();

    return 0;
}
