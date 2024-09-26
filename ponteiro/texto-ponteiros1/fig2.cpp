#include <iostream>
using namespace std; 

int main(){
    float x;
    float *xPtr;
    x = 10.0;
    xPtr = &x;

    cout << "x = " << x << "\n";
    cout << "Endereço de x = " << &x << "\n";
    cout << "O valor de xPtr = " << xPtr << " que é o endereço de x \n";
    cout << "O valor apontado por xPtr = " << *xPtr << " que é o valor de x \n";
    cout << "O endereço de xPtr = " << &xPtr << "\n"; 
    return 0;
}
