#include <iostream>
using namespace std; 

int main (){
    int v[] = {10, 20, 30, 40, 50};
    int *vPtr = &v[0];
    cout << "O valor de vPtr é o mesmo que v[0] = " << *vPtr << "\n";
    vPtr++;
    cout << "O valor de vPtr + 1 é igual v[1] = " << *vPtr << "\n";
    vPtr += 2;
    cout << "O valor de vPtr + 3 é igual a v[3] = " << *vPtr << "\n";
    vPtr--;
    cout << "O valor de vPtr, agora decrescido de 1 é igual a v[2] = " << *vPtr << "\n";
    int *v2Ptr = &v[3];
    int q;
    q = v2Ptr - vPtr;
    cout << "Subtração entre dois ponteiros: v2Ptr - vPtr = " << q;
    return 0;
}