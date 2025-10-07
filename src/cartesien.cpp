
#include <cartesien.hpp> 
#include <polaire.hpp>
#include <cmath>         

#define _USE_MATH_DEFINES 

void Cartesien::convertir(Polaire& p){
    p.angle = atan2(y, x) * 180 / M_PI;
    p.distance = hypot(x, y);
}

