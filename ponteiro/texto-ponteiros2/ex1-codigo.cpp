#include <iostream>
using namespace std;

int main (){
    int *intPtr;
    intPtr = new (nothrow) int();
    if(intPtr){ 
        *intPtr = 10;
        cout << *intPtr;
        delete intPtr; 
    }
    else cout << "Não há memória suficiente para alocação!";
    return 0;

}