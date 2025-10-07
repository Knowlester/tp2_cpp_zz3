
#include <cartesien.hpp> 
#include <polaire.hpp>
#include <cmath>         

#define _USE_MATH_DEFINES 

void Cartesien::convertir(Polaire& p){
    p.angle = atan2(y, x) * 180 / M_PI;
    p.distance = hypot(x, y);
}

Polaire Cartesien::convertirToPolaire() {
    double newAngle = atan2(y, x) * 180.0 / M_PI;
    double newDistance = hypot(x, y);
    return Polaire(newAngle, newDistance); 
}