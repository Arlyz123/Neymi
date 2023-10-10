#include <iostream>
using namespace std;

void intercambio(int &a, int &b) {
    int temp =a;
    a = b;
    b = temp;
}

int main () {
    int x{30}, y {15};
    cout << x << " " << y << endl;
    intercambio(x, y);
    cout << x << " " << y << endl;
}