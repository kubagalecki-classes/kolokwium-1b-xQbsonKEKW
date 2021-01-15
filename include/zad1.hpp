#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;
// tutaj klasa Artysta
class Artysta
{
private:
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