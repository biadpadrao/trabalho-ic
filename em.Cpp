#include <iostream>
using namespace std;

int main(void) {
  int x, y, z; // lado 1, lado 2, lado 3
  do {
    cout << "\nDigite 3 valores reais: \n";
    cin >> x >> y >> z;
    if ((z < x + y) && (y < y + z) && (x < z + y)) { // criterio para ser triangulo
      if ((x == y) && (y == z)) {
        cout << "O triângulo é equilátero.\n";
      } else if ((x == y) && (y != z)) {
        cout << "O triângulo é isósceles.\n";
      } else if ((x == z) && (z != y)) {
        cout << "O triângulo é isósceles.\n";
      } else if ((y == z) && (y != x)) {
        cout << "O triângulo é isósceles.\n";
      } else if ((x == z) && (z != y)) {
        cout << "O triângulo é isósceles.\n";
      } else if ((x != y) && (y != z) && (z != x)) {
        cout << "O triângulo é escaleno.\n";
      }
    } else {
      cout << "Triângulo inválido.\n";
    }
  } while ((x != 0) && (y != 0) && (z != 0));
}
