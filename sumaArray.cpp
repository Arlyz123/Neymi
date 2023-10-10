#include <iostream>
using namespace std;

int sumar(int arr[], int tam) {
    int suma{0};
    for(int i{0}; i < tam; suma += arr[i++]);
    return suma;
}

int main() {
    int arr[] = {2,1,4,3};
    cout << "suma: " << sumar(arr, 4) << endl;
}

