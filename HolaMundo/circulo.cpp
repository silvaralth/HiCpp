//
//  circulo.cpp
//  Sergio Ballen COD 1629770 - 2711
//
//  Created by Cocoa on 15/02/17.
//  Copyright © 2017 SergioBallen. All rights reserved.
//

#include "circulo.hpp"

Circulo::Circulo (int n) {};
Circulo::~Circulo () {};

const float miPi = 3.1416;

int Circulo::diametro(int n){
    int var;
    var = n * 2;
    return var;
};

int Circulo::calcularArea(int n){
    int var;
    var = miPi * (n * n);
    return var;
};
