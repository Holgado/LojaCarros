#pragma once
#include <iostream>
#include <string>
#include "Vendedor.h"
#include "ListaVendedor.h"

using namespace std;

class Interface {
public:	
	int opcao;
	int auxInt;
	string auxStr;
	int getOpcao();
	int loginVendedor(ListaVendedor);
	void setOpcao(int);
	void imprimeMenu();
	void mostrarEstoque(ListaCarros);
};