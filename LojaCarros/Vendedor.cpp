#include "Vendedor.h"


void Vendedor::cadastraVendedor()
{
    int auxInt;
    float auxFloat;
    string auxStr;
    system("cls");
    cout << "----------    CADASTRO DE VENDEDORES    ----------" << endl;
    cout << "Digite o nome do vendedor: ";
    cin >> auxStr;
    setNome(auxStr);
    system("cls");
    cout << "----------    CADASTRO DE VENDEDORES    ----------" << endl;
    cout << "Digite um id para o vendedor: ";
    cin >> auxInt;
    setId(auxInt);
    system("cls");
    cout << "----------    CADASTRO DE VENDEDORES    ----------" << endl;
    cout << "Digite o salario do vendedor: ";
    cin >> auxFloat;
    setSalario(auxFloat);
    system("cls");
    cout << "----------    CADASTRO DE VENDEDORES    ----------" << endl;
    cout << "Digite a comissao do vendedor: ";
    cin >> auxFloat;
    setComissao(auxFloat);
    system("cls");
    cout << "----------    CADASTRO FINALIZADO    ----------" << endl;
}

void Vendedor::fazerVenda(ListaCarros list)
{
    string op;
    system("cls");
    cout << "----------    MENU DE VENDAS   ----------" << endl;
    cout << " Opções:" << endl;
    cout << endl;
    cout << " Buscar Veiculo por modelo: " << endl;
    cin >> op;
    system("cls");
    for (auto &i : list.lista) {
        if (i.getModelo() == op) {
            cout << " Veiculo encontrado pelo modelo " << endl;
            cout << " Deseja fazer a venda (S/N) " << endl;
            cin >> op;
            if (op == "S" || op == "s") {
                this->numVendas++;
                this->comissao += i.getPreco();
                i.setStatus(1); //Apaga elemento do estoque
                cout << "Veiculo removido do estoque" << endl;
            }
        }
    }
}

void Vendedor::cacularComissao()
{
    float valorComissao = this->getComissao() * 0.05;
    cout << "Comissão pela venda: R$ " << valorComissao << endl;
    this->salario += valorComissao;
}

int Vendedor::getNumVendas()
{
    return this->numVendas;
}

int Vendedor::getId()
{
    return this->id;
}

float Vendedor::getComissao()
{
    return this->comissao;
}

float Vendedor::getSalario()
{
    return this->salario;
}

string Vendedor::getNome()
{
    return this->nome;
}


void Vendedor::setId(int i)
{
    this->id = i;
}

void Vendedor::setNome(string n)
{
    this->nome = n;
}

void Vendedor::setSalario(float s)
{
    this->salario = s;
}

void Vendedor::setComissao(float c)
{
    this->comissao = c;
}
