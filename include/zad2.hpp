#pragma once

#include "zad1.hpp"
#include string

#include <cctype>

using namespace std;
// tutaj klasa Artysta
class Artysta
{
    string pseudonim;
    unsigned sluchacze;
public:
    Artysta() { this->pseudonim = "Anonim"; this->sluchacze = 0; }
    Artysta(const std::string& a, unsigned b) : pseudonim(a), sluchacze(b) {}
    ~Artysta() {};
    virtual void graj(std::ostream& a) const {
        a << this->pseudonim << ": " << this->sluchacze;
    }
    const std::string& getPseudonim() const
    {
        return this->pseudonim;
    }
    unsigned getSluchacze() const
    {
        return this->sluchacze;
    }
};

class PopGwiazda : public Artysta
{
    string pseudonim;
    unsigned sluchacze;
public:
    PopGwiazda() {};
    PopGwiazda(const std::string& a, unsigned b) : pseudonim(a), sluchacze(b) {  };
    void graj(std::ostream& a) const
    {
        a << "PopGwiazda: " << this->pseudonim;
    }
};

class RapGwiazda : public Artysta
{
    string pseudonim;
    unsigned sluchacze;
public:
    RapGwiazda() {};
    RapGwiazda(const std::string& a, unsigned b) : pseudonim(a), sluchacze(b) {};

    void graj(std::ostream& a) const
    {
        a << "RapGwiazda: " << this->pseudonim;
    }
};

Artysta* stworzArtyste(const std::string& str) {
    if (str.front() == std::toupper(str.front())) 
        return new PopGwiazda("BTS", 1234);
    else
        return new RapGwiazda("Ye", 4321);
}
