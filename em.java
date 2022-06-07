import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int x, y, z; // lado 1, lado 2, lado 3
    Scanner entrada = new Scanner(System.in);
    
    while (true) {
    System.out.print ("\nDigite 3 valores reais: \n");
    x = entrada.nextInt();
    y = entrada.nextInt();
    z = entrada.nextInt();
    if ((z < x + y) && (y < y + z) && (x < z + y)) { // criterio para ser triangulo
      if ((x == y) && (y == z)) {
        System.out.print ("O triângulo é equilátero.\n");
      } else if ((x == y) && (y != z)) {
        System.out.print ("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        System.out.print ("O triângulo é isósceles.\n");
      } else if ((y == z) && (y != x)) {
        System.out.print ("O triângulo é isósceles.\n");
      } else if ((x == z) && (z != y)) {
        System.out.print ("O triângulo é isósceles.\n");
      } else if ((x != y) && (y != z) && (z != x)) {
        System.out.print ("O triângulo é escaleno.\n");
      }
    } else {
      System.out.print ("Triângulo inválido.\n");
    }
  }
  }
}
