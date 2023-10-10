#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void invertirIter(int arr[], int tam){
    for(int i{0}; i < tam/2; i++)
    intercambio(arr[i], arr[tam-i-1]);
}

void imprimir(int arr[], int tam) {
    for(int i{0}; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertirRec(int arr[], int fin, int  ini= 0) {
    if (ini <= fin) {
        return;
    }
    intercambio(arr[ini], arr[fin-1]);
    invertirRec(arr, fin-1, ini++);

}

int main() {
    int n = 7;
    int arr[] = {1,5,3,2,6,8,9};

    imprimir(arr, n);
    invertirIter(arr, n);
    imprimir(arr, n);
    invertirRec(arr, n);
    imprimir(arr, n);
}