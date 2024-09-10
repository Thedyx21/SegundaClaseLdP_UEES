#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <string>   // Para std::to_string
using namespace std;

// Ejercicio 1: Suma y promedio
void suma_promedio() {
    const int num_valores = 10;
    double valores[num_valores], suma = 0, promedio;

    cout << "Ingrese 10 valores:\n";
    for (int i = 0; i < num_valores; ++i) {
        cout << "Ingrese el valor " << (i + 1) << ": ";
        cin >> valores[i];
        suma += valores[i];
    }

    promedio = suma / num_valores;
    cout << "La suma de los valores es: " << suma << endl;
    cout << "El promedio de los valores es: " << promedio << endl;
}

// Ejercicio 2: Valores aleatorios y contadores de pares/impares
void valores_random() {
    const int num_valores = 500;
    int valores[num_valores];
    int pares = 0, impares = 0;

    srand(time(0));  // Inicializamos la semilla

    for (int i = 0; i < num_valores; ++i) {
        valores[i] = rand() % 51 + 50;  // Valores entre 50 y 100

        if (valores[i] % 2 == 0) {
            ++pares;
        } else {
            ++impares;
        }
    }

    cout << "Valores pares: " << pares << endl;
    cout << "Valores impares: " << impares << endl;
}

// Ejercicio 3: Ventas por sucursal y cálculo de promedio
void ventas_sucursales() {
    const int num_sucursales = 25;
    string sucursales[num_sucursales];
    int ventas[num_sucursales];
    double promedio_ventas = 0;

    srand(time(0));  // Inicializamos la semilla

    for (int i = 0; i < num_sucursales; ++i) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = rand() % 9001 + 1000;  // Ventas entre 1000 y 10000
        promedio_ventas += ventas[i];
    }

    promedio_ventas /= num_sucursales;
    cout << "Promedio de ventas: " << promedio_ventas << endl;

    cout << "\nSucursales con ventas mayores al promedio:\n";
    for (int i = 0; i < num_sucursales; ++i) {
        if (ventas[i] > promedio_ventas) {
            cout << sucursales[i] << " - Ventas: " << ventas[i] << endl;
        }
    }
}

int main() {
    int opcion;
    cout << "Selecciona el ejercicio a ejecutar (1, 2 o 3): ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ejercicio 1: Suma y Promedio" << endl;
            suma_promedio();
            break;
        case 2:
            cout << "Ejercicio 2: Valores aleatorios pares/impares" << endl;
            valores_random();
            break;
        case 3:
            cout << "Ejercicio 3: Ventas por sucursal" << endl;
            ventas_sucursales();
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
