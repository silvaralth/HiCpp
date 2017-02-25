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

bool validacionSigno (string);
bool validacionNumerica (string,int);

int main(int argc, const char * argv[]) {

    cout << "Hola hola ;) \n";
    string valor;
    
    do {
        cout << "Dame un numero, que yo soy todo un adivino ... ";
        getline(cin, valor);
        
        if (validacionSigno(valor) == true){
            if (valor [0] == '+') {
                double size = valor.length();
                string newValor = valor.substr (1, size);
                cout << "El número que me diste fue: " << newValor << " :P \nChao chao.\n" << endl;
            } else {
                cout << "El número que me diste fue: " << valor << " :P \nChao chao.\n" << endl;
            }
        } else {
            cout << "\nNo me diste ningun numero :( " << endl;
        }
    } while (validacionSigno(valor) == false);

    return 0;
}

bool validacionSigno (string var){
    bool resultado = false;
    char signo = var[0];
    
    if ( signo == '-' || signo == '+'){
        resultado = validacionNumerica(var, 1);
    } else {
        resultado = validacionNumerica(var, 0);
    }
    return resultado;
}

bool validacionNumerica (string var, int posicion){
    bool resultado = false;
    double size = var.length();
    
    for (int i = posicion; i < size ; i++) {
        if ( isdigit(var[i]) && size >= 1 ){
            resultado = true;
        } else {
            resultado = false;
            break;
        }
    }
    return resultado;
}
