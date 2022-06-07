while (1):
  x = int(input("\nDigite um valor real: "))
  y = int(input("\nDigite um valor real: "))
  z = int(input("\nDigite um valor real: "))
  if ((z < x + y) and (y < y + z) and (x < z + y)):
    if ((x == y) and (y == z)):
      print("O triângulo é equilátero.\n")
    elif ((x == y) and (y != z)):
      print("O triângulo é isósceles.\n")
    elif ((x == z) and (z != y)):
      print("O triângulo é isósceles.\n")
    elif ((y == z) and (y != x)):
      print("O triângulo é isósceles.\n")
    elif ((x == z) and (z != y)):
      print("O triângulo é isósceles.\n")
    elif ((x != y) and (y != z) and (z != x)):
      print("O triângulo é escaleno.\n")
  else:
    print("Triângulo inválido.\n")
