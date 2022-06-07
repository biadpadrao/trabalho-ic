using System;

class Program {
  public static void Main (string[] args) {
  int x, y, z; // lado 1, lado 2, lado 3
    while (true) {
    Console.Write("\nDigite 3 valores reais: \n");
    x = int.Parse(Console.ReadLine ());
    y = int.Parse(Console.ReadLine ());
    z = int.Parse(Console.ReadLine ());
    if ((z < x + y) && (y < y + z) && (x < z + y)) { // criterio para ser triangulo
      if ((x == y) && (y == z)) {
        Console.WriteLine("O triângulo é equilátero.\n");
      } else if ((x == y) && (y != z)) {
        Console.WriteLine("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        Console.WriteLine("O triângulo é isósceles.\n");
      } else if ((y == z) && (y != x)) {
        Console.WriteLine("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        Console.WriteLine("O triângulo é isósceles.\n");
      } else if ((x != y) && (y != z) && (z != x)) {
        Console.WriteLine("O triângulo é escaleno.\n");
      }
    } else {
      Console.WriteLine("Triângulo inválido.\n");
    }
  }
  }
}
