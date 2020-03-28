#pragma once
#include "Estructuras.h"
#include <fstream>
#include <vector>  //for std::vector
#include <string>  //for std::string
//#include <msclr\marshal_cppstd.h>


namespace ProyectoProgra2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Dvg;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Text_1;
	private: System::Windows::Forms::TextBox^ Text_2;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ Dvg2;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ Dtg_P;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::ComboBox^ Cb_C1;
	private: System::Windows::Forms::ComboBox^ Cb_c2;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::ListBox^ Lista1;

	private: System::Windows::Forms::ListBox^ Lista2;



	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Dvg = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Text_1 = (gcnew System::Windows::Forms::TextBox());
			this->Text_2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Dvg2 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Dtg_P = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Cb_C1 = (gcnew System::Windows::Forms::ComboBox());
			this->Cb_c2 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Lista1 = (gcnew System::Windows::Forms::ListBox());
			this->Lista2 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dvg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dvg2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dtg_P))->BeginInit();
			this->SuspendLayout();
			// 
			// Dvg
			// 
			this->Dvg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dvg->Location = System::Drawing::Point(210, 78);
			this->Dvg->Name = L"Dvg";
			this->Dvg->Size = System::Drawing::Size(240, 150);
			this->Dvg->TabIndex = 0;
			this->Dvg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::Dvg_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(272, 237);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Mostrar Conjunto A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(12, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 88);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(12, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 88);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(12, 233);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 88);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(12, 126);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(157, 88);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Union";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Diferencia";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Interseccion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 431);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Complemento";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(341, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"TEORIA DE CONJUNTOS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(207, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Conjunto A";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// Text_1
			// 
			this->Text_1->Location = System::Drawing::Point(272, 58);
			this->Text_1->Name = L"Text_1";
			this->Text_1->Size = System::Drawing::Size(142, 20);
			this->Text_1->TabIndex = 12;
			this->Text_1->TextChanged += gcnew System::EventHandler(this, &MyForm::Text_1_TextChanged);
			// 
			// Text_2
			// 
			this->Text_2->Location = System::Drawing::Point(738, 59);
			this->Text_2->Name = L"Text_2";
			this->Text_2->Size = System::Drawing::Size(142, 20);
			this->Text_2->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(658, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Conjunto B";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(661, 241);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(117, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Mostrar Conjunto B";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// Dvg2
			// 
			this->Dvg2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dvg2->Location = System::Drawing::Point(661, 85);
			this->Dvg2->Name = L"Dvg2";
			this->Dvg2->Size = System::Drawing::Size(240, 150);
			this->Dvg2->TabIndex = 13;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(559, 373);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Agregar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// Dtg_P
			// 
			this->Dtg_P->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dtg_P->Location = System::Drawing::Point(210, 278);
			this->Dtg_P->Name = L"Dtg_P";
			this->Dtg_P->Size = System::Drawing::Size(240, 150);
			this->Dtg_P->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(559, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(456, 320);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Nuevo Conjunto";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// Cb_C1
			// 
			this->Cb_C1->FormattingEnabled = true;
			this->Cb_C1->Location = System::Drawing::Point(456, 85);
			this->Cb_C1->Name = L"Cb_C1";
			this->Cb_C1->Size = System::Drawing::Size(97, 21);
			this->Cb_C1->TabIndex = 0;
			// 
			// Cb_c2
			// 
			this->Cb_c2->FormattingEnabled = true;
			this->Cb_c2->Location = System::Drawing::Point(559, 85);
			this->Cb_c2->Name = L"Cb_c2";
			this->Cb_c2->Size = System::Drawing::Size(96, 21);
			this->Cb_c2->TabIndex = 22;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(459, 232);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Agregar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(559, 232);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Agregar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// Lista1
			// 
			this->Lista1->FormattingEnabled = true;
			this->Lista1->Location = System::Drawing::Point(456, 119);
			this->Lista1->Name = L"Lista1";
			this->Lista1->Size = System::Drawing::Size(97, 95);
			this->Lista1->TabIndex = 26;
			// 
			// Lista2
			// 
			this->Lista2->FormattingEnabled = true;
			this->Lista2->Location = System::Drawing::Point(562, 119);
			this->Lista2->Name = L"Lista2";
			this->Lista2->Size = System::Drawing::Size(93, 95);
			this->Lista2->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 459);
			this->Controls->Add(this->Lista2);
			this->Controls->Add(this->Lista1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->Cb_c2);
			this->Controls->Add(this->Cb_C1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->Dtg_P);
			this->Controls->Add(this->Text_2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->Dvg2);
			this->Controls->Add(this->Text_1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Dvg);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dvg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dvg2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dtg_P))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#include <fstream>
	

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Cb_C1->Items->Clear();
		Lista1->Items->Clear();

		System::String^ managed = Text_1->Text;
		estructuras lol;
		string texto2 = lol.toStandardString(managed);
		lol.imprimirDvg(texto2, Dvg, Cb_C1,0);

		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ item = Cb_C1->SelectedItem->ToString();
		String^ item2 = Cb_c2->SelectedItem->ToString();

		Dtg_P->ColumnCount = 1;
		Dtg_P->RowCount = Dvg->RowCount + Dvg2->RowCount;
		Dtg_P->Columns[0]->Name = item;

		//Columnas
	
		int filas1 = Dvg->RowCount;
		int columna = Dvg->ColumnCount;
		int colum = 0;


		int filas2 = Dvg2->RowCount;
		int columna2 = Dvg2->ColumnCount;
		int colum2 = 0;


		//Items 1
		for (int i = 0; i < columna; i++) {
			if (Dvg->Columns[i]->Name == item) {
				colum = i;
			}
		}
		//Items 2 
		for (int i = 0; i < columna2; i++) {
			if (Dvg2->Columns[i]->Name == item2) {
				colum2 = i;
			}
		}

		for (int i = 0; i < filas1;i++) {
			Dtg_P[0,i]->Value = Dvg[colum,i]->Value;
		}

		int fi = 0;
		for (int i = filas1; i < Dtg_P->RowCount ;i++) {
			Dtg_P[0,i]->Value = Dvg2[colum2, fi++]->Value;
		}


	};
		   

	
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Cb_c2->Items->Clear();
	Lista2->Items->Clear();

	System::String^ managed = Text_2->Text;
	estructuras lol;
	string texto2 = lol.toStandardString(managed);
	lol.imprimirDvg(texto2 , Dvg2 ,Cb_c2 , 0);

}
	  


	  

