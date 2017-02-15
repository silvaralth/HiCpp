//
//  main.cpp
//  HolaMundo
//
//  Created by Cocoa on 14/02/17.
//  Copyright © 2017 SergioBallen. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

void validame (stringstream var){
    
    //stringstream ss;
    //ss.str("var");
    
    string s;
    int i;
    double d;
    
    // Extrae, convierte a los tipos apropiados y asigna, todo en una sola línea:
    var >> s >> i >> d;
}

int main(int argc, const char * argv[]) {
    //
    cout << "Hola hola ;) \n";
    
    stringstream valor;
    cout << "Dame un numero, que yo soy todo un adivino ... ";
    //cin >> valor;
    
    //validame(valor);
    
    /*
    stringstream sstm;
    sstm << "El numero que me diste fue: " << valor << "  :P";
    string result = sstm.str();
    */
    //cout << "El numero que me diste fue: " << valor << "  :P \n";
    
    
    
    return 0;
}
