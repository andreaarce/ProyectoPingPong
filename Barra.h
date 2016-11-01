class Barra{
    public:
        Barra(int left,int top,int right, int bottom) {
            this->left = left;
            this->top =top;
            this->right = right;
            this->bottom = bottom;
        }

        Barra(){}

        void mostrar() {
            setbkcolor(15);
            setcolor(15);
            //Izquierda 30,280,50,180
            rectangle(left,top,right,bottom);
            //Derecha 580,280,600,180
            //rectangle(left2,top2,right2,bottom2);
        }

        //arriba es false, abajo es true , true es barra1(jugador)
        void mover(bool movimiento){
                    if (movimiento == true){
                            if (bottom==360) {
                                    setcolor(15);
                                    rectangle(left,top,right,bottom);
                            }
                            else{
                                setcolor(0);
                                rectangle(left,top,right,bottom);
                                top+=10;
                                bottom+=10;
                                setcolor(15);
                                rectangle(left,top,right,bottom);
                            }
                    }
                    else{
                        if (top == 110) {
                                    setcolor(15);
                                    rectangle(left,top,right,bottom);
                            }
                            else{
                                setcolor(0);
                                rectangle(left,top,right,bottom);
                                top-=10;
                                bottom-=10;
                                setcolor(15);
                                rectangle(left,top,right,bottom);
                                line(1,460,640,460);
                            }
        }
        }

        /*void rebote(Pelota pelota){
            if ((pelota.getX() >= left) && (pelota.getY()>=top)){
                int a = pelota.getA()+2;
                pelota.setA(a);
            }
        }*/

        int getRight(){
            return right;
        }

        int getLeft(){
            return left;
        }

        int getBottom(){
            return bottom;
        }

        int getTop(){
            return top;
        }

    private:
        int left, top, right,bottom;
};
