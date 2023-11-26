//Programa: Controlcondicional
//Autor: Casanova Kiara 
////Fecha: 24-11-2023

#include <iostream>

using namespace std;

int main() {
    int variable;

    cout << "Ingresa un número: ";
    cin >> variable;                                                                      
                                                                                            if (variable > 0) {
        cout << "El número que ingreso es positivo." << endl;
    } else if (variable < 0) {
        cout << "El número que ingreso es negativo." << endl;                                 } else {
        cout << "El número ingresado es cero." << endl;                                     }

    return 0;
}
