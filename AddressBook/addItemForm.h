#pragma once

namespace AddressBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addItemForm
	/// </summary>
	public ref class addItemForm : public System::Windows::Forms::Form
	{
	public:
		addItemForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  nameLabel;
	protected:
	private: System::Windows::Forms::Label^  mobileLabel;
	private: System::Windows::Forms::Label^  emailLabel;
	private: System::Windows::Forms::Label^  addressLabel;
	private: System::Windows::Forms::Label^  birthDateLabel;
	private: System::Windows::Forms::TextBox^  nameTextBox;
	private: System::Windows::Forms::TextBox^  birthTextBox;
	private: System::Windows::Forms::TextBox^  addressTextBox;
	private: System::Windows::Forms::TextBox^  mobileTextBox;
	private: System::Windows::Forms::TextBox^  emailTextBox;
	private: System::Windows::Forms::Button^  saveButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->mobileLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->addressLabel = (gcnew System::Windows::Forms::Label());
			this->birthDateLabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->birthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->mobileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->Location = System::Drawing::Point(22, 24);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(49, 17);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Name";
			// 
			// mobileLabel
			// 
			this->mobileLabel->AutoSize = true;
			this->mobileLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mobileLabel->Location = System::Drawing::Point(22, 163);
			this->mobileLabel->Name = L"mobileLabel";
			this->mobileLabel->Size = System::Drawing::Size(55, 17);
			this->mobileLabel->TabIndex = 1;
			this->mobileLabel->Text = L"Mobile";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(22, 200);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(47, 17);
			this->emailLabel->TabIndex = 2;
			this->emailLabel->Text = L"Email";
			// 
			// addressLabel
			// 
			this->addressLabel->AutoSize = true;
			this->addressLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addressLabel->Location = System::Drawing::Point(22, 100);
			this->addressLabel->Name = L"addressLabel";
			this->addressLabel->Size = System::Drawing::Size(67, 17);
			this->addressLabel->TabIndex = 3;
			this->addressLabel->Text = L"Address";
			// 
			// birthDateLabel
			// 
			this->birthDateLabel->AutoSize = true;
			this->birthDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->birthDateLabel->Location = System::Drawing::Point(22, 64);
			this->birthDateLabel->Name = L"birthDateLabel";
			this->birthDateLabel->Size = System::Drawing::Size(100, 17);
			this->birthDateLabel->TabIndex = 4;
			this->birthDateLabel->Text = L"Date of Birth";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(137, 24);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(230, 20);
			this->nameTextBox->TabIndex = 5;
			// 
			// birthTextBox
			// 
			this->birthTextBox->Location = System::Drawing::Point(137, 64);
			this->birthTextBox->Name = L"birthTextBox";
			this->birthTextBox->Size = System::Drawing::Size(230, 20);
			this->birthTextBox->TabIndex = 6;
			// 
			// addressTextBox
			// 
			this->addressTextBox->Location = System::Drawing::Point(137, 100);
			this->addressTextBox->Multiline = true;
			this->addressTextBox->Name = L"addressTextBox";
			this->addressTextBox->Size = System::Drawing::Size(230, 51);
			this->addressTextBox->TabIndex = 7;
			// 
			// mobileTextBox
			// 
			this->mobileTextBox->Location = System::Drawing::Point(137, 163);
			this->mobileTextBox->Name = L"mobileTextBox";
			this->mobileTextBox->Size = System::Drawing::Size(230, 20);
			this->mobileTextBox->TabIndex = 8;
			// 
			// emailTextBox
			// 
			this->emailTextBox->Location = System::Drawing::Point(137, 200);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(230, 20);
			this->emailTextBox->TabIndex = 9;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(174, 226);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 10;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			// 
			// addItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 261);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->mobileTextBox);
			this->Controls->Add(this->addressTextBox);
			this->Controls->Add(this->birthTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->birthDateLabel);
			this->Controls->Add(this->addressLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->mobileLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"addItemForm";
			this->Text = L"addItemForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
