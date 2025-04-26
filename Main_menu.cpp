#include "pch.h"
#include "Main_menu.h"
#include "CafeMenu.h"
#include "Form1.h"

inline System::Void CppCLRWinFormsProject::Main_menu::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Form1^ loginForm = gcnew Form1();
	loginForm->Show();
	this->Hide();
}