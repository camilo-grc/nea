# n = int(input("Ingrese el primer factor de la tabla de multiplicar: "))

# def tablaMultiplicar(primerFactor):
#   producto = 0
#   for i in range(1,10+1):
#     producto = primerFactor*i
#     print(f"{primerFactor} x {i} = {producto}")

# for i in range(10):
#   tablaMultiplicar(primerFactor=n)
#   print("------------------")
#   n+=1

factor_1 = 0
producto = 0

for j in range(1,11):
  factor_1 += 1
  print()
  for i in range(1,11):
    producto = factor_1 * i
    print(f"{factor_1} x {i} = {producto}")