#include "ListaEnlazadaSimple.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada() :primero(nullptr)
{};

bool ListaEnlazada::estaVacia() {
	return primero == nullptr;
};

void ListaEnlazada::agregarElemento(string _valor, TipoCampo tipo) {
	Nodo* nuevo = new Nodo( _valor,tipo, nullptr, nullptr);

	if (estaVacia())
		primero = nuevo;
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}

}

void ListaEnlazada::imprimir() {
	if (estaVacia())
		cout << "Lista Vacia!";
	else {
		Nodo* actual = primero;
		while (actual != nullptr) {
			cout << " Nodo Agregado ";
			actual = actual->getSiguiente();
		}

	}

}

/*void ListaEnlazada::imprimiColumna(ListaEnlazada lista, System::Windows::Forms::ComboBox^ com,string nombre) {
	archivo.open(nombre, ios::in | ios::out | ios::binary);
	InfoTabla info;
	InfoCampo campo;
	archivo.seekg(ios::beg);
	archivo.read(reinterpret_cast<char*>(&info), sizeof(InfoTabla));
	TipoCampo* tipoC = new TipoCampo[info.cantidadCampos];
	Nodo* tmp = lista.primero;

	while(tmp != nullptr){

		archivo.read((char*)tmp->getTipo(), sizeof(campo));
		campo.tipoCampo = tmp->getTipo();
		//campo.nombreCampo =tmp->getNombre();
		string nombre = campo.nombreCampo;
		
	}
	archivo.close();

}
/*
ListaEnlazada* ListaEnlazada::lista( int numero, string nombre) {
	ListaEnlazada* obj = new ListaEnlazada[1];
	obj[numero] = ListaEnlazada();
	archivo.open(nombre, ios::in | ios::out | ios::binary);
	InfoTabla info;
	InfoCampo campo;
	archivo.seekg(ios::beg);
	archivo.read(reinterpret_cast<char*>(&info), sizeof(InfoTabla));
	TipoCampo* tipoC = new TipoCampo[info.cantidadCampos];

	for (int i = 0; i < info.cantidadCampos; i++) {
		archivo.read((char*)&campo, sizeof(campo));
		tipoC[i] = campo.tipoCampo;
		obj[numero].agregarElemento(nombre,tipoC[i]);
	}
	archivo.close();

	return &obj[numero];

}

void ListaEnlazada::eliminar( _valor) {
	if (estaVacia())
		cout << "\nLista Vacia\n";
	else {
		Nodo* actual = primero;
		Nodo* anterior = nullptr;

		while (actual != nullptr) {

			if (actual->getValor() == _valor) {
				if (actual == primero) {
					Nodo* copiaP = primero;
					primero = primero->getSiguiente();
					delete copiaP;
				}
				else {
					anterior->setSiguiente(actual->getSiguiente());
					delete actual;
				}
				return;
			}
			anterior = actual;
			actual = actual->getSiguiente();
		}
	}
};*/