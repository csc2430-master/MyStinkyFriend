//
// Created by Carlos R. Arias on 2/15/23.
//

#include "rugrat.h"

#include <iostream>
using std::cout;
using std::endl;

Rugrat::Rugrat(int n) {
    _n = n;
    cout << "Constructor Rugrat " << _n << endl;
}

Rugrat::~Rugrat() {
    cout << "Destructor Rugrat " << _n << endl;
}

Rugrat::Rugrat(const Rugrat &r) {
    _n = 100 + r._n;
    cout << "Copy Constructor " << _n << endl;
}
