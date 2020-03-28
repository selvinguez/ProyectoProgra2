#include "ListaEnlazadaDoble.h"
#include <iostream>
#include <iostream>
using namespace std;

listaEnlazada::listaEnlazada() : primero(nullptr)
{}

bool listaEnlazada::estaVacia()
{
	return primero == nullptr;
}

void listaEnlazada::agregarElemento(char* _nombreCampo)
{
//	Nodo* nuevo = new Nodo(_nombreCampo, nullptr);

	if (estaVacia())
	{
	//	primero = nuevo;
	}
	else
	{
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}

		//actual->setSiguiente(nuevo);
	}
}


void listaEnlazada::imprimir()
{
	if (estaVacia())
		cout << "Lista vacia";
	else
	{
		//nodo* actual = primero;

		/*while (actual != nullptr)
		{

			cout << "[ " << actual->getCarac() << " ]";
			actual = actual->getSiguiente();
		}*/
		cout << "\n";
	}

}