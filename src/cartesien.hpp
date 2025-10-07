#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP
#include <point.hpp>

class Polaire;

class Cartesien : public Point {
    public:
        double x;    // en degrés
        double y; // distance radiale
        Cartesien(double newX = 0.0, double newY = 0.0)
            : x(newX), y(newY) {}
        double getX() const { return x; }
        double getY() const { return y; }

        void afficher (std::stringstream & stm) const{
            stm << "(x=" << x << ";y=" << y <<")";

        }

        void setX(double a=0.0) { x = a;}
        void setY(double d=0.0) { y = d;}
        
        void convertir(Polaire& p){
            p.angle = atan2(y,x) * 180 / M_PI;
            p.distance = hypot(x,y);
        }
};

#endif