#include <iostream>
using namespace std; 

void troca (int *aPtr, int *bPtr){
    int aux = *aPtr;
    *aPtr = *bPtr;
    *bPtr = aux;
}


int main (){
    int a=1, b=2;
    troca (&a, &b);
    cout << a << " - " << b;
    return 0;
}