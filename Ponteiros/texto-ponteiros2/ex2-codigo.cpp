#include <iostream>
using namespace std;

int main(){
    int *vetorPtr, i, n;
    cout << "Entre com a quantidade de elementos do vetor: ";
    cin >> n;
    vetorPtr = new (nothrow) int[n];
    if(vetorPtr){
        for(i=0; i<n; i++) 
        vetorPtr[i] = 10*(i+1);
        cout << "\n";
    for(i=0; i<n; i++) 
        cout << vetorPtr[i] << " ";
        delete [] vetorPtr; 
    }
    else cout << "\nNão há memória suficiente para alocação!";
    return 0;
}