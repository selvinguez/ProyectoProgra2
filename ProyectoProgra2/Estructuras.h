#pragma once


#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <fstream>
#include <string>
#include <iostream>
#include <string.h>
using System::Runtime::InteropServices::Marshal;
using namespace std;

using namespace System;
using namespace std;

struct InfoTabla
{
	int cantidadRegistros;
	int cantidadCampos;
};//sizeof =  bytes

enum  TipoCampo { t_Entero, t_Cadena, t_Char, t_Decimal, t_Logico };
struct InfoCampo
{
	char nombreCampo[20];
	TipoCampo tipoCampo;

};//sizeof = 24

struct RegistroEntero
{
	unsigned int valor;
};

struct RegistroCadena
{
	char valor[100];
};
struct RegistroCaracter
{
	char valor;
};

struct RegistroDecimal
{
	float valor;
};

struct RegistroLogico
{
	bool valor;
};

class estructuras{
private:
	
public:
	fstream archivo;
	estructuras();
	
	void imprimirDvg(string , System::Windows::Forms::DataGridView^, System::Windows::Forms::ComboBox^,int);
	int contarcolumnas(string nombre);
	int contarFilas(string nombre);
	
	static std::string toStandardString(System::String^ string)
	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}

};

#endif //!ESTRUCTURAS_H