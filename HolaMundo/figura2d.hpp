//
//  figura2d.hpp
//  Sergio Ballen COD 1629770 - 2711
//
//  Created by Cocoa on 15/02/17.
//  Copyright © 2017 SergioBallen. All rights reserved.
//

#ifndef figura2d_hpp
#define figura2d_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Figura2d{

private:
    //
    
public:
    
    Figura2d();
    ~Figura2d();
    
    int area;
    int perimetro;
    string nombre(int lados) ;
    
};

#endif /* figura2d_hpp */
