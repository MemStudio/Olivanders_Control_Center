#include "MyForm.h"
#include "Function.h"
#include <windows.h>
#include <sql.h>
#include <sqlext.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace Data;
using namespace Data::SqlClient;
using namespace Project3;



[STAThreadAttribute]
void main() 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	MyForm form;
	Application::Run(% form);
}
