#pragma once
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include "Estructuras.h"
#include "Nodo.h"

class ListaEnlazada {
private:
	Nodo* primero;
	fstream archivo;
public:
	ListaEnlazada();

	void agregarElemento(string,TipoCampo);
	/*void eliminar(int);*/
	//void imprimiColumna(ListaEnlazada* , System::Windows::Forms::ComboBox^,string);
	//ListaEnlazada* lista(int, string);
	bool estaVacia();
	void imprimir();
};


#endif 
