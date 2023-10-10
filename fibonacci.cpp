#include <iostream>
using namespace std;

int fiboRec(int num) {
    if (num <= 1) {
        return 1;
    }
    return fiboRec(num-1) + fiboRec(num-2);
}

int fiboIter(int num) {
    int n0 = 1;
    int n1 = 1;
    for(int i{0}; i < num-1; i++) {
        int temp = n0 + n1;
        n0 = n1;
        n1 = temp;
    }
    return n1;
}

int main () {
    cout << fiboRec(5) << endl;
    cout << fiboIter(5) << endl;
}