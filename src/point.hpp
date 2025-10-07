

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <sstream>
#include <cmath>

class Point {
        
    public:
        virtual void afficher (std::stringstream &) const {};

    };

inline std::stringstream& operator<<(std::stringstream& ss, const Point& p){
    p.afficher(ss);
    return ss;
}

#endif