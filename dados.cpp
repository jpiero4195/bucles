//
//*4)* Diseñe el programa que utilizando números aleatorios, simule el lanzamiento de 2 dados. Un usuario gana cuando ambos dados sacan el mismo número, o cuando la sumatoria de las mismas es 11. Utilice un *bucle while* para que el usuario tenga 3 oportunidades para participar.  Utilice la sentencia *break* para abandonar el bucle en caso de que el jugador gane dentro de los 3 intentos.
//Ejemplo del break:
//while(CONDICION){
//if(se_cumple_condición_ganadora){
//cout<<"MENSAJE DE FELICITACIÓN. GANASTE EN EL INTENTO #.....";
//break; //abandona o rompe el bucle for
//
//}
//}
//Importante: Para lanzar los datos, en cada oportunidad, el usuario debe ver el mensaje "PULSE ENTER para tirar los dados"

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>

using namespace std;

int main() {
    srand(time(NULL));

    int oportunidades = 3;
    char opcion;
    bool ganador = false;

    while (oportunidades>0) {
        cout<<"\nPulsar <ENTER> parar tirar el dado " << endl;
        cin.get();
        int dado1 = 1 + rand() % (6);
        int dado2 = 1 + rand() % (6);
        cout << "Lanzamiento de los dados: " << dado1 << " y " << dado2 << endl;
        if ((dado1 == dado2) || (dado1 + dado2 == 11)) {
            cout << "MENSAJE DE FELICITACIÓN. GANASTE EN EL INTENTO #." << oportunidades << endl;
            ganador = true;
            break;
        } else {
            cout << "No has ganado en este intento. Intenta de nuevo." << endl;
            oportunidades--;
        }
        cout << "Te quedan " << oportunidades << " intentos." << endl;
    }

    if (!ganador) {
        cout << "Lo siento, has perdido. No has ganado en ninguno de los 3 intentos." << endl;
    }

    return 0;
}