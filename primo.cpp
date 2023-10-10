#include <iostream>
using namespace std;

bool Verifprimo(int a) {
    for(int i{2};i < a; i++) {
        if(a%i == 0) return 0;
    }
    return 1;
}

void primos(int b){
    for(int i{2}; i <= b; i++) {
        if(Verifprimo(i)) cout << i << " ";
    }
    cout << endl;
}

int main() {
    primos(6);

//Solo para verificar e imprimir si es primo o no
    int num = 6;
    int res = Verifprimo(num);
    if(res == 1)
        cout << num << " es primo" << endl;
    else;
        cout << num << " no es primo" << endl;
}