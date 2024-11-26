#include "MyForm.h"
#include <cliext/adapter>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BlackJackV11::MyForm^ form = gcnew BlackJackV11::MyForm();
    Application::Run(form);
}