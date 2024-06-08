//
//2) Solicite al usuario una tabla de multiplicar. A continuación, imprima la tabla usando el siguiente formato: (bucle *for*)
//

#include <iostream>
using namespace std;

int main(){
    cout << "Tabla de multiplicar" << endl;
    int ta=0;
    cout << "Ingrese que tabla desea que se imprima:" << endl;
    cin >> ta;
    cout << "Usted ingreseo el número " << ta << " y la tabla se muestra a continuacion:" << endl;
    cout << "La tabla del número "<< ta << endl;
    for(int n=0; n<=12; n++){
        cout << ta << " x " << n <<" = " << n*ta << endl;
    }


    return 0;
}