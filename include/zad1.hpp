#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>
#include <iostream>

// tutaj klasa Warzywo

using namespace std;


class Warzywo
{
    string nazwa;
    double cena_za_kg;
    int kolor_warzywa;
    inline static unsigned liczba_warzyw;

public:
    
    Warzywo(const string& a, double b, int c) : nazwa{ a }, cena_za_kg{ b },  kolor_warzywa{ c } 
    {
         inline liczba_warzyw = liczba_warzyw + 1;
    }

    ~Warzywo() {  inline liczba_warzyw =  liczba_warzyw - 1; }

    unsigned getVeg() { return liczba_warzyw; }

    void opis(ostream& d) const
    {
        cout << nazwa << ": " << cena_za_kg << ", " << kolor_warzywa << endl;
    }

};
