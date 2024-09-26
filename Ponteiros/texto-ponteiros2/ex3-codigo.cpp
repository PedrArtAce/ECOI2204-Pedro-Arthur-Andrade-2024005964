#include<iostream>
#include<cstring> 
using namespace std;


int main(){
    char *stringPtr, str[40];
    cout << "Seu nome completo:";
    cin.getline(str, 40);
    stringPtr = new (nothrow) char[strlen(str)+1];

    if(stringPtr){
        int tam = strlen(str);
        for(int i=0; i<tam; i++){
            stringPtr[i] = toupper(str[i]);
            
        }
        stringPtr[tam] = '\0';
        cout << "Nome completo: " << stringPtr;
        delete [] stringPtr;
    }
    else cout << "\nNão há memória suficiente para alocação!";
    return 0;   
}