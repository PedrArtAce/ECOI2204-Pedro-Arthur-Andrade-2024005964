#include <iostream>
#include <cstring>
using namespace std;

class Livro {
private:
    char *titulo;
    char *autor;
    int anoPublicacao;

public:
    Livro() {
        titulo = new char[1];
        autor = new char[1];
        strcpy(titulo, "");
        strcpy(autor, "");
        anoPublicacao = 0;
    }

    Livro(const char *_titulo, const char *_autor, int _anoPublicacao) {
        titulo = new char[strlen(_titulo) + 1];
        autor = new char[strlen(_autor) + 1];
        strcpy(titulo, _titulo);
        strcpy(autor, _autor);
        anoPublicacao = _anoPublicacao;
    }

    // Destrutor
    ~Livro() {
        delete[] titulo;
        delete[] autor;
    }

    // Métodos setter
    void setTitulo(const char *_titulo) {
        delete[] titulo;  // Libera a memória antiga
        titulo = new char[strlen(_titulo) + 1];
        strcpy(titulo, _titulo);
    }

    void setAutor(const char *_autor) {
        delete[] autor;  // Libera a memória antiga
        autor = new char[strlen(_autor) + 1];
        strcpy(autor, _autor);
    }

    void setAnoPublicacao(int _anoPublicacao) {
        anoPublicacao = _anoPublicacao;
    }

    char* getTitulo() {
        return titulo;
    }

    char* getAutor() {
        return autor;
    }

    int getAnoPublicacao() {
        return anoPublicacao;
    }
};

int main() {
    // Alocação de memória para os atributos
    char* Titulodeexemplo = new (nothrow) char[40];
    char* Autordeexemplo = new (nothrow) char[40];
    int Anoexemplo = 1990;
    strcpy(Titulodeexemplo, "a coisa");
    strcpy(Autordeexemplo, "stephen king");

    // Criação de objetos Livro
    Livro *Exemplo1 = new (nothrow) Livro();
    Livro *Exemplo2 = new (nothrow) Livro(Titulodeexemplo, Autordeexemplo, Anoexemplo);

    //Livro 1
    cout << "Livro 1: \n";
    cout << "Titulo: " << Exemplo2->getTitulo() << endl;
    cout << "Autor: " << Exemplo2->getAutor() << endl;
    cout << "Ano: " << Exemplo2->getAnoPublicacao() << endl;

    // Mudança para Livro 2
    strcpy(Titulodeexemplo, "Deuses americanos");
    strcpy(Autordeexemplo, "Neil Gaiman");
    Anoexemplo = 2016;

    Exemplo2->setTitulo(Titulodeexemplo);
    Exemplo2->setAutor(Autordeexemplo);
    Exemplo2->setAnoPublicacao(Anoexemplo);

    //Livro 2
    cout << endl << endl <<"Livro 2: \n";
    cout << "Titulo: " << Exemplo2->getTitulo() << endl;
    cout << "Autor: " << Exemplo2->getAutor() << endl;
    cout << "Ano: " << Exemplo2->getAnoPublicacao() << endl;

    
    delete[] Titulodeexemplo;
    delete[] Autordeexemplo;
    delete Exemplo1;
    delete Exemplo2;

    return 0;
}
