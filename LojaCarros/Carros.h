#pragma once
#include <iostream>
#include <string>

using namespace std;

class Carro {
public:
	// atributos publicos
	bool status;					// à venda = 0
	// metodos publicos
	bool getStatus();
	void setStatus(bool);
	// Geters
	int getAno();
	float getMotor();
	double getPreco();
	string getPlaca();
	string getModelo();
	string getCor();
	void cadastrarCarro();
private:
	int ano;
	float motor;					//1.0 1.4 2.0 // Para moto cilindrada
	double preco;
	string placa;
	string modelo;
	string cor;
	// Seters
	void setAno(int);
	void setMotor(float);
	void setPreco(double);
	void setPlaca(string);
	void setModelo(string);
	void setCor(string);
};