#pragma once

#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include "Nodo.h"

class listaEnlazada
{
private:
	Nodo* primero;

public:
	listaEnlazada();

	void agregarElemento(char*);

	bool estaVacia();

	void imprimir();

};


#endif

