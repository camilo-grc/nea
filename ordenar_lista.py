lista_desordenada = [4,2,7,2,52,6,1,6,1,7,3,8,0,4]

n = len(lista_desordenada)

aux = 0
for j in range(n):
  for i in range(n-1):
    if lista_desordenada[i]>lista_desordenada[i+1]:
      aux = lista_desordenada[i]
      lista_desordenada[i] = lista_desordenada[i+1]
      lista_desordenada[i+1] = aux
print(lista_desordenada)