#include <iostream>
#include <string>
using namespace std;

class Humano {
    public:
        Humano (string _nombre, string _apellido, int _edad) :
            nombre(_nombre), 
            apellido(_apellido), 
            edad(_edad) {}
            
        string getNombre() {
            return nombre;
        }
        string getApellido() {
            return apellido;
        }
        int getEdad() {
            return edad;
        }

        void setNombre(string _nombre) {
            nombre = _nombre;
        }
        void setApellido(string _apellido) {
            apellido = _apellido;
        }
        void setEdad(int _edad) {
            edad = _edad;
        }

    private:
        string nombre;
        string apellido;
        int edad;
};