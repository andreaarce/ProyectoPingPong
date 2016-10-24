class Juego
{
    public:


        Juego() {
            initwindow(640, 580);
            //Linea media
            line(320,1,320,30);
                line(320,60,320,100);
                line(320,140,320,180);
                line(320,220,320,260);
                line(320,300,320,340);
                line(320,380,320,420);
                line(320,440,320,460);
            //Linea cancha
            line(1,460,640,460);
            setcolor(15);
            settextstyle(10, 0,2);
            outtextxy(260,510,"Marcador: ");
            outtextxy(100,520,"0");
            outtextxy(540,520,"0");
        }

        void mostrarMarcador(Pelota p){
            setcolor(15);
            outtextxy(100,520,"0");
            outtextxy(540,520,"0");
            int j1 = p.getPtosJugador1();
            int j2 = p.getPtosJugador2();
            if (j1==1){
                 setcolor(0);
                 settextstyle(10, 0,2);
                 outtextxy(100,520,"1");
            }
            else if (j1==2){
                setcolor(0);
                 outtextxy(100,520,"2");
            }
            else if (j1==3){
                setcolor(0);
                 outtextxy(100,520,"3");
            }
             else if (j1==4){
                 setcolor(0);
                 outtextxy(100,520,"4");
            }
             else if (j1==5){
                 setcolor(0);
                 outtextxy(100,520,"5");
            }
             else if (j1==6){
                 setcolor(0);
                 outtextxy(100,520,"6");
            }
             else if (j1==7){
                 setcolor(0);
                 outtextxy(100,520,"7");
                 outtextxy(250,290,"Jugador 1 Gana!");
                 //system("pause");
            }

            if (j2==1){
                    setcolor(0);
                 outtextxy(100,520,"1");
            }
            else if (j2==2){
                setcolor(0);
                 outtextxy(100,520,"2");
            }
            else if (j2==3){
                setcolor(0);
                 outtextxy(100,520,"3");
            }
             else if (j2==4){
                 setcolor(0);
                 outtextxy(100,520,"4");
            }
             else if (j2==5){
                 setcolor(0);
                 outtextxy(100,520,"5");
            }
             else if (j2==6){
                 setcolor(0);
                 outtextxy(100,520,"6");
            }
             else if (j2==7){
                 setcolor(0);
                 outtextxy(100,520,"7");
                 outtextxy(250,290,"Jugador 2 Gana!");
                 //system("pause");

            }


            //outtextxy(540,520,j2);
        }

        virtual ~Juego() {
            closegraph();
        }

};
