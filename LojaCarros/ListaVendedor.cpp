#include "ListaVendedor.h"

void ListaVendedor::remover(Vendedor v)
{
	this->lista->erase(v);
}
