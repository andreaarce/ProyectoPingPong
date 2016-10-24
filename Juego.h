class Juego
{
    public:


        Juego() {
            initwindow(640, 480);
            line(320,1,320,20);
            line(320,60,320,100);
            line(320,140,320,180);
            line(320,220,320,260);
            line(320,300,320,340);
            line(320,380,320,420);
            line(320,460,320,480);
        }

        virtual ~Juego() {
            closegraph();
        }

};
