//
//1) Imprima los números múltiplos de 5 comprendidos entre 1 y 100 (bucle *for*)
//

#include <iostream>
using namespace std;

int main(){
    int num;
    for( num=1; num<=100; num++){
        if(num%5==0){
            cout << "El numero " << num << " es multiplo de 5 " << endl;        
        }
    }


    return 0;
}