//
//3) Un programa pide por teclado carácter (puede ser una letra o un símbolo). También pide la cantidad de veces que ese carácter debe repetirse.
//Por ejemplo: Si se ingresa la letra A y el número 15, el resultado sería:
//A A A A A A A A A A A A A A A  (bucle *while*)
//

#include <iostream>
using namespace std;

int main() {
    char caracter;
    int cantidad;
    cout << "Introduce un carácter: ";
    cin >> caracter;
    cout << "Introduce la cantidad de veces que se debe repetir el carácter: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++) {
        cout << caracter << ' ';
    }
    cout << endl;

    return 0;
}