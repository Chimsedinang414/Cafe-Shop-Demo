#pragma once
#include "CafeMenu.h"
#include "Form1.h"
#include "OrderMenu.h"
#include"Receipt.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main_menu
	/// </summary>
	public ref class Main_menu : public System::Windows::Forms::Form
	{
	public:
		Main_menu()
		{
			InitializeComponent();
		}

	public:
		Main_menu(String^ user)
		{
			this->username = user;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::String^ username;
	private: System::Windows::Forms::Button^ button_Menu;
	protected:




	private: System::Windows::Forms::Label^ welcomeText;
	private: System::Windows::Forms::LinkLabel^ logoutLink;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

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
			this->button_Menu = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->welcomeText = (gcnew System::Windows::Forms::Label());
			this->logoutLink = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_Menu
			// 
			this->button_Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Menu->Location = System::Drawing::Point(28, 253);
			this->button_Menu->Name = L"button_Menu";
			this->button_Menu->Size = System::Drawing::Size(134, 28);
			this->button_Menu->TabIndex = 1;
			this->button_Menu->Text = L"Menu";
			this->button_Menu->UseVisualStyleBackColor = true;
			this->button_Menu->Click += gcnew System::EventHandler(this, &Main_menu::openMenu);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Đặt đồ uống";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main_menu::orderDrink);
			// 
			// welcomeText
			// 
			this->welcomeText->AutoSize = true;
			this->welcomeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeText->Location = System::Drawing::Point(450, 10);
			this->welcomeText->Name = L"welcomeText";
			this->welcomeText->Size = System::Drawing::Size(0, 20);
			this->welcomeText->TabIndex = 4;
			this->welcomeText->Click += gcnew System::EventHandler(this, &Main_menu::label2_Click);
			// 
			// logoutLink
			// 
			this->logoutLink->AutoSize = true;
			this->logoutLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutLink->Location = System::Drawing::Point(678, 10);
			this->logoutLink->Name = L"logoutLink";
			this->logoutLink->Size = System::Drawing::Size(77, 20);
			this->logoutLink->TabIndex = 5;
			this->logoutLink->TabStop = true;
			this->logoutLink->Text = L"(Log out)";
			this->logoutLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main_menu::linkLabel1_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::SteelBlue;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button_Menu);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 555);
			this->panel1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ravie", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(14, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Cafe Manager";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(42, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(28, 468);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"In";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main_menu::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(28, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Biên Lai";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main_menu::button2_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(204, 28);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(580, 528);
			this->flowLayoutPanel1->TabIndex = 7;
			// 
			// Main_menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->logoutLink);
			this->Controls->Add(this->welcomeText);
			this->Name = L"Main_menu";
			this->Text = L"MainMenu";
			this->Load += gcnew System::EventHandler(this, &Main_menu::Main_menu_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openMenu(System::Object^ sender, System::EventArgs^ e) {
		CoffeeShopGUI::CafeMenu^ cafeMenu = gcnew CoffeeShopGUI::CafeMenu();
		cafeMenu->Show();
	}
	private: System::Void Main_menu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);;
	private: System::Void orderDrink(System::Object^ sender, System::EventArgs^ e) {
		CoffeeShopGUI::OrderMenu^ orderMenu = gcnew CoffeeShopGUI::OrderMenu();
		orderMenu->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Trong sự kiện click của nút Thanh Toán:
	CoffeeShopGUI::Receipt^ hoaDon = gcnew CoffeeShopGUI::Receipt();
	hoaDon->ShowDialog();
   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {


	//Tạo một đối tượng PrintDialog 
	PrintDialog^ printDialog = gcnew PrintDialog();
	printDialog -> Document = gcnew System::Drawing::Printing::PrintDocument();
}
};
}