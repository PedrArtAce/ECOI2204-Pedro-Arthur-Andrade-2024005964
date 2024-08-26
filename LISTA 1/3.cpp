#include <iostream>
using namespace std;

void EscreveNumeros(int n){
    if (n == 101){
        return;
    }
    cout << n << " ";
    EscreveNumeros(n + 1);
}