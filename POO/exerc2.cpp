#include <iostream>
#include <cstring>
using namespace std;

class Carro
{
private:
    int parado;         
    int ligado;         
    char *fabricante;
    char *modelo;
    char *motor;

public:
    Carro(int _parado, int _ligado, char *_fabricante, char *_modelo, char _motor[])
    {
        parado = _parado;
        ligado = _ligado;
        strcpy(fabricante, _fabricante);
        strcpy(modelo, _modelo);
        strcpy(motor, _motor);
    }

    Carro()
    {
        ligado = 0;
        parado = 1; 
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
}; 

int main(){
    char *modelo = "GTI", *fabricante = "Volks";
    Carro *gol = new (nothrow) Carro(1, 0, fabricante, modelo, "1.8");
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