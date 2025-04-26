#include <string>
#include "pch.h"
#include "CafeMenu.h"

inline System::Void CoffeeShopGUI::CafeMenu::SaveandExit(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Use StreamWriter with UTF-8 encoding
		System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("menu.txt", false, System::Text::Encoding::UTF8);

		for each(Tuple<String^, String^> ^ item in menuData) {
			file->WriteLine(item->Item1 + "," + item->Item2);
		}

		file->Close();

		MessageBox::Show("Saved menu successfully!", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Cannot find tệp menu.txt\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->Hide();
}