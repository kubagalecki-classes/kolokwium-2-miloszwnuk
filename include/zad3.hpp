#pragma once

#include "zad1.hpp"
#include <iostream>

using namespace std;

#include <functional>


// tutaj szablon gotujZupe


template<typename T>
unsigned gotujZupe(const Warzywo& w, const T& t)
{
    return t.gotuj(w) * t.gotuj(w);
}