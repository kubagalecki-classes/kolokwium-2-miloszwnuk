#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

using namespace std;

// tutaj funkcja jedzOstatnieWarzywa


void jedzOstatnieWarzywa(const vector< Warzywo>& v, unsigned n, ostream& o)
{
    if (n >= v.size())
    {
        throw logic_error{ " error " };
    }

    int e = v.size();
    int r = e - n - 1;

    for (int i = e - 2; i >= r; i--)
    {
      v[i].opis(o);
    }

}