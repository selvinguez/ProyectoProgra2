#include "Estructuras.h"
#include "ListaEnlazadaSimple.h"
#include "MyForm.h"
using namespace ProyectoProgra2;
estructuras::estructuras() {
}


void estructuras::imprimirDvg(string nombre, System::Windows::Forms::DataGridView^ Dvgx, System::Windows::Forms::ComboBox^ cb, int numero) {
	 
	ListaEnlazada* obj = new ListaEnlazada[2];
	
	obj[numero] = ListaEnlazada();
	archivo.open(nombre, ios::in | ios::out | ios::binary);

	if (!archivo) {
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBox::Show("Archivo No existe", "Error", buttons);
		return;
	}
	InfoTabla info;
	InfoCampo campo;

	archivo.seekg(ios::beg);

	archivo.read(reinterpret_cast<char*>(&info), sizeof(InfoTabla));

	Dvgx->ColumnCount = info.cantidadCampos;
	Dvgx->RowCount = info.cantidadRegistros;

	TipoCampo* tipoC = new TipoCampo[info.cantidadCampos];

	for (int i = 0; i < info.cantidadCampos; i++) {
		archivo.read((char*)&campo, sizeof(campo));
		tipoC[i] = campo.tipoCampo;
		cout << " " << campo.nombreCampo;

		obj[numero].agregarElemento(campo.nombreCampo,campo.tipoCampo);
		//Convercion Standard::string to System::String;
		string str = campo.nombreCampo;
		String^ str2 = gcnew String(str.c_str());
	
		Dvgx->Columns[i]->Name = str2;
		cb->Items->Add(str2);
	}
	obj[numero].imprimir();
	cout << endl;

	for (int i = 0; i < info.cantidadRegistros; i++) {
		for (int j = 0; j < info.cantidadCampos; j++) {
			switch (tipoC[j]) {
			case TipoCampo::t_Entero: {
				RegistroEntero num;

				archivo.read((char*)&num.valor, sizeof(RegistroEntero));
				std::cout << '|' << num.valor << '|';
				Dvgx[j, i]->Value = num.valor;
				break;
			}
			case TipoCampo::t_Cadena: {
				RegistroCadena cade;

				archivo.read((char*)&cade.valor, sizeof(RegistroCadena));
				std::cout << '|' << cade.valor << '|';
				//Convercion
				string str = cade.valor;
				String^ str2 = gcnew String(str.c_str());
				Dvgx[j, i]->Value = str2;
				break;
			}
			case TipoCampo::t_Char: {
				RegistroCaracter cha;

				archivo.read((char*)&cha.valor, sizeof(RegistroCaracter));
				std::cout << '|' << cha.valor << '|';
				Dvgx[j, i]->Value = cha.valor;
				break;
			}
			case TipoCampo::t_Decimal: {
				RegistroDecimal dec;

				archivo.read((char*)&dec.valor, sizeof(RegistroDecimal));
				std::cout << '|' << dec.valor << '|';
				Dvgx[j, i]->Value = dec.valor;
				break;
			}
			case TipoCampo::t_Logico: {
				RegistroLogico lol;
				archivo.read((char*)&lol.valor, sizeof(RegistroLogico));
				std::cout << '|' << lol.valor << 'l';
				Dvgx[j, i]->Value = lol.valor;
				break;
			}
			}
		}
		cout << endl;
	}
	cout << endl;

	archivo.close();
}


int estructuras::contarcolumnas(string nombre) {
	archivo.open(nombre, ios::in | ios::out | ios::binary);

	InfoTabla info;
	archivo.seekg(ios::beg);
	archivo.read(reinterpret_cast<char*>(&info), sizeof(InfoTabla));
	archivo.close();
	return info.cantidadCampos; 
	 
}


int estructuras::contarFilas(string nombre) {
	archivo.open(nombre, ios::in | ios::out | ios::binary);
	InfoTabla info;

	archivo.seekg(ios::beg);
	archivo.read(reinterpret_cast<char*>(&info), sizeof(InfoTabla));
	archivo.close();
	return info.cantidadRegistros;
}
