#include<iostream>
using namespace std;

const int MAX = 5;

struct Aluno{
    int matricula;
    char nome[40];
};

void leiaAluno (Aluno *a) {
    cout << "Matricula: "; cin >> a->matricula; 
    cout << "Nome: "; cin.ignore(); cin.getline(a->nome, 40);
}

void imprimeAluno (Aluno a) {
    cout << endl << "Matricula digitada: " << a.matricula << endl;
    cout << "Nome digitado: " << a.nome << endl << endl;
}

int main(){
    Aluno *students = new (nothrow) Aluno[MAX];
    if(students){
        for (int i = 0; i < MAX; i++){
            leiaAluno(&students[i]);
        }    
        for (int i = 0; i < MAX; i++){
            imprimeAluno(students[i]);
        }
        delete [] students;
    }
    else
    cout << "Não há memória suficiente para alocação!";
    return 0;
}
