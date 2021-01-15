#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template <class T>
class ArystaPlusInstrument {
    Artysta a;
    T i;
public:
    ArystaPlusInstrument() {};
    ArystaPlusInstrument(const Artysta& ar, const T& tt) : a{r} , i{tt} {};
    usigned koncert() {
        return i.liczbaUczestnikow(a);
    }
};