#include <stdio.h>

int main(void) {
  int x, y, z; // lado 1, lado 2, lado 3
  while (1) {
    printf("\nDigite 3 valores reais: \n");
    scanf("%d %d %d", &x, &y, &z);
    if ((z < x + y) && (y < y + z) && (x < z + y)) { // criterio para ser triangulo
      if ((x == y) && (y == z)) {
        printf("O triângulo é equilátero.\n");
      } else if ((x == y) && (y != z)) {
        printf("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        printf("O triângulo é isósceles.\n");
      } else if ((y == z) && (y != x)) {
        printf("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        printf("O triângulo é isósceles.\n");
      } else if ((x != y) && (y != z) && (z != x)) {
        printf("O triângulo é escaleno.\n");
      }
    } else {
      printf("Triângulo inválido.\n");
    }
  }
  return 0;
}
