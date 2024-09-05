#include <iostream>
using namespace std;

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

int main() {
    cout << "Ejercicio 1:" << endl;
    suma_promedio();
    return 0;
}


#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

void valores_random() {
    const int num_valores = 500;
    int valores[num_valores];
    int pares = 0, impares = 0;

    srand(time(0));  

    for (int i = 0; i < num_valores; ++i) {
        valores[i] = rand() % 51 + 50; 

        if (valores[i] % 2 == 0) {
            ++pares;
        } else {
            ++impares;
        }
    }

    cout << "Valores pares: " << pares << endl;
    cout << "Valores impares: " << impares << endl;
}

int main() {
    cout << "Ejercicio 2:" << endl;
    valores_random();
    return 0;
}


#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    const int num_sucursales = 25;
    string sucursales[num_sucursales];
    int ventas[num_sucursales];
    double promedio_ventas = 0;

    srand(time(0));  

    for (int i = 0; i < num_sucursales; ++i) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = rand() % 9001 + 1000;  
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

    return 0;
}
