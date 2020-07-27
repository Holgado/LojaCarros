#include "Carros.h"

bool Carro::getStatus()
{
    return status;
}

void Carro::setStatus(bool sts)
{
    this->status = sts;
}

void Carro::cadastrarCarro()
{
    int auxInt;
    float auxFloat;
    string auxStr;
    double auxDouble;
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite o ano do veiculo: ";
    cin >> auxInt;
    setAno(auxInt);
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite a motorização do veiculo: ";
    cin >> auxFloat;
    setMotor(auxFloat);
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite a placa do veiculo: ";
    cin >> auxStr;
    setPlaca(auxStr);
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite o modelo do veiculo: ";
    cin >> auxStr;
    setModelo(auxStr);
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite a cor do veiculo: ";
    cin >> auxStr;
    setCor(auxStr);
    system("cls");
    cout << "----------    CADASTRO DE VEICULOS    ----------" << endl;
    cout << "Digite o valor do veiculo: ";
    cin >> auxDouble;
    setPreco(auxDouble);
    system("cls");
    cout << "----------    CADASTRO FINALIZADO    ----------" << endl;
}

int Carro::getAno()
{
    return this->ano;
}

float Carro::getMotor()
{
    return this->motor;
}

double Carro::getPreco()
{
    return this->preco;
}

string Carro::getPlaca()
{
    return this->placa;
}

string Carro::getModelo()
{
    return this->modelo;
}

string Carro::getCor()
{
    return this->cor;
}

void Carro::setAno(int a)
{
    this->ano = a;
}

void Carro::setMotor(float m)
{
    this->motor = m;
}

void Carro::setPreco(double p)
{
    this->preco = p;
}

void Carro::setPlaca(string p)
{
    this->placa = p;
}

void Carro::setModelo(string m)
{
    this->modelo = m;
}

void Carro::setCor(string c)
{
    this->cor = c;
}
