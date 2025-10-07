/*
#include "nuage.hpp"       // Nécessaire pour connaître la structure de Cartesien
#include <numeric>             // Non utilisé ici, mais utile pour des sommes plus complexes

// 💡 Spécialisation explicite du template pour le type Cartesien
template <>
class CentreDeGravite<Cartesien> {
public:
    static Cartesien calculer(const Nuage<Cartesien>& nuage) {
        if (nuage.size() == 0) {
            return Cartesien(0.0, 0.0);
        }

        double sum_x = 0.0;
        double sum_y = 0.0;
        double count = 0.0;

        // Utilisation de l'itérateur fourni par Nuage
        for (const Cartesien& p : nuage) {
            sum_x += p.getX();
            sum_y += p.getY();
            count += 1.0;
        }
        
        // Retourne la moyenne
        return Cartesien(sum_x / count, sum_y / count);
    }
};

// NOTE: Vous devez faire une spécialisation similaire pour Polaire si vous voulez
// calculer son centre de gravité, par exemple en la convertissant temporairement en Cartesien.

*/