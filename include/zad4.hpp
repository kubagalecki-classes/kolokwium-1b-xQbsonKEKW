#include "zad1.hpp"

#include <exception>
#include <vector>

// tutaj funkcja stworzZespol
std::vector<Artysta> stworzZespol(int a, const std::string& str)
{
    std::vector<Artysta> vec;
    if (str.size() != a)
        throw std::logic_error("error");
    
    for(int i = 1; i < a+1; i++)
        vec.push_back(Artysta{str, i});
    
    return vec;
}