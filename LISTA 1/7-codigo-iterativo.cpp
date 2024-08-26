#include <iostream>
#include <ctime>
using namespace std;

unsigned long long f(int n) {
    unsigned long long Num1 = 1, Num2 = 1, ProximoNumero = 1;

    if (n == 0 || n == 1) {
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        ProximoNumero = Num1 + Num2;
        Num1 = Num2;
        Num2 = ProximoNumero;
    }
    
    return Num1;
}

int main() {
    int n;
    double t;
    
    // mudança de n
    n = 6000000;
    
    clock_t begin, end; 
    begin = clock(); 
    f(n);
    end = clock(); 
    
    t = static_cast<double>(end - begin) / CLOCKS_PER_SEC; 
    cout << "O f(" << n << ")" << " = " << f(n) << " gastou " << t << " segundos" << endl;

    return 0;
}