private: System::Void Text_1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ item = Cb_C1->SelectedItem->ToString();
	Dtg_P->ColumnCount = 1;

	Dtg_P->RowCount = Dvg->RowCount ;
	Dtg_P->Columns[0]->Name = item;


	//Columnas
	int filas1 = Dvg->RowCount;
	int columna = Dvg->ColumnCount;
	int colum = 0;



	//Items 1
	for (int i = 0; i < columna; i++) {
		if (Dvg->Columns[i]->Name == item) {
			colum = i;
		}
	}

	for (int i = 0; i < filas1;i++) {
		Dtg_P[0, i]->Value = Dvg[colum, i]->Value;
	}



}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBox::Show("Boton No programado", "Error", buttons);


	/*
	String^ item = Cb_C1->SelectedItem->ToString();
	String^ item2 = Cb_c2->SelectedItem->ToString();

	Dtg_P->ColumnCount = 1;
	Dtg_P->Columns[0]->Name = item;
	//Columnas
	int filas1 = Dvg->RowCount;
	int columna = Dvg->ColumnCount;
	int colum = 0;

	std::vector<std::string> data;

	std::vector<std::string> data2;
	
	int filas2 = Dvg2->RowCount;
	int columna2 = Dvg2->ColumnCount;
	int colum2 = 0;

	//Items 1
	for (int i = 0; i < columna; i++) {
		if (Dvg->Columns[i]->Name == item) {
			colum = i;
		}
	}
	//Items 2 
	for (int i = 0; i < columna2; i++) {
		if (Dvg2->Columns[i]->Name == item2) {
			colum2 = i;
		}
	}
	estructuras lol;
	for (int i = 0; i < filas1;i++) {
		String^ ls= Dvg[colum, i]->Value->ToString();
		data.push_back(lol.toStandardString(ls));
	}

	int fi = 0;
	for (int i = filas1; i < Dtg_P->RowCount;i++) {
		String^ ls = Dvg2[colum, i]->Value->ToString();
		data2.push_back(lol.toStandardString(ls));
	}

	int contador=0;
	
	for (int i = 0; i < data.size(); i++) {
		for (int x = 0; i < data2.size();x++) {
			if (data[i] == data2[x]) {
				contador++;
			}
		}
	}

	Dtg_P->RowCount = contador;
	int fi2 = 0;
	for (int i = 0; i < data.size(); i++) {
		for (int x = 0; i < data2.size();x++) {
			if (data[i] == data2[x]) {
				string str = data[i];
				String^ str2 = gcnew String(str.c_str());
				Dtg_P[0, fi2++]->Value = str2;
			}
		}
	}




	*/



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
/*	System::String^ text_1 = Text_1->Text;
	System::String^ text_2 = Text_2->Text;
	estructuras lol;

	string texto1 = lol.toStandardString(text_1);
	string texto2 = lol.toStandardString(text_2);

	if (lol.contarcolumnas(texto1) != lol.contarcolumnas(texto2) | lol.contarFilas(texto1) != lol.contarFilas(texto2)) {
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBox::Show("Los archivos no coiciden", "Error", buttons);

	}
	else {
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBox::Show("Los archivos coiciden", "Excelente", buttons);

	}*/
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBox::Show("Boton no programado", "Error", buttons);

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ seleccionado = Cb_C1->SelectedItem->ToString();
	Lista1->Items->Add(seleccionado);

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ seleccionado = Cb_c2->SelectedItem->ToString();
	Lista2->Items->Add(seleccionado);
}
private: System::Void Dvg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBox::Show("Boton No programado", "Error", buttons);
}
};




}
