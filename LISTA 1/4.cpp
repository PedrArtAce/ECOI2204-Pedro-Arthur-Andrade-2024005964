#include <iostream>
using namespace std;


int ElevaNumero(int n, int x){
    if (n == 0){
        return 1;
    }
    else{
        return x * ElevaNumero(x, n - 1);
    }
}