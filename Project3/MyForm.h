#pragma once

#include "Function.h";

namespace Project3 {
	
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ Result;

	protected:



	private: System::Windows::Forms::Label^ OlBuisness;
	private: System::Windows::Forms::Label^ CompanyOfCreator;


	private: System::Windows::Forms::Label^ NameOfCreator;

	private: System::Windows::Forms::ComboBox^ Core_Select;
	private: System::Windows::Forms::ComboBox^ Wood_Select;
	private: System::Windows::Forms::Label^ Core_Text;
	private: System::Windows::Forms::Label^ Wood_Text;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ SQLINFO;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Result = (gcnew System::Windows::Forms::Button());
			this->OlBuisness = (gcnew System::Windows::Forms::Label());
			this->CompanyOfCreator = (gcnew System::Windows::Forms::Label());
			this->NameOfCreator = (gcnew System::Windows::Forms::Label());
			this->Core_Select = (gcnew System::Windows::Forms::ComboBox());
			this->Wood_Select = (gcnew System::Windows::Forms::ComboBox());
			this->Core_Text = (gcnew System::Windows::Forms::Label());
			this->Wood_Text = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->SQLINFO = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Result
			// 
			this->Result->BackColor = System::Drawing::Color::Red;
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Result->Location = System::Drawing::Point(63, 167);
			this->Result->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(122, 48);
			this->Result->TabIndex = 1;
			this->Result->Text = L"Start";
			this->Result->UseVisualStyleBackColor = false;
			this->Result->Click += gcnew System::EventHandler(this, &MyForm::Result_Click);
			// 
			// OlBuisness
			// 
			this->OlBuisness->AutoSize = true;
			this->OlBuisness->Font = (gcnew System::Drawing::Font(L"Oldtimer", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OlBuisness->Location = System::Drawing::Point(7, 9);
			this->OlBuisness->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->OlBuisness->Name = L"OlBuisness";
			this->OlBuisness->Size = System::Drawing::Size(443, 30);
			this->OlBuisness->TabIndex = 4;
			this->OlBuisness->Text = L"Olivander\'s Control Center";
			this->OlBuisness->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// CompanyOfCreator
			// 
			this->CompanyOfCreator->AutoSize = true;
			this->CompanyOfCreator->Location = System::Drawing::Point(125, 231);
			this->CompanyOfCreator->Name = L"CompanyOfCreator";
			this->CompanyOfCreator->Size = System::Drawing::Size(128, 26);
			this->CompanyOfCreator->TabIndex = 5;
			this->CompanyOfCreator->Text = L"By Master Electronic \r\nand Math Studio\r\n";
			// 
			// NameOfCreator
			// 
			this->NameOfCreator->AutoSize = true;
			this->NameOfCreator->Location = System::Drawing::Point(9, 231);
			this->NameOfCreator->Name = L"NameOfCreator";
			this->NameOfCreator->Size = System::Drawing::Size(110, 26);
			this->NameOfCreator->TabIndex = 6;
			this->NameOfCreator->Text = L"By Shaykevich\r\nDanila Denisovich\r\n";
			// 
			// Core_Select
			// 
			this->Core_Select->FormattingEnabled = true;
			this->Core_Select->Location = System::Drawing::Point(41, 74);
			this->Core_Select->Name = L"Core_Select";
			this->Core_Select->Size = System::Drawing::Size(165, 21);
			this->Core_Select->TabIndex = 7;
			// 
			// Wood_Select
			// 
			this->Wood_Select->FormattingEnabled = true;
			this->Wood_Select->Location = System::Drawing::Point(41, 140);
			this->Wood_Select->Name = L"Wood_Select";
			this->Wood_Select->Size = System::Drawing::Size(165, 21);
			this->Wood_Select->TabIndex = 8;
			// 
			// Core_Text
			// 
			this->Core_Text->AutoSize = true;
			this->Core_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Core_Text->Location = System::Drawing::Point(91, 51);
			this->Core_Text->Name = L"Core_Text";
			this->Core_Text->Size = System::Drawing::Size(47, 20);
			this->Core_Text->TabIndex = 9;
			this->Core_Text->Text = L"Core";
			// 
			// Wood_Text
			// 
			this->Wood_Text->AutoSize = true;
			this->Wood_Text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Wood_Text->Location = System::Drawing::Point(91, 117);
			this->Wood_Text->Name = L"Wood_Text";
			this->Wood_Text->Size = System::Drawing::Size(55, 20);
			this->Wood_Text->TabIndex = 10;
			this->Wood_Text->Text = L"Wood\r\n";
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Red;
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Location = System::Drawing::Point(457, 12);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(25, 25);
			this->Exit->TabIndex = 11;
			this->Exit->Text = L"X";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(219, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(263, 177);
			this->dataGridView1->TabIndex = 12;
			// 
			// SQLINFO
			// 
			this->SQLINFO->AutoSize = true;
			this->SQLINFO->Location = System::Drawing::Point(299, 231);
			this->SQLINFO->Name = L"SQLINFO";
			this->SQLINFO->Size = System::Drawing::Size(108, 13);
			this->SQLINFO->TabIndex = 13;
			this->SQLINFO->Text = L"The Table of SQL";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(159)));
			this->ClientSize = System::Drawing::Size(501, 276);
			this->Controls->Add(this->SQLINFO);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Wood_Text);
			this->Controls->Add(this->Core_Text);
			this->Controls->Add(this->Wood_Select);
			this->Controls->Add(this->Core_Select);
			this->Controls->Add(this->NameOfCreator);
			this->Controls->Add(this->CompanyOfCreator);
			this->Controls->Add(this->OlBuisness);
			this->Controls->Add(this->Result);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"Olivander\'s Control Center";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	bool First = true;
	private: System::Void Result_Click(System::Object^ sender, System::EventArgs^ e) {

		if (First == true)
		{
			dataGridView1->DataSource = Start::StartData();

			Result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));;
			Result->ForeColor = System::Drawing::SystemColors::ControlText;
			Result->Text = "Result";

			Wood_Select->DataSource = Start::StartData();
			Wood_Select->DisplayMember = "wood_name";
			Core_Select->DataSource = Start::StartData();
			Core_Select->DisplayMember = "core_name";
			First = false;
		}
		else
		{
			dataGridView1->DataSource = General::Total(Wood_Select->Text, Core_Select->Text);
		}
	}
};

}
