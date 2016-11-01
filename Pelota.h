class Pelota
{
    public:
        Pelota() {
            x=48; y=16; a=2; b=2;
        }


        void mueve(Barra b1, Barra b2) {
            setcolor(15);
            //fillellipse(x, y, 8, 8);
            circle(x,y,8);
            delay(5);
            setcolor(0);
            circle(x,y,8);
            x=x+a;
            y=y+b;

            if (((x==b2.getLeft()-12) && (x==b2.getRight())-12) && (y<=b2.getTop() || y<=b2.getBottom()) ){
                a=-2;
            }
            if (((x==b1.getLeft()) && (x==b1.getRight())) ){
                a=-2;
            }

            if (x==620) {
                    ptsJugador1++;
                    x=48; y=16; a=2; b=2;
            }
            if (y==450) { b=-2; }
            if (x==10) {
                    ptsJugador2++;
                    x=48; y=16; a=2; b=2;
            }
            if (y==8) { b=2; }

            if (y>=1 && y<=480){
                setcolor(15);
                line(320,1,320,30);
                line(320,60,320,100);
                line(320,140,320,180);
                line(320,220,320,260);
                line(320,300,320,340);
                line(320,380,320,420);
                line(320,440,320,460);
            }
        }


        void golpe(Barra b1, Barra b2){
            /*if ( (b1.getTop() == y)|| (b1.getBottom() == y)){
                a=-2;
            }*/
             //(x>=b2.getTop()-12 ) && (x<=b2.getBottom()-12) &&
            //&& (y===b2.getTop() && y==b2.getBottom())

           /* if((b2.getTop()-12 == y && b2.getBottom()-12 ==y)){
                b=-2;
            }*/
            /*if ((b1.getRight()-12 == x )){
                a=+2;
            }*/
            /*if (b2.getLeft() >= y) {
                a=+2;
            }*/
            }

        bool existeGanador(){
            if (ptsJugador1 == 7 || ptsJugador2==7)
                return true;
            return false;
        }

        bool conocerGanador(){
            if (ptsJugador1 == 7)
                return true;
            return false;
        }

        int getX(){
            return x;
        }

        int getY(){
            return y;
        }

        void setA(int a){
            this->a = a;
        }

        void setB(int b){
            this->b = b;
        }

        int getA(){
            return a;
        }

        int getB(){
            return b;
        }

        int getPtosJugador1(){
            /*stringstream pto;
            pto<< ptsJugador1;
            return pto.str();*/
            return ptsJugador1;
        }

        int getPtosJugador2(){
            /*stringstream pto;
            pto<< ptsJugador2;
            return pto.str();*/
            return ptsJugador2;
        }

       /* void mostrarMarcador(){
            char j1 = getPtosJugador1();
            char j2 = getPtosJugador2();
            outtextxy(100,520,j1);
            outtextxy(540,520,j2);
        }*/

    private:
        int x, y, a, b, ptsJugador1=0, ptsJugador2=0;
};
