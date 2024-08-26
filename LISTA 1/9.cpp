#include<iostream>
using namespace std;

const int n = 10;

int somatório (int M[n][n]){
    int somatório = 0;
    for (int i = 0; i < n; i++){
        somatório += M[i][i];
    }
    return somatório;
}

int main (){
    int matriz[n][n];
    somatório(matriz);
}