#include <iostream>
#include "humano.h"
using namespace std;

int main() {
    Humano hum1{"Neymi", "Valencia", 18};

    cout << hum1.getNombre() << " " << hum1.getApellido() << " " 
            << hum1.getEdad() << endl;

    hum1.setNombre("Arlyz");
    hum1.setApellido("Flores");
    hum1.setEdad(19);

    cout << hum1.getNombre() << " " << hum1.getApellido() << " " 
            << hum1.getEdad() << endl;

}