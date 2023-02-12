n = int(input("Ingrese un número: "))

divisores = []

for i in range(1,n+1):
  if n % i == 0:
    divisores.append(i)

if len(divisores) == 2:
  print(f"{n} es un número primo")
else:
  print(f"{n} es un número compuesto")