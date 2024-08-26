#include <iostream>
#include <ctime>
using namespace std;

unsigned long long f(int n) {
    if (n < 2) return n;
    return f(n - 2) + f(n - 1);
}

int main() {
    int n;
    double t;
    
    // mudança de n
    n = 35;
    
    clock_t begin, end; 
    begin = clock(); 
    f(n);
    end = clock(); 
    
    t = double(end - begin) / CLOCKS_PER_SEC; 
    cout << "O n = " << n << " gastou " << t << " segundos" << endl;

    return 0;
}