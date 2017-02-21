//
//  main.cpp
//  HolaMundo
//
//  Created by Cocoa on 14/02/17.
//  Copyright © 2017 SergioBallen COD: 1629770 - 2711
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool validame (string);

int main(int argc, const char * argv[]) {

    cout << "Hola hola ;) \n";
    string valor;
    
    do {
        cout << "Dame un numero, que yo soy todo un adivino ... ";
        getline(cin, valor);
        
        if (validame(valor) == true){
            cout << "el numero es " << valor << endl;
        } else {
            cout << "\nno ingresaste un numero... ¬¬" << endl;
        }
    } while (validame(valor) == false);

    return 0;
}

bool validame (string var){
    bool resultado = false;
    double size = var.length();

    for (int i = 0; i < size ; i++) {
        if ( isdigit(var[i]) && size >= 1 ){
            resultado = true;
        } else {
            resultado = false;
            break;
        }
    }
    return resultado;
}
