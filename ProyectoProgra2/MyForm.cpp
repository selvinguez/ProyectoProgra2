#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace ProyectoProgra2;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProyectoProgra2::MyForm form;
	Application::Run(% form);
	return 0;
}







