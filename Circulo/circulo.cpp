#include <iostream>
#include "circulo.h"
using namespace std;

int main() {
    Circulo circ1{2.5};

    cout << "Radio: " << circ1.getRadio() << endl;
    
    circ1.setRadio(5.5);
    cout << "Nuevo radio; " << circ1.getRadio() << endl;

}


