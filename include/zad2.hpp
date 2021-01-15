#pragma once

#include "zad1.hpp"

#include <cctype>

using namespace std;
// tutaj klasa Artysta


class PopGwiazda : public Artysta
{
public:
    PopGwiazda() {};
    PopGwiazda(const std::string& a, unsigned b) : Artysta(a,b) {  };
    void graj(std::ostream& a) const override
    {
        a << "PopGwiazda: " << getPseudonim();
    }
};

class RapGwiazda : public Artysta
{
public:
    RapGwiazda() {};
    RapGwiazda(const std::string& a, unsigned b) : Artysta(a,b) {};

    void graj(std::ostream& a) const override
    {
        a << "RapGwiazda: " << getPseudonim();
    }
};

Artysta* stworzArtyste(const std::string& str) {
    if (str.front() == std::toupper(str.front())) 
        return new PopGwiazda("BTS", 1234);
    else
        return new RapGwiazda("Ye", 4321);
}