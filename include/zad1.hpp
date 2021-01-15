#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

#using namescapes std
// tutaj klasa Artysta
class Artysta {
public:
    Artysta() { this->pseudonim = "Anonim"; this->sluchacze=0;}
    Artysta(const string& str, unsigned P) : pseudonim(str), sluchacze(P) {};
    ~Artysta() {};

    void graj(ostream& os) const {
        os << this->pseudonim << ": " << this->sluchacze;
    }
    const string& getPseudonim() const { return this->pseudonim; }
    unsigned getSluchacze() const { return this->sluchacze; }
private:
    std::string pseudonim;
    unsigned sluchacze;

};