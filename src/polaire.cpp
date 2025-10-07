// Polaire.cpp

#include <polaire.hpp>  
#include <cartesien.hpp> 

#include <cmath>     

void Polaire::convertir(Cartesien& c){
    c.x = distance * cos(angle * M_PI / 180.0);
    c.y = distance * sin(angle * M_PI / 180.0);
}

Cartesien Polaire::convertirToCartesien() {
        double newX = distance * cos(angle * M_PI / 180.0);
        double newY = distance * sin(angle * M_PI / 180.0);
        return Cartesien(newX, newY); // Nécessite l'inclusion de cartesien.hpp
}