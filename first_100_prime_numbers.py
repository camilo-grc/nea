#Lista de números primos

#los primos son los números que solo son divisibles por 1 y ellos mismos

prime_numbers = []

divisores = []

for i in range(1, 100):
  primo = []
  for j in range(1, 100):
    if i % j == 0:
      primo.append(j)
  divisores.append(primo)

for i in divisores:
  if len(i)==2:
    prime_numbers.append(max(i))
print(f"First 100 prime numbers: {prime_numbers}")