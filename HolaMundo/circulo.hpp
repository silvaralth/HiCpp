//
//  circulo.hpp
//  Sergio Ballen COD 1629770 - 2711
//
//  Created by Cocoa on 15/02/17.
//  Copyright © 2017 SergioBallen. All rights reserved.
//

#ifndef circulo_hpp
#define circulo_hpp

#include <stdio.h>
#include <iostream>
#include "figura2d.hpp"

using namespace std;

class Circulo : public Figura2d {
    
private:
    //
    
public:
    Circulo(int lados);
    ~Circulo();
    
    int radio;
    int diametro (int n);
    int calcularArea (int n);
    
    using Figura2d::area;
};

#endif /* circulo_hpp */
