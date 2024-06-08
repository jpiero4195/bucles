//
//5) Diseñe un programa que realice la sumatoria de los números desde el 1 al 100. (bucle *do..while*)
//Por ejemplo 1 + 2 + 3 + 4 + 5 + 6 + . . . . . .+ 1 00
//*Importante: Debe usar un bucle **do..while*  y un acumulador
//

#include <iostream>
using namespace std;

int main(){
    int suma=0;
    int cont=0;
    cout << endl;
    do {
        suma=suma+cont;
        cont++;
    }while(cont<=100);
    cout << "la sumatoria de los numero desde el 1 al 100 es: " << suma << endl;


    return 0;
}