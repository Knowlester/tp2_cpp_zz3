#ifndef POLAIRE_HPP
#define POLAIRE_HPP
#include <point.hpp>

class Cartesien;

class Polaire : public Point{
    public:
        double angle;    // en degrés
        double distance; // distance radiale
        Polaire(double a = 0.0, double d = 0.0)
            : angle(a), distance(d) {}
        double getAngle() const { return angle; }
        double getDistance() const { return distance; }

        void afficher (std::stringstream & stm) const{
            stm << "(a=" << angle << ";d=" << distance <<")";
        }

        void setAngle(double a=0.0) { angle = a;}
        void setDistance(double d=0.0) { distance = d;}

        void convertir(Cartesien& c){
            c.x = distance * cos(angle * M_PI /180);
            c.y = distance * sin(angle * M_PI /180);
        }
};

#endif