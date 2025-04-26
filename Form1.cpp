#include "pch.h"
#include "Form1.h"
// #include "Form1.h"

inline System::Void CppCLRWinFormsProject::Form1::button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ username = this->txtUsername->Text;
	Main_menu^ f = gcnew Main_menu(username);
	this->Hide();
	f->ShowDialog();
}
