#include <stdio.h>

// Definición de la estructura "Estudiante"
struct Estudiante {
  int matricula;
  char nombre[50];
  char carrera[50];
  float promedio;
  char direccion[100];
};

// Función para capturar los datos del estudiante
void capturarDatos(struct Estudiante *estudiante) {
  printf("Ingrese la matrícula del estudiante: ");
  scanf("%d", &(estudiante->matricula));
  printf("Ingrese el nombre del estudiante: ");
  scanf(" %[^\n]", estudiante->nombre);
  printf("Ingrese la carrera del estudiante: ");
  scanf(" %[^\n]", estudiante->carrera);
  printf("Ingrese el promedio del estudiante: ");
  scanf("%f", &(estudiante->promedio));
  printf("Ingrese la dirección del estudiante: ");
  scanf(" %[^\n]", estudiante->direccion);
}

// Función para mostrar los datos del estudiante
void mostrarDatos(struct Estudiante estudiante) {
  printf("La matrícula del estudiante es: %d\n", estudiante.matricula);
  printf("El nombre del estudiante es: %s\n", estudiante.nombre);
  printf("La carrera del estudiante es: %s\n", estudiante.carrera);
  printf("El promedio del estudiante es: %.2f\n", estudiante.promedio);
  printf("La dirección del estudiante es: %s\n", estudiante.direccion);
}

// Función main que llama a las funciones capturarDatos y mostrarDatos
int main() {
  struct Estudiante estudiante;
  capturarDatos(&estudiante);
  mostrarDatos(estudiante);
  return 0;
}