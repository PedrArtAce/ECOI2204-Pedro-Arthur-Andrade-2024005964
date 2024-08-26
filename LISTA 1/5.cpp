#include <iostream>
using namespace std;

int MDC(int a, int b){
    if (a == 0){
        return b;
    }
    else if (b == 0){
        return a;
    }
    else {
        return MDC(b, a % b);
    }
    
}