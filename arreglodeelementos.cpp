//programa: arreglo de elementos
//autor: Kiara Casanova
//fecha: 24-11-2023


#include <iostream>

using namespace std;

int main() {
    int n[5];

    int s = 0;
    int e = 0;

    do {
        cout << "Ingresa el valor para el elemento " << e + 1 << ": ";
        cin >> n[e];                                                              

        s = s +  n[e];
        e++;
    } while (e < 5);


    cout << "La suma de los elementos del arreglo es: " << s << endl;

    return 0;
}
