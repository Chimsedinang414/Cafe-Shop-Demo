#pragma once
#include <string>

namespace CoffeeShopGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for CafeMenu
	/// </summary>
	public ref class CafeMenu : public System::Windows::Forms::Form
	{
	public:
		CafeMenu(void)
		{
			//
			//TODO: Add the constructor code here
			//
			InitializeComponent();
			LoadMenuData();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CafeMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button_addDrink;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::ToolStripMenuItem^ tàiKhoảnToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ thôngTinCáNhânToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ đăngXuấtToolStripMenuItem1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::TextBox^ txtdrinkName;
	private: System::Windows::Forms::DataGridView^ dataDrinkMenu;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_add_drinkName;
	private: System::Windows::Forms::TextBox^ txtdrinkPrice;

	private: System::Windows::Forms::Label^ label_add_drinkPrice;
	private: System::Windows::Forms::TextBox^ txtsearchDrink;

	private: System::Windows::Forms::Label^ label_searchDrink;
	private: System::Windows::Forms::Button^ button_deleteDrink;

	private: System::Windows::Forms::Button^ button1;





	private: List<Tuple<String^, String^>^>^ menuData = gcnew List<Tuple<String^, String^>^>(); //Menu database
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ drinkName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ drinkPrice;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ SelectCheckbox;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtsearchDrink = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_deleteDrink = (gcnew System::Windows::Forms::Button());
			this->label_searchDrink = (gcnew System::Windows::Forms::Label());
			this->txtdrinkPrice = (gcnew System::Windows::Forms::TextBox());
			this->label_add_drinkPrice = (gcnew System::Windows::Forms::Label());
			this->label_add_drinkName = (gcnew System::Windows::Forms::Label());
			this->txtdrinkName = (gcnew System::Windows::Forms::TextBox());
			this->button_addDrink = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataDrinkMenu = (gcnew System::Windows::Forms::DataGridView());
			this->drinkName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->drinkPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SelectCheckbox = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->tàiKhoảnToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thôngTinCáNhânToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->đăngXuấtToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDrinkMenu))->BeginInit();
			this->SuspendLayout();
			// 
			// txtsearchDrink
			// 
			this->txtsearchDrink->Location = System::Drawing::Point(20, 125);
			this->txtsearchDrink->Name = L"txtsearchDrink";
			this->txtsearchDrink->Size = System::Drawing::Size(375, 22);
			this->txtsearchDrink->TabIndex = 5;
			this->txtsearchDrink->TextChanged += gcnew System::EventHandler(this, &CafeMenu::searchDrink);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SteelBlue;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->button_deleteDrink);
			this->panel4->Controls->Add(this->label_searchDrink);
			this->panel4->Controls->Add(this->txtsearchDrink);
			this->panel4->Controls->Add(this->txtdrinkPrice);
			this->panel4->Controls->Add(this->label_add_drinkPrice);
			this->panel4->Controls->Add(this->label_add_drinkName);
			this->panel4->Controls->Add(this->txtdrinkName);
			this->panel4->Controls->Add(this->button_addDrink);
			this->panel4->Location = System::Drawing::Point(630, 97);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(415, 317);
			this->panel4->TabIndex = 8;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CafeMenu::panel4_Paint);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(19, 247);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 34);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Save menu and exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CafeMenu::SaveandExit);
			// 
			// button_deleteDrink
			// 
			this->button_deleteDrink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_deleteDrink->Location = System::Drawing::Point(19, 207);
			this->button_deleteDrink->Name = L"button_deleteDrink";
			this->button_deleteDrink->Size = System::Drawing::Size(376, 34);
			this->button_deleteDrink->TabIndex = 10;
			this->button_deleteDrink->Text = L"Remove selected drink(s)";
			this->button_deleteDrink->UseVisualStyleBackColor = true;
			this->button_deleteDrink->Click += gcnew System::EventHandler(this, &CafeMenu::RemoveDrink);
			// 
			// label_searchDrink
			// 
			this->label_searchDrink->AutoSize = true;
			this->label_searchDrink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_searchDrink->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_searchDrink->Location = System::Drawing::Point(15, 100);
			this->label_searchDrink->Name = L"label_searchDrink";
			this->label_searchDrink->Size = System::Drawing::Size(103, 20);
			this->label_searchDrink->TabIndex = 9;
			this->label_searchDrink->Text = L"Search drink";
			// 
			// txtdrinkPrice
			// 
			this->txtdrinkPrice->Location = System::Drawing::Point(105, 60);
			this->txtdrinkPrice->Name = L"txtdrinkPrice";
			this->txtdrinkPrice->Size = System::Drawing::Size(120, 22);
			this->txtdrinkPrice->TabIndex = 8;
			// 
			// label_add_drinkPrice
			// 
			this->label_add_drinkPrice->AutoSize = true;
			this->label_add_drinkPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_add_drinkPrice->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_add_drinkPrice->Location = System::Drawing::Point(15, 60);
			this->label_add_drinkPrice->Name = L"label_add_drinkPrice";
			this->label_add_drinkPrice->Size = System::Drawing::Size(48, 20);
			this->label_add_drinkPrice->TabIndex = 7;
			this->label_add_drinkPrice->Text = L"Price";
			// 
			// label_add_drinkName
			// 
			this->label_add_drinkName->AutoSize = true;
			this->label_add_drinkName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_add_drinkName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_add_drinkName->Location = System::Drawing::Point(15, 21);
			this->label_add_drinkName->Name = L"label_add_drinkName";
			this->label_add_drinkName->Size = System::Drawing::Size(49, 20);
			this->label_add_drinkName->TabIndex = 6;
			this->label_add_drinkName->Text = L"Drink";
			// 
			// txtdrinkName
			// 
			this->txtdrinkName->Location = System::Drawing::Point(105, 19);
			this->txtdrinkName->Name = L"txtdrinkName";
			this->txtdrinkName->Size = System::Drawing::Size(290, 22);
			this->txtdrinkName->TabIndex = 5;
			// 
			// button_addDrink
			// 
			this->button_addDrink->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_addDrink->Location = System::Drawing::Point(243, 53);
			this->button_addDrink->Name = L"button_addDrink";
			this->button_addDrink->Size = System::Drawing::Size(152, 34);
			this->button_addDrink->TabIndex = 2;
			this->button_addDrink->Text = L"Add";
			this->button_addDrink->UseVisualStyleBackColor = true;
			this->button_addDrink->Click += gcnew System::EventHandler(this, &CafeMenu::AddDrink);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->tabControl1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(13, 46);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(593, 407);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(590, 395);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Cornsilk;
			this->tabPage1->Controls->Add(this->dataDrinkMenu);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(582, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Drink";
			// 
			// dataDrinkMenu
			// 
			this->dataDrinkMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataDrinkMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->drinkName,
					this->drinkPrice, this->SelectCheckbox
			});
			this->dataDrinkMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataDrinkMenu->Location = System::Drawing::Point(3, 3);
			this->dataDrinkMenu->Name = L"dataDrinkMenu";
			this->dataDrinkMenu->ReadOnly = true;
			this->dataDrinkMenu->RowHeadersWidth = 51;
			this->dataDrinkMenu->RowTemplate->Height = 24;
			this->dataDrinkMenu->Size = System::Drawing::Size(576, 357);
			this->dataDrinkMenu->TabIndex = 0;
			this->dataDrinkMenu->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CafeMenu::dataGridView1_CellContentClick);
			// 
			// drinkName
			// 
			this->drinkName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->drinkName->Frozen = true;
			this->drinkName->HeaderText = L"Drink";
			this->drinkName->MinimumWidth = 6;
			this->drinkName->Name = L"drinkName";
			this->drinkName->ReadOnly = true;
			this->drinkName->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->drinkName->Width = 170;
			// 
			// drinkPrice
			// 
			this->drinkPrice->Frozen = true;
			this->drinkPrice->HeaderText = L"Price (VND)";
			this->drinkPrice->MinimumWidth = 6;
			this->drinkPrice->Name = L"drinkPrice";
			this->drinkPrice->ReadOnly = true;
			this->drinkPrice->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->drinkPrice->Width = 150;
			// 
			// SelectCheckbox
			// 
			this->SelectCheckbox->HeaderText = L"";
			this->SelectCheckbox->MinimumWidth = 6;
			this->SelectCheckbox->Name = L"SelectCheckbox";
			this->SelectCheckbox->ReadOnly = true;
			this->SelectCheckbox->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->SelectCheckbox->Width = 60;
			// 
			// tàiKhoảnToolStripMenuItem
			// 
			this->tàiKhoảnToolStripMenuItem->Name = L"tàiKhoảnToolStripMenuItem";
			this->tàiKhoảnToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// thôngTinCáNhânToolStripMenuItem1
			// 
			this->thôngTinCáNhânToolStripMenuItem1->Name = L"thôngTinCáNhânToolStripMenuItem1";
			this->thôngTinCáNhânToolStripMenuItem1->Size = System::Drawing::Size(32, 19);
			// 
			// đăngXuấtToolStripMenuItem1
			// 
			this->đăngXuấtToolStripMenuItem1->Name = L"đăngXuấtToolStripMenuItem1";
			this->đăngXuấtToolStripMenuItem1->Size = System::Drawing::Size(32, 19);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MediumOrchid;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(453, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Coffee DUT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CafeMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1057, 454);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel4);
			this->Name = L"CafeMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CafeMenu";
			this->Load += gcnew System::EventHandler(this, &CafeMenu::CafeMenu_Load);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDrinkMenu))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Load Files to DataGridView
	// Load menu data from file
    void LoadMenuData() {
		try {
			// Open the file with UTF-8 encoding
			System::IO::StreamReader^ file = gcnew System::IO::StreamReader("menu.txt", System::Text::Encoding::UTF8);

			// Clear old data
			menuData->Clear();
			dataDrinkMenu->Rows->Clear();

			String^ line;
			while ((line = file->ReadLine()) != nullptr) {
				array<String^>^ parts = line->Split(',');
				if (parts->Length == 2) {
					menuData->Add(gcnew Tuple<String^, String^>(parts[0], parts[1]));
					dataDrinkMenu->Rows->Add(parts[0], parts[1], false);
				}
			}

			file->Close();
		}
		catch (System::IO::FileNotFoundException^) {
			MessageBox::Show("Cannot find menu.txt.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error while reading file(s):\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
#pragma endregion

	private: System::Void CafeMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void thôngToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddDrink(System::Object^ sender, System::EventArgs^ e) {
		// Get the values from the text boxes
		String^ drinkName = txtdrinkName->Text;
		String^ drinkPrice = txtdrinkPrice->Text;
		// Check if the fields are not empty
		if (String::IsNullOrEmpty(drinkName) || String::IsNullOrEmpty(drinkPrice) || drinkName->Trim() == "" || drinkPrice->Trim() == "") {
			MessageBox::Show("Please enter drink name and price.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		double price;
		if (!Double::TryParse(drinkPrice, price)) {
			MessageBox::Show("Drink price must be a number.", "Message", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		// Add the new drink to the DataGridView
		int rowIndex = dataDrinkMenu->Rows->Add();
		dataDrinkMenu->Rows[rowIndex]->Cells["drinkName"]->Value = drinkName;
		dataDrinkMenu->Rows[rowIndex]->Cells["drinkPrice"]->Value = drinkPrice;
		menuData->Add(Tuple::Create(drinkName, drinkPrice));
		// Clear the text boxes
		txtdrinkName->Clear();
		txtdrinkPrice->Clear();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RemoveDrink(System::Object^ sender, System::EventArgs^ e) {
		for (int i = dataDrinkMenu->Rows->Count - 1; i >= 0; i--) {
			if (Convert::ToBoolean(dataDrinkMenu->Rows[i]->Cells["SelectCheckbox"]->Value)) {
				dataDrinkMenu->Rows->RemoveAt(i);
				menuData->RemoveAt(i);
			}
		}
	}
	private: System::Void SaveandExit(System::Object^ sender, System::EventArgs^ e);;
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void searchDrink(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = txtsearchDrink->Text->ToLower();
		if (String::IsNullOrEmpty(searchText) || searchText->Trim() == "") {
			// Clear DataGridView and reload it from menuData
			dataDrinkMenu->Rows->Clear();
			for each (Tuple<String^, String^> ^ item in menuData) {
				int rowIndex = dataDrinkMenu->Rows->Add();
				dataDrinkMenu->Rows[rowIndex]->Cells["drinkName"]->Value = item->Item1;
				dataDrinkMenu->Rows[rowIndex]->Cells["drinkPrice"]->Value = item->Item2;
			}
		}
		else {
			for each (DataGridViewRow ^ row in dataDrinkMenu->Rows) {
				if (!row->IsNewRow) {
					bool isVisible = false;
					String^ drinkName = row->Cells["drinkName"]->Value->ToString();
					if (drinkName->ToLower()->Contains(searchText)) {
						isVisible = true;
					}
					row->Visible = isVisible;
				}
			}
		}
	}
};
}
