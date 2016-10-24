#include <iostream>
#include <winbgim.h>

using namespace std;

#include "Juego.h"
#include "Barra.h"
#include "Pelota.h"


int main()
{

    char tecla;
    bool juegoTerminado = false;
    Juego juego;
    Pelota pelota;

    Barra bar1(10,280,30,180);
    Barra bar2(600,280,620,180);

    bar1.mostrar();
    bar2.mostrar();

    do{
        pelota.golpe(bar1,bar2);
        pelota.mueve();
        while(kbhit()) {
            tecla = getch();
            switch(tecla){
                case 'w':
                case 'W':
                    bar1.mover(false);
                    break;
               case 's':
               case 'S':
                    bar1.mover(true);
                    break;
                case 'p':
               case 'P':
                    bar2.mover(false);
                    break;
               case 'l':
               case 'L':
                    bar2.mover(true);
                    break;
               default:
                break;
            }
        }

        if (pelota.existeGanador()== true){
            juegoTerminado = true;
            if (pelota.conocerGanador()==true){
                cout<<"Ganador Jugador 1!";
            }
            else{
                cout<<"Ganador Jugador 2";
            }

        }

    }while(juegoTerminado==false);

    return 0;
}
