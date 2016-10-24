#include <iostream>
#include <winbgim.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

#include "Barra.h"
#include "Pelota.h"
#include "Juego.h"



int main()
{

    char tecla;
    bool jugador = false , juegoTerminado = false;
    Juego juego;
    Pelota pelota;

    Barra bar1(10,280,30,180);
    Barra bar2(600,280,620,180);

    bar1.mostrar();
    bar2.mostrar();

    do{
        if (pelota.existeGanador()== true){
                if (pelota.conocerGanador()==true){
                    cout<<"Ganador Jugador 1!";
                    juegoTerminado = true;
                    system("pause");
                }
                else{
                    cout<<"Ganador Jugador 2";
                    juegoTerminado = true;
                    system("pause");
                }
            }
        pelota.golpe(bar1,bar2);
        pelota.mueve();
        juego.mostrarMarcador(pelota);
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
    }while(juegoTerminado==false);

    return 0;
}
