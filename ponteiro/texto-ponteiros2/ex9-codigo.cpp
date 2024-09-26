#include<iostream>
using namespace std;

const int MAX = 5;

struct Aluno{
    int matricula;
    char nome[40];
};

void leiaAlunos (Aluno *a) {
    cout << "Matricula: "; cin >> a->matricula; 
    cout << "Nome: "; cin.ignore(); cin.getline(a->nome, 40);
}

void imprimeAlunos (Aluno *a) {
    cout << "Matricula digitada: " << a->matricula << endl;
    cout << "Nome digitado: " << a->nome << endl;
}

int main(){
    Aluno *students = new (nothrow) Aluno[MAX];
    if (students){
        leiaAlunos(students);
        imprimeAlunos(students);
        delete [] students;
    }
    else cout << "Não há memória suficiente para alocação!";
    return 0;
}
