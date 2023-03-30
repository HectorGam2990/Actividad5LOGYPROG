#include <stdbool.h>
#include <stdio.h>

// Función para determinar si un número es par o impar
bool esPar(int num) {
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

// Función principal (main) que usa la función anterior
int main() {
  int num;
  printf("Ingrese el número a evaluar: ");
  scanf("%d", &num);
  if (esPar(num)) {
    printf("El número %d es par\n", num);
  } else {
    printf("El número %d es impar\n", num);
  }
  return 0;
}