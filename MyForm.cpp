﻿#include "MyForm.h"

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //WinFormsTest - èìÿ âàøåãî ïðîåêòà
    Application::Run(% form);
}