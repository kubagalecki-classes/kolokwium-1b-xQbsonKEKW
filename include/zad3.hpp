#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
using namespace std;

template <class T>
class ArystaPlusInstrument {
    Artysta a;
    T i;
public:
    ArystaPlusInstrument() {};
    ArystaPlusInstrument(const Artysta& ar, const T& tt) : this->a(ar), this->i(tt) {};
    usigned koncert() {
        return this->i.liczbaUczestnikow(this->a);
    }
};