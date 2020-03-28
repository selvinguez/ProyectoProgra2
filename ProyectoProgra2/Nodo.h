
#ifndef NODO_H
#define NODO_H
#include "Estructuras.h"
#include <iostream>
class Nodo {
private:
	
	TipoCampo tipo;
	string nombre;
	Nodo* siguiente;
	Nodo* anterior;
public:
	Nodo();

	Nodo( string, TipoCampo, Nodo*, Nodo*);

	void setNombre(string);
	void setTipo(TipoCampo);
	void setSiguiente(Nodo*);
	void setAnterior(Nodo*);

	string getNombre();
	TipoCampo getTipo();
	Nodo* getSiguiente();
	Nodo* getAnterior();


};

#endif 