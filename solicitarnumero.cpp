//Programa: Controlcondicional
//Autor: Casanova Kiara
////Fecha: 24-11-2023
#include <iostream>

using namespace std;

int main() {
    int usuario;

    cout << "Ingresa un número para mostrar su tabla de multiplicar: ";                     cin >> usuario;


    cout << "Tabla de multiplicar del " << usuario << ":" << endl;
    int a = 1;
    do {
        cout << usuario << " x " << a << " = " << usuario * a << endl;
        a++;
    } while (a <= 10);

    return 0;
}

