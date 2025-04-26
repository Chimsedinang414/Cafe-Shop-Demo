#pragma once

#include "OrderStats.h"

namespace CoffeeShopGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for OrderMenu
	/// </summary>

	public ref class OrderMenu : public System::Windows::Forms::Form
	{
	public:
		OrderMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			LoadMenuData();
			LoadMenuComboBox(); //Load menu data into ComboBox selectDrink
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataDrinkMenu;
	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;



	private: System::Windows::Forms::SplitContainer^ splitContainer;



	private: System::Windows::Forms::DataGridView^ dataOrder;







	private: System::Windows::Forms::FlowLayoutPanel^ drinkSelectPanel;
	private: System::Windows::Forms::ComboBox^ drinkSelect;
	private: System::Windows::Forms::NumericUpDown^ drinkQuantity;
	private: System::Windows::Forms::Button^ button_addtoOrder;
	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::TableLayoutPanel^ actionPanel;
	private: System::Windows::Forms::Label^ label_TotalPrice;
	private: System::Windows::Forms::Button^ button_Exit;
	private: System::Windows::Forms::Button^ button_Calculate;

	private: System::Windows::Forms::Button^ button_Summary;
	private: System::Windows::Forms::FlowLayoutPanel^ drinkSearchPanel;
	private: System::Windows::Forms::Label^ label_drinkSearch;
	private: System::Windows::Forms::TextBox^ txt_drinkSearch;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ drinkName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ drinkPrice;




















	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_drinkName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_drinkPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_drinkQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ order_drinkTotal;
	private: System::Windows::Forms::DataGridViewButtonColumn^ order_drinkRemove;




	private: List<Tuple<String^, String^>^>^ menuData = gcnew List<Tuple<String^, String^>^>(); //Menu database
	private: double totalPrice; //Total price of the order
	private: List<OrderStats^>^ dailyOrders = gcnew List<OrderStats^>(); //List to store daily orders
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer = (gcnew System::Windows::Forms::SplitContainer());
			this->drinkSearchPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label_drinkSearch = (gcnew System::Windows::Forms::Label());
			this->txt_drinkSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataDrinkMenu = (gcnew System::Windows::Forms::DataGridView());
			this->drinkName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->drinkPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->dataOrder = (gcnew System::Windows::Forms::DataGridView());
			this->order_drinkName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_drinkPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_drinkQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_drinkTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->order_drinkRemove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->drinkSelectPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->drinkSelect = (gcnew System::Windows::Forms::ComboBox());
			this->drinkQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_addtoOrder = (gcnew System::Windows::Forms::Button());
			this->label_TotalPrice = (gcnew System::Windows::Forms::Label());
			this->actionPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_Exit = (gcnew System::Windows::Forms::Button());
			this->button_Calculate = (gcnew System::Windows::Forms::Button());
			this->button_Summary = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer))->BeginInit();
			this->splitContainer->Panel1->SuspendLayout();
			this->splitContainer->Panel2->SuspendLayout();
			this->splitContainer->SuspendLayout();
			this->drinkSearchPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDrinkMenu))->BeginInit();
			this->MenuPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataOrder))->BeginInit();
			this->drinkSelectPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinkQuantity))->BeginInit();
			this->actionPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer
			// 
			this->splitContainer->Location = System::Drawing::Point(0, 0);
			this->splitContainer->Name = L"splitContainer";
			// 
			// splitContainer.Panel1
			// 
			this->splitContainer->Panel1->Controls->Add(this->drinkSearchPanel);
			this->splitContainer->Panel1->Controls->Add(this->dataDrinkMenu);
			// 
			// splitContainer.Panel2
			// 
			this->splitContainer->Panel2->Controls->Add(this->MenuPanel);
			this->splitContainer->Size = System::Drawing::Size(1200, 300);
			this->splitContainer->SplitterDistance = 592;
			this->splitContainer->TabIndex = 0;
			// 
			// drinkSearchPanel
			// 
			this->drinkSearchPanel->Controls->Add(this->label_drinkSearch);
			this->drinkSearchPanel->Controls->Add(this->txt_drinkSearch);
			this->drinkSearchPanel->Location = System::Drawing::Point(0, 264);
			this->drinkSearchPanel->Name = L"drinkSearchPanel";
			this->drinkSearchPanel->Size = System::Drawing::Size(592, 36);
			this->drinkSearchPanel->TabIndex = 2;
			// 
			// label_drinkSearch
			// 
			this->label_drinkSearch->AutoSize = true;
			this->label_drinkSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_drinkSearch->Location = System::Drawing::Point(3, 0);
			this->label_drinkSearch->Name = L"label_drinkSearch";
			this->label_drinkSearch->Size = System::Drawing::Size(159, 20);
			this->label_drinkSearch->TabIndex = 0;
			this->label_drinkSearch->Text = L"Search for drink(s): ";
			// 
			// txt_drinkSearch
			// 
			this->txt_drinkSearch->Location = System::Drawing::Point(168, 3);
			this->txt_drinkSearch->Name = L"txt_drinkSearch";
			this->txt_drinkSearch->Size = System::Drawing::Size(402, 22);
			this->txt_drinkSearch->TabIndex = 1;
			this->txt_drinkSearch->TextChanged += gcnew System::EventHandler(this, &OrderMenu::searchDrink);
			// 
			// dataDrinkMenu
			// 
			this->dataDrinkMenu->AllowUserToAddRows = false;
			this->dataDrinkMenu->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataDrinkMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataDrinkMenu->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->drinkName,
					this->drinkPrice
			});
			this->dataDrinkMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataDrinkMenu->Location = System::Drawing::Point(0, 0);
			this->dataDrinkMenu->Name = L"dataDrinkMenu";
			this->dataDrinkMenu->ReadOnly = true;
			this->dataDrinkMenu->RowHeadersWidth = 51;
			this->dataDrinkMenu->RowTemplate->Height = 24;
			this->dataDrinkMenu->Size = System::Drawing::Size(592, 250);
			this->dataDrinkMenu->TabIndex = 1;
			// 
			// drinkName
			// 
			this->drinkName->HeaderText = L"Drink";
			this->drinkName->MinimumWidth = 6;
			this->drinkName->Name = L"drinkName";
			this->drinkName->ReadOnly = true;
			// 
			// drinkPrice
			// 
			this->drinkPrice->HeaderText = L"Price (VND)";
			this->drinkPrice->MinimumWidth = 6;
			this->drinkPrice->Name = L"drinkPrice";
			this->drinkPrice->ReadOnly = true;
			// 
			// MenuPanel
			// 
			this->MenuPanel->Controls->Add(this->dataOrder);
			this->MenuPanel->Controls->Add(this->drinkSelectPanel);
			this->MenuPanel->Location = System::Drawing::Point(0, 0);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(600, 300);
			this->MenuPanel->TabIndex = 2;
			// 
			// dataOrder
			// 
			this->dataOrder->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->order_drinkName,
					this->order_drinkPrice, this->order_drinkQuantity, this->order_drinkTotal, this->order_drinkRemove
			});
			this->dataOrder->Location = System::Drawing::Point(0, 0);
			this->dataOrder->Name = L"dataOrder";
			this->dataOrder->RowHeadersWidth = 51;
			this->dataOrder->RowTemplate->Height = 24;
			this->dataOrder->Size = System::Drawing::Size(600, 200);
			this->dataOrder->TabIndex = 0;
			this->dataOrder->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OrderMenu::removeDrink);
			// 
			// order_drinkName
			// 
			this->order_drinkName->HeaderText = L"Drink";
			this->order_drinkName->MinimumWidth = 6;
			this->order_drinkName->Name = L"order_drinkName";
			this->order_drinkName->ReadOnly = true;
			// 
			// order_drinkPrice
			// 
			this->order_drinkPrice->HeaderText = L"Price (VND)";
			this->order_drinkPrice->MinimumWidth = 6;
			this->order_drinkPrice->Name = L"order_drinkPrice";
			this->order_drinkPrice->ReadOnly = true;
			// 
			// order_drinkQuantity
			// 
			this->order_drinkQuantity->HeaderText = L"Quantity";
			this->order_drinkQuantity->MinimumWidth = 6;
			this->order_drinkQuantity->Name = L"order_drinkQuantity";
			this->order_drinkQuantity->ReadOnly = true;
			// 
			// order_drinkTotal
			// 
			this->order_drinkTotal->HeaderText = L"Total (VND)";
			this->order_drinkTotal->MinimumWidth = 6;
			this->order_drinkTotal->Name = L"order_drinkTotal";
			this->order_drinkTotal->ReadOnly = true;
			// 
			// order_drinkRemove
			// 
			this->order_drinkRemove->HeaderText = L"Remove";
			this->order_drinkRemove->MinimumWidth = 6;
			this->order_drinkRemove->Name = L"order_drinkRemove";
			this->order_drinkRemove->ReadOnly = true;
			this->order_drinkRemove->Text = L"Remove";
			this->order_drinkRemove->UseColumnTextForButtonValue = true;
			// 
			// drinkSelectPanel
			// 
			this->drinkSelectPanel->AutoScroll = true;
			this->drinkSelectPanel->Controls->Add(this->drinkSelect);
			this->drinkSelectPanel->Controls->Add(this->drinkQuantity);
			this->drinkSelectPanel->Controls->Add(this->button_addtoOrder);
			this->drinkSelectPanel->Controls->Add(this->label_TotalPrice);
			this->drinkSelectPanel->Location = System::Drawing::Point(0, 200);
			this->drinkSelectPanel->Name = L"drinkSelectPanel";
			this->drinkSelectPanel->Padding = System::Windows::Forms::Padding(10);
			this->drinkSelectPanel->Size = System::Drawing::Size(600, 100);
			this->drinkSelectPanel->TabIndex = 1;
			// 
			// drinkSelect
			// 
			this->drinkSelect->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->drinkSelect->FormattingEnabled = true;
			this->drinkSelect->Location = System::Drawing::Point(13, 13);
			this->drinkSelect->Name = L"drinkSelect";
			this->drinkSelect->Size = System::Drawing::Size(200, 24);
			this->drinkSelect->TabIndex = 0;
			// 
			// drinkQuantity
			// 
			this->drinkQuantity->Location = System::Drawing::Point(219, 13);
			this->drinkQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->drinkQuantity->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->drinkQuantity->Name = L"drinkQuantity";
			this->drinkQuantity->Size = System::Drawing::Size(50, 22);
			this->drinkQuantity->TabIndex = 1;
			this->drinkQuantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_addtoOrder
			// 
			this->button_addtoOrder->Location = System::Drawing::Point(275, 13);
			this->button_addtoOrder->Name = L"button_addtoOrder";
			this->button_addtoOrder->Size = System::Drawing::Size(120, 24);
			this->button_addtoOrder->TabIndex = 2;
			this->button_addtoOrder->Text = L"Add to order";
			this->button_addtoOrder->UseVisualStyleBackColor = true;
			this->button_addtoOrder->Click += gcnew System::EventHandler(this, &OrderMenu::addDrinktoOrder);
			// 
			// label_TotalPrice
			// 
			this->label_TotalPrice->AutoSize = true;
			this->label_TotalPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_TotalPrice->Location = System::Drawing::Point(401, 10);
			this->label_TotalPrice->Name = L"label_TotalPrice";
			this->label_TotalPrice->Size = System::Drawing::Size(157, 29);
			this->label_TotalPrice->TabIndex = 3;
			this->label_TotalPrice->Text = L"Total: 0 VND";
			// 
			// actionPanel
			// 
			this->actionPanel->ColumnCount = 3;
			this->actionPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->actionPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->actionPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->actionPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->actionPanel->Controls->Add(this->button_Exit, 0, 0);
			this->actionPanel->Controls->Add(this->button_Calculate, 1, 0);
			this->actionPanel->Controls->Add(this->button_Summary, 2, 0);
			this->actionPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->actionPanel->Location = System::Drawing::Point(0, 350);
			this->actionPanel->Name = L"actionPanel";
			this->actionPanel->RowCount = 1;
			this->actionPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->actionPanel->Size = System::Drawing::Size(1196, 100);
			this->actionPanel->TabIndex = 1;
			// 
			// button_Exit
			// 
			this->button_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Exit->Location = System::Drawing::Point(3, 3);
			this->button_Exit->Name = L"button_Exit";
			this->button_Exit->Size = System::Drawing::Size(392, 94);
			this->button_Exit->TabIndex = 0;
			this->button_Exit->Text = L"Back to Main menu";
			this->button_Exit->UseVisualStyleBackColor = true;
			// 
			// button_Calculate
			// 
			this->button_Calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Calculate->Location = System::Drawing::Point(401, 3);
			this->button_Calculate->Name = L"button_Calculate";
			this->button_Calculate->Size = System::Drawing::Size(392, 94);
			this->button_Calculate->TabIndex = 1;
			this->button_Calculate->Text = L"Calculate Order";
			this->button_Calculate->UseVisualStyleBackColor = true;
			this->button_Calculate->Click += gcnew System::EventHandler(this, &OrderMenu::calculateOrder);
			// 
			// button_Summary
			// 
			this->button_Summary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Summary->Location = System::Drawing::Point(799, 3);
			this->button_Summary->Name = L"button_Summary";
			this->button_Summary->Size = System::Drawing::Size(394, 94);
			this->button_Summary->TabIndex = 3;
			this->button_Summary->Text = L"Summary daily orders";
			this->button_Summary->UseVisualStyleBackColor = true;
			this->button_Summary->Click += gcnew System::EventHandler(this, &OrderMenu::showDailySummary);
			// 
			// OrderMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1196, 450);
			this->Controls->Add(this->actionPanel);
			this->Controls->Add(this->splitContainer);
			this->Name = L"OrderMenu";
			this->Text = L"Order Menu";
			this->splitContainer->Panel1->ResumeLayout(false);
			this->splitContainer->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer))->EndInit();
			this->splitContainer->ResumeLayout(false);
			this->drinkSearchPanel->ResumeLayout(false);
			this->drinkSearchPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataDrinkMenu))->EndInit();
			this->MenuPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataOrder))->EndInit();
			this->drinkSelectPanel->ResumeLayout(false);
			this->drinkSelectPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drinkQuantity))->EndInit();
			this->actionPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma region Add Data to Menu
	void LoadMenuData(void)	{
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
					dataDrinkMenu->Rows->Add(parts[0], parts[1]);
				}
			}
			file->Close();
		}
		catch (System::IO::FileNotFoundException^) {
			MessageBox::Show("Không tìm thấy tệp menu.txt.", "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Đã xảy ra lỗi khi đọc tệp:\n" + ex->Message, "Lỗi", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
#pragma endregion
#pragma region Load Menu ComboBox
	void LoadMenuComboBox(void) {
		drinkSelect->Items->Clear();
		for each (Tuple<String^, String^> ^ item in menuData) {
			drinkSelect->Items->Add(item->Item1);
		}
	}
#pragma endregion
	private: System::Void addDrinktoOrder(System::Object^ sender, System::EventArgs^ e) {
		if (drinkSelect->SelectedItem == nullptr) {
			MessageBox::Show("Please select a drink.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		// Get the selected drink and quantity
		String^ selectedDrink = drinkSelect->SelectedItem->ToString();
		int quantity = Convert::ToInt32(drinkQuantity->Value);
		bool exists = false;
		// Find the price of the selected drink
		String^ priceStr;
		for each (Tuple<String^, String^> ^ item in menuData) {
			if (item->Item1 == selectedDrink) {
				priceStr = item->Item2;
				break;
			}
		}
		double price = Convert::ToDouble(priceStr);
		for each (DataGridViewRow ^ row in dataOrder->Rows) {
			if (!row->IsNewRow && row->Cells["order_drinkName"]->Value->ToString() == selectedDrink) {
				int existingQuantity = Convert::ToInt32(row->Cells["order_drinkQuantity"]->Value);
				row->Cells["order_drinkQuantity"]->Value = existingQuantity + quantity; 
				row->Cells["order_drinkTotal"]->Value = (existingQuantity + quantity) * price;
				exists = true;
				break;
			}
		}
		if (!exists) {
			if (dataOrder->Rows->Count > 5) {
				MessageBox::Show("You can only order up to 5 drinks.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			else {
				dataOrder->Rows->Add(selectedDrink, priceStr, quantity, price * quantity, "Remove");
			}
		}
		totalPrice += price * quantity;
		label_TotalPrice->Text = "Total: " + totalPrice.ToString() + " VND";
		drinkQuantity->Value = 1; // Reset quantity to 1
		// Reset selected drink
		drinkSelect->SelectedIndex = -1;
		drinkSelect->Text = "";
	}
	private: System::Void removeDrink(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->ColumnIndex == dataOrder->Columns["order_drinkRemove"]->Index) { // Check if the clicked cell is the remove button
			if (e->RowIndex >= 0 && e->RowIndex < dataOrder->Rows->Count - 1) {
				// Update total price
				double drink_totalPrice = Convert::ToDouble(dataOrder->Rows[e->RowIndex]->Cells["order_drinkTotal"]->Value);
				totalPrice -= drink_totalPrice;
				label_TotalPrice->Text = "Total: " + totalPrice.ToString() + " VND";
				// Remove the selected drink from the order
				dataOrder->Rows->RemoveAt(e->RowIndex);
			}
		}
	}
	private: System::Void calculateOrder(System::Object^ sender, System::EventArgs^ e) {
		if (dataOrder->Rows->Count == 0) {
			MessageBox::Show("No drinks in the order.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		double total = 0;
		String^ receipt = "===== RECEIPT =====\n";
		String^ timeNow = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
		receipt += timeNow + "\n\n";
		receipt += String::Format("{0,-20}{1,10}{2,10}{3,15}\n", "Drink", "Price", "Q.ty", "Total");
		receipt += "-----------------------------------------------\n";
		int totalItems = 0;
		double totalPrice;
		for each (DataGridViewRow ^ row in dataOrder->Rows) {
			if (!row->IsNewRow) {
				String^ drinkName = row->Cells["order_drinkName"]->Value->ToString();
				double drinkPrice = Convert::ToDouble(row->Cells["order_drinkPrice"]->Value);
				int drinkQuantity = Convert::ToInt32(row->Cells["order_drinkQuantity"]->Value);
				double drinkSubTotal = Convert::ToDouble(row->Cells["order_drinkTotal"]->Value);
				total += drinkSubTotal;
				receipt += String::Format("{0,-20}{1,10:N0}{2,10}{3,15:N0}\n", drinkName, drinkPrice, drinkQuantity, drinkSubTotal);
				totalItems += drinkQuantity;
			}
		}
		dailyOrders->Add(gcnew OrderStats(timeNow, totalItems, totalPrice));

		// Calculate discount
		double discountRate = 0.0;
		if (total > 1000000)
			discountRate = 0.2;
		else if (total > 500000)
			discountRate = 0.15;
		else if (total > 200000)
			discountRate = 0.1;
		double discount = total * discountRate;
		double finalTotal = total - discount;
		totalPrice = finalTotal;
		receipt += "-----------------------------------------------\n";
		receipt += String::Format("Total (before discounting): {0:N0} VND\n", total);
		if (discount > 0) {
			receipt += String::Format("Discount: {0:P}\n", discountRate);
			receipt += String::Format("Discount amount: {0:N0} VND\n", discount);
		}
		receipt += String::Format("Total (after discounting): {0:N0} VND\n", finalTotal);
		receipt += "===============================================\n";
		receipt += "Thank you for your order!\n";

		String^ fileName = "receipt.txt";
		try {
			System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(fileName, false, System::Text::Encoding::UTF8);
			file->Write(receipt);
			file->Close();
			MessageBox::Show("Receipt saved to " + fileName, "Receipt", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error saving receipt: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		//Clear order
		dataOrder->Rows->Clear();
		totalPrice = 0;
		label_TotalPrice->Text = "Total: 0 VND";
		drinkSelect->SelectedIndex = -1;
		drinkSelect->Text = "";
	}
	private: System::Void showDailySummary(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("daily_summary.txt", false, System::Text::Encoding::UTF8);
		writer->WriteLine("Daily summary of orders in the day:");
		writer->WriteLine("Time\t\t\tTotal drinks\tTotal price (VND)");
		double revenue = 0;
		for each (OrderStats ^ order in dailyOrders) {
			writer->WriteLine(String::Format("{0}\t{1}\t\t{2:N0}", order->timestamp, order->totalItems, order->totalPrice));
			revenue += order->totalPrice;
		}
		writer->WriteLine("Total revenue of the day: {0:N0} VND", revenue);
		writer->Close();
		MessageBox::Show("Saved daily summary to daily_summary.txt", "Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void searchDrink(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = txt_drinkSearch->Text->ToLower();
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
