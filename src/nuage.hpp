#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <vector>
#include <iterator>

template <typename T>
class Nuage {
private:
    std::vector<T> points; 

public:
    using iterator = typename std::vector<T>::iterator;
    using const_iterator = typename std::vector<T>::const_iterator;
    using size_type = typename std::vector<T>::size_type;


    void ajouter(const T& p) {
        points.push_back(p);
    }
    iterator begin() {
        return points.begin();
    }
    const_iterator begin() const {
        return points.begin();
    }
    iterator end() {
        return points.end();
    }
    const_iterator end() const {
        return points.end();
    }
    size_type size() const {
        return points.size();
    }
    T barycentre_v1(const Nuage<T>& nuage) {};
};

#endif