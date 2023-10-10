#include <iostream>
#include <string>

class Circulo {
    public:
        Circulo (float _radio) : 
            radio(_radio) {}

        float getRadio() {
            return radio;
        }

        void setRadio(float _radio) {
            radio = _radio;
        }
    private:
        float radio;
};