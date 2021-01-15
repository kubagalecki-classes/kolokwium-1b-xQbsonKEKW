#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template<typename T>
unsigned liczPopularnych(T t1, T t2){
    return std::count_if(t1, t2, [](const Artysta& ar){return ar.getSluchacze() > 1000;});
}