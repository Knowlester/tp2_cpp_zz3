#include <nuage.hpp>

template <typename T>
T barycentre_v1(const Nuage<T>& nuage) {
    if (nuage.size() == 0) {
        // Retourne le point par défaut (nécessite un constructeur par défaut)
        return T(); 
    }

    double sum_x = 0.0;
    double sum_y = 0.0;
    
    // 1. Conversion et Somme
    // L'itération est générique sur T, mais le calcul utilise Cartesien
    for (const T& point_t : nuage) {
        // On suppose que tous les types T ont une méthode convertirToCartesien() const
        Cartesien c = point_t.convertirToCartesien(); 
        sum_x += c.getX();
        sum_y += c.getY();
    }
    
    // 2. Calcul du Barycentre Cartésien
    double avg_x = sum_x / nuage.size();
    double avg_y = sum_y / nuage.size();
    
    Cartesien cg_cartesien(avg_x, avg_y);
    
    // 3. Conversion du Barycentre final dans le type d'origine T
    // On utilise une structure de conversion spécialisée si T n'est pas Cartesien
    if constexpr (std::is_same_v<T, Cartesien>) {
        return cg_cartesien; // Si T est Cartesien, on le retourne directement
    } else if constexpr (std::is_same_v<T, Polaire>) {
        return cg_cartesien.convertirToPolaire(); // Si T est Polaire, on convertit
    } else {
        // En cas de type non pris en charge
        throw std::runtime_error("Type de point non supporté pour barycentre_v1.");
    }
}