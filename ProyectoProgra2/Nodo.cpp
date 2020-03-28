#include "Nodo.h"
#include <iostream>
#include <conio.h>

Nodo::Nodo():siguiente(nullptr), anterior(nullptr) {
};

Nodo::Nodo(string _valor2, TipoCampo _valor , Nodo* _anterior, Nodo* _siguiente) {
	setNombre(_valor2);
	setTipo(_valor);
	setAnterior(_anterior);
	setSiguiente(_siguiente);
};

void Nodo::setNombre(string _nombre) {
	this->nombre=_nombre;
}

void Nodo::setTipo(TipoCampo _valor) {
	this->tipo = _valor;
}

void Nodo::setSiguiente(Nodo* _siguiente) {

	this->siguiente = _siguiente;
}
void Nodo::setAnterior(Nodo* _anterior) {
	this->anterior = _anterior;
}

string Nodo::getNombre() {
	return this->nombre;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

Nodo* Nodo::getAnterior() {
	return this->anterior;
}

TipoCampo Nodo::getTipo(){
	return this->tipo;
}