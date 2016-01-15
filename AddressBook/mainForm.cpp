#include "mainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ argv) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AddressBook::mainForm form;
	Application::Run(%form);
}