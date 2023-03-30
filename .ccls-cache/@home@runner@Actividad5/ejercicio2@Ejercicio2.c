#include <stdio.h>

// Función para llenar el arreglo
void llenarArreglo(float arreglo[], int n) {
  for (int i = 0; i < n; i++) {
    printf("Ingresa la calificación %d: ", i + 1);
    scanf("%f", &arreglo[i]);
  }
}

// Función para calcular el promedio
float calcularPromedio(float arreglo[], int n) {
  float suma = 0;
  for (int i = 0; i < n; i++) {
    suma += arreglo[i];
  }
  return suma / n;
}

// Función principal (main) que usa las funciones anteriores
int main() {
  int n;
  printf("¿Cuantas calificaciones desea ingresar? ");
  scanf("%d", &n);
  float calificaciones[n];
  llenarArreglo(calificaciones, n);
  float promedio = calcularPromedio(calificaciones, n);
  printf("El promedio es: %.2f\n", promedio);
  return 0;
}
EJERCICIO 2
#include <stdio.h>

    // Función para llenar las matrices
    void
    llenarMatrices(int matrizA[][100], int matrizB[][100], int m, int n) {
  printf("\nMatriz A\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Ingrese el valor de a%d%d: ", i + 1, j + 1);
      scanf("%d", &matrizA[i][j]);
    }
  }
  printf("\nMatriz B\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Ingrese el valor de b%d%d: ", i + 1, j + 1);
      scanf("%d", &matrizB[i][j]);
    }
  }
}

// Función para calcular la suma de matrices
void sumarMatrices(int matrizA[][100], int matrizB[][100], int matrizC[][100],
                   int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
  }
}

// Función para mostrar la matriz resultante
void mostrarMatriz(int matrizC[][100], int m, int n) {
  printf("\nMatriz C = Matriz A + Matriz B\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("C%d%d = %d\n", i + 1, j + 1, matrizC[i][j]);
    }
  }
}

// Función principal (main) que usa las funciones anteriores
int main() {
  int m, n;
  printf("Ingrese el número de filas: ");
  scanf("%d", &m);
  printf("Ingrese el número de columnas: ");
  scanf("%d", &n);
  int matrizA[100][100], matrizB[100][100], matrizC[100][100];
  llenarMatrices(matrizA, matrizB, m, n);
  sumarMatrices(matrizA, matrizB, matrizC, m, n);
  mostrarMatriz(matrizC, m, n);
  return 0;
}