#pragma once
#include <iostream>
#include <string>
#include "ListaCarros.h"
using namespace std;

class Vendedor {
public:
	int numVendas = 0;

	void cadastraVendedor();
	void fazerVenda(ListaCarros);
	void cacularComissao();
	// Geters
	int getNumVendas();
	int getId();
	float getComissao();
	float getSalario();
	string getNome();
private:
	int id;
	string nome;
	float salario;
	float comissao;
	// Seters
	void setId(int);
	void setNome(string);
	void setSalario(float);
	void setComissao(float);
};