#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template<typename T>
class ArtystaPlusInstrument{
private:
    Artysta a;
    T i;
public:
    ArtystaPlusInstrument(const Artysta& _a, const T& _i){
      a = _a;
      i = _i; 
    }
    unsigned koncert(){
      return i.liczbaUczestnikow(a);
      }
}