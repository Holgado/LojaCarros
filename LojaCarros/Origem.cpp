#include <iostream>

#include "Carros.h"
#include "ListaCarros.h"
#include "Vendedor.h"
#include "ListaVendedor.h"
#include "Interface.h"

using namespace std;

int main() {

	//vector<Carro> vetCarros;  // Lista de carro, estoque
	//vector<Vendedor> vetVedores;
	Carro carro;
	ListaCarros estoque;
	Vendedor vendedor;
	ListaVendedor vendedores;
	Interface menu;
	bool sair = false;
	int pos;

	while (!sair) {
		menu.imprimeMenu();
		if (menu.getOpcao() == 1) {  // Cadastrar um carro
			carro.cadastrarCarro();
			estoque.lista.push_back(carro);
		}
		else if (menu.getOpcao() == 2) { // Cadastrar um novo vendedor
			vendedor.cadastraVendedor();
			vendedores.lista.push_back(vendedor);
		}
		else if (menu.getOpcao() == 3) { // Fazer uma venda 
			Vendedor aux;
			pos = menu.loginVendedor(vendedores);
			int j = 1;
			try {
				for (auto& i : vendedores.lista) {
					if (j == pos) {
						i.fazerVenda(estoque);
						i.cacularComissao();
						vendedores.lista.erase(vendedores.lista.begin() + pos - 1);
						vendedores.lista.push_back(i);
					}
					j++;
				}
			}
			catch (const out_of_range& ex) {
				cout << "out_of_range Exception Caught :: " << ex.what() << endl;
			}
		}
		else if (menu.getOpcao() == 4) { // Busca no estoque
			menu.mostrarEstoque(estoque);
		}
		else if (menu.getOpcao() == 5) {
			sair = true;
		}
		else {
			cerr << "Erro, opção inválida";
		}
	}
	return 0;
} 