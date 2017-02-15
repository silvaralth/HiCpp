//
//  figura2d.cpp
//  Sergio Ballen COD 1629770 - 2711
//
//  Created by Cocoa on 15/02/17.
//  Copyright © 2017 SergioBallen. All rights reserved.
//

#include "figura2d.hpp"

Figura2d::Figura2d () {};
Figura2d::~Figura2d () {};

string Figura2d::nombre(int lados){
    string var;
    switch (lados) {
        case 1:
            var = "Circulo";
            break;
        case 2:
            break;
        case 3:
            var = "Triangulo";
            break;
        case 4:
            var = "Cuadrado";
            break;
        default:
            var = "No es una figura en 2 dimensiones";
            break;
    }
    return var;
}
