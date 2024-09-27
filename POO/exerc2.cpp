#include <iostream>
#include <cstring>
using namespace std;

class Carro
{
private:
    int parado;         // 1 – parado, 0 – em movimento
    int ligado;         // 1 – ligado, 0 – desligado
    char fabricante[20];
    char modelo[20];
    char motor[4];

public:
    // Construtor com parâmetros
    Carro(int _parado, int _ligado, char _fabricante[], char _modelo[], char _motor[])
    {
        parado = _parado;
        ligado = _ligado;
        strcpy(fabricante, _fabricante);
        strcpy(modelo, _modelo);
        strcpy(motor, _motor);
    }

    // Construtor padrão
    Carro()
    {
        ligado = 0; // começa desligado
        parado = 1; // começa parado
        strcpy(fabricante, "");
        strcpy(modelo, "");
        strcpy(motor, "");
    }

    void ligar()
    {
        ligado = 1;
    }

    void desligar()
    {
        ligado = 0;
    }

    void andar()
    {
        parado = 0;
    }

    void parar()
    {
        parado = 1;
    }
}; // fim da classe

int main()
{
    // Exemplo da criação de objetos do tipo Carro:
    Carro *gol = new (nothrow) Carro(1, 0, "Volks", "GTI", "1.8");
    if (gol)
    {
        gol->ligar();
        gol->andar();
        gol->parar();
        gol->desligar();
        delete gol;
    }
    else
        cout << "Não foi possível alocar memória!";
    
    return 0;
}