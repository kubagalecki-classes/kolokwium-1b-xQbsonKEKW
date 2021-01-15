#pragma once

#include "zad1.hpp"

#include <cctype>

/using namespace std;
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

class PopGwiazda : public Artysta {
private:
    string pseudonim;
    unsigned sluchacze;
public:
    PopGwiazda() {};
    PopGwiazda(std::string& str, unsigned& P) {};
    ~PopGwiazda() {};

    void graj(std::ostream& a) const {
        a << "PopGwiazda" << ": " << this->sluchacze;
    }
};

class RapGwiazda : public Artysta {
private:
    string pseudonim;
    unsigned sluchacze;
public:
    RapGwiazda() {};
    RapGwiazda(std::string& str, unsigned& P) {};
    ~RapGwiazda() {};

    void graj(std::ostream& a) const {
        a << "RapGwiazda" << ": " << this->sluchacze;
    }
};

Artysta* stworzArtyste(std::string str) {
    if (str.front() = std::toupper(str.front()))
        return new PopGwiazda("BTS", 1234);
    else
        return new RapGwiazda("Ye", 4321);
};
