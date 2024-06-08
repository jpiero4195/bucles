//
//6) Diseñe el programa que utilizando números aleatorios,
//simule el lanzamiento de 1 dado. Un usuario gana cuando el dado saca 6 o 2. 
//Utilice un *bucle do..while* para que el usuario tenga 3 oportunidades para participar.
//

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

    do {
        cout<<"\nPulsar <ENTER> parar tirar el dado " << endl;
        cin.get();
        int dado = 1 + rand() % (6);
        cout << "Lanzamiento del dado es: " << dado << endl;
        if ((dado == 2) || (dado == 6)) {
            cout << "MENSAJE DE FELICITACIÓN. GANASTE EN EL INTENTO #." << oportunidades << endl;
            ganador = true;
            break;
        } else {
            cout << "No has ganado en este intento. Intenta de nuevo." << endl;
            oportunidades--;
        }
        cout << "Te quedan " << oportunidades << " intentos." << endl;
    }while (oportunidades>0);

    if (!ganador) {
        cout << "Lo siento, has perdido. No has ganado en ninguno de los 3 intentos." << endl;
    }

    return 0;
}