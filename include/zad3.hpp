#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template<typename T>
class ArtystaPlusInstrument{
private:
    Artysta a;
    T i;
public:
    ArtystaPlusInstrument(const Artysta& aa, const T& ii) : a(aa), i(ii) {}
    unsigned koncert(){
      return i.liczbaUczestnikow(a);
      }
}