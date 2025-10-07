
#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <point.hpp> 

class Polaire; 

class Cartesien : public Point {
    public:
        int x;
        int y;
        Cartesien(int x1, int y1) : x(x1), y(y1) {}
        void convertir(Polaire& p); 
                Cartesien(double newX = 0.0, double newY = 0.0)
            : x(newX), y(newY) {}
        double getX() const { return x; }
        double getY() const { return y; }

        void afficher (std::stringstream & stm) const{
            stm << "(x=" << x << ";y=" << y <<")";

        }
        Polaire convertirToPolaire();
        void setX(double a=0.0) { x = a;}
        void setY(double d=0.0) { y = d;}

};

#endif