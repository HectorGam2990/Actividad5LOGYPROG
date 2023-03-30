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