#include "Interface.h"

int Interface::getOpcao()
{
	return opcao;
}

int Interface::loginVendedor(ListaVendedor list)
{
	int id;
	int j = 1;
	cout << "----------    MENU DE LOGIN   ----------" << endl;
	cout << "ID: " << endl;
	cin >> id;
	for (auto& i : list.lista) {
		if (i.getId() == id) {
			system("cls");
			cout << "----------    MENU DE LOGIN   ----------" << endl;
			cout << "Vendor encontrado" << endl;
			return j;
		}
		j++;
	}
	system("cls");
	cout << "----------    MENU DE LOGIN   ----------" << endl;
	cout << "Vendor não encontrado" << endl;
	return -1;
}

void Interface::setOpcao(int op)
{
	opcao = op;
}

void Interface::imprimeMenu()
{
	int op;
	cout << "----------    MENU DE PRINCIPAL   ----------" << endl;

	cout << " Opções:" << endl;
	cout << endl;
	cout << " ( 1 ) Cadastrar um veiculos " << endl;
	cout << " ( 2 ) Cadastrar um novo vendedor " << endl;
	cout << " ( 3 ) Fazer uma venda " << endl;
	cout << " ( 4 ) Fazer uma pesquisa no estoque " << endl;
	cout << " ( 5 ) SAIR " << endl;
	cin >> op;
	setOpcao(op);
}

void Interface::mostrarEstoque(ListaCarros list)
{
	cout << "----------    ESTOQUE   ----------" << endl;
	cout << "Tamanho " << list.lista.size() << endl;

	for (auto &i : list.lista) {
		cout << "{" << endl;
		cout << "\t" << i.getModelo() << endl;
		cout << "\t" << i.getAno() << endl;
		cout << "\t" << i.getMotor() << endl;
		cout << "\t" << i.getCor() << endl;
		cout << "\t" << i.getPlaca() << endl;
		cout << "\t" << i.getPreco() << endl;
		cout << "}" << endl;
	}
}
