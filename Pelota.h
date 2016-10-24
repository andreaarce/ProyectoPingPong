class Pelota
{
    public:
        Pelota() {
            x=48; y=16; a=2; b=2;
        }


        void mueve() {
            setcolor(15);
            //fillellipse(x, y, 8, 8);
            circle(x,y,8);
            delay(5);
            setcolor(0);
            circle(x,y,8);
            x=x+a;
            y=y+b;

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
                line(320,1,320,20);
                line(320,60,320,100);
                line(320,140,320,180);
                line(320,220,320,260);
                line(320,300,320,340);
                line(320,380,320,420);
                line(320,460,320,480);
            }
        }


        void golpe(Barra b1, Barra b2){
            if (b2.getLeft()==x || b2.getRight()==x){
                a+=2;
            }
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

    private:
        int x, y, a, b, ptsJugador1=0, ptsJugador2=0;
};