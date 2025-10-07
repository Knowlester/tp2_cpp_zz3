// Polaire.hpp

#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#define _USE_MATH_DEFINES // Si nécessaire pour M_PI
#include <cmath>         // Pour cos, sin, M_PI

#include <point.hpp>     // Nécessaire pour l'héritage
class Cartesien;         // Déclaration anticipée : suffisant pour la référence Cartesien&

class Polaire : public Point{
    public:
        int angle;    // en degrés
        int distance; // distance radiale
        Polaire(int x1, int y1) : angle(x1), distance(y1) {}

        Polaire(double a = 0.0, double d = 0.0)
            : angle(a), distance(d) {}
        double getAngle() const { return angle; }
        double getDistance() const { return distance; }

        void afficher (std::stringstream & stm) const{
            stm << "(a=" << angle << ";d=" << distance <<")";
        }

        void setAngle(double a=0.0) { angle = a;}
        void setDistance(double d=0.0) { distance = d;}

        Cartesien convertirToCartesien();

        // Déclaration de la méthode, PAS la définition
        void convertir(Cartesien& c);
};

#endif