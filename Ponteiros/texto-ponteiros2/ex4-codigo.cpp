#include<iostream>
using namespace std;

struct Aluno{
    int matricula;
    char nome[40];
};

int main (){
    Aluno *a = new (nothrow) Aluno();
    if (a){
        cout << "Matricula: ";
        cin >> a->matricula;
        cout << "Nome: ";
        cin.ignore();
        cin.getline(a->nome, 40);
        cout << "\nMatricula digitada: " << a->matricula << endl;
        cout << "Nome digitado: " << a->nome << endl;
        delete a;
    }
    else cout << "\nNão há memória suficiente para alocação!";
    return 0;

}