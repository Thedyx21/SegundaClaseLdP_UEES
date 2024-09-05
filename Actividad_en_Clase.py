#ejercicio 1
print("Ejercicio 1:")
def suma_promedio():
    valores = []
    for i in range(10):
        valor = float(input(f"Ingrese el valor {i+1}: "))
        valores.append(valor)
    
    suma = sum(valores)
    promedio = suma / 10

    print(f"La suma de los valores es: {suma}")
    print(f"El promedio de los valores es: {promedio}")

suma_promedio()

#ejercicio 2
import random
print("Ejercicio 2:")
def valores_random():
    valores = [random.randint(50, 100) for i in range(500)]
    pares = len([valor for valor in valores if valor % 2 == 0])
    impares = len([valor for valor in valores if valor % 2 != 0])

    print(f"Valores pares: {pares}")
    print(f"Valores impares: {impares}")

valores_random()

#ejercicio 3
import random
print("Ejercicio 3:")

sucursales = [f'Sucursal {i+1}' for i in range(25)]
ventas = [random.randint(1000, 10000) for _ in range(25)]

promedio_ventas = sum(ventas) / len(ventas)

print(f"Promedio de ventas: {promedio_ventas:.2f}")

print("\nSucursales con ventas mayores al promedio:")
for i in range(25):
    if ventas[i] > promedio_ventas:
        print(f"{sucursales[i]} - Ventas: {ventas[i]}")



    