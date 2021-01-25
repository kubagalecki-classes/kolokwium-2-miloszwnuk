#pragma once

#include "catch.hpp"
#include "chrup.hpp"
#include <iostream>

using namespace std;

// tutaj klasy Ogorek, Zielony i Kiszony



class Ogorek
{

public:
    Ogorek() {}
    virtual string chrup() {}
};

class Zielony : public Ogorek
{
public:
    string chrup() override 
    { 
        return chrupZielony(); //
    }
};

class Kiszony : public Ogorek
{

public:
    string chrup() override
    {
        return chrupKiszony(); // 
    }
};

string jedzOgorek(Ogorek*)
{
    if (dynamic_cast<Ogorek*>  == Zielony) //
    {
        cout << "Zielony: " << chrupZielony << endl;
    }

    if (dynamic_cast<Ogorek*> == Kiszony)
    {
        cout << "Kiszony: " << chrupKioszny << endl;
    }
}
