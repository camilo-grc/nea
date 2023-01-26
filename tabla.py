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

producto = 0

for i in range(1,11):
  print()
  for j in range(1,11):
    producto = i * j
    print(f"{i} x {j} = {producto}")
