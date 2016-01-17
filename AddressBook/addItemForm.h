#pragma once
#include<string>

namespace AddressBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace MySql::Data::MySqlClient;
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
	private: System::Windows::Forms::TextBox^  boxName;


	private: System::Windows::Forms::TextBox^  boxAddress;
	private: System::Windows::Forms::TextBox^  boxMobile;
	private: System::Windows::Forms::TextBox^  boxEmail;





	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Label^  lblMessage;
	private: System::Windows::Forms::DateTimePicker^  boxBirthdate;
	private: System::Windows::Forms::Label^  lblMsgMultiple;



	private: System::ComponentModel::IContainer^  components;


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
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->mobileLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->addressLabel = (gcnew System::Windows::Forms::Label());
			this->birthDateLabel = (gcnew System::Windows::Forms::Label());
			this->boxName = (gcnew System::Windows::Forms::TextBox());
			this->boxAddress = (gcnew System::Windows::Forms::TextBox());
			this->boxMobile = (gcnew System::Windows::Forms::TextBox());
			this->boxEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lblMessage = (gcnew System::Windows::Forms::Label());
			this->boxBirthdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblMsgMultiple = (gcnew System::Windows::Forms::Label());
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
			// boxName
			// 
			this->boxName->Location = System::Drawing::Point(137, 24);
			this->boxName->Name = L"boxName";
			this->boxName->Size = System::Drawing::Size(230, 20);
			this->boxName->TabIndex = 5;
			// 
			// boxAddress
			// 
			this->boxAddress->Location = System::Drawing::Point(137, 100);
			this->boxAddress->Multiline = true;
			this->boxAddress->Name = L"boxAddress";
			this->boxAddress->Size = System::Drawing::Size(230, 51);
			this->boxAddress->TabIndex = 7;
			// 
			// boxMobile
			// 
			this->boxMobile->Location = System::Drawing::Point(137, 163);
			this->boxMobile->Name = L"boxMobile";
			this->boxMobile->Size = System::Drawing::Size(230, 20);
			this->boxMobile->TabIndex = 8;
			// 
			// boxEmail
			// 
			this->boxEmail->Location = System::Drawing::Point(137, 200);
			this->boxEmail->Name = L"boxEmail";
			this->boxEmail->Size = System::Drawing::Size(230, 20);
			this->boxEmail->TabIndex = 9;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(137, 281);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 10;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &addItemForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(292, 281);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 11;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &addItemForm::btnCancel_Click);
			// 
			// lblMessage
			// 
			this->lblMessage->AutoSize = true;
			this->lblMessage->Location = System::Drawing::Point(137, 227);
			this->lblMessage->Name = L"lblMessage";
			this->lblMessage->Size = System::Drawing::Size(192, 13);
			this->lblMessage->TabIndex = 12;
			this->lblMessage->Text = L"Please, Fill Name and Date of Birth Box";
			// 
			// boxBirthdate
			// 
			this->boxBirthdate->Location = System::Drawing::Point(140, 64);
			this->boxBirthdate->Name = L"boxBirthdate";
			this->boxBirthdate->Size = System::Drawing::Size(227, 20);
			this->boxBirthdate->TabIndex = 13;
			// 
			// lblMsgMultiple
			// 
			this->lblMsgMultiple->AutoSize = true;
			this->lblMsgMultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMsgMultiple->ForeColor = System::Drawing::Color::Crimson;
			this->lblMsgMultiple->Location = System::Drawing::Point(32, 250);
			this->lblMsgMultiple->Name = L"lblMsgMultiple";
			this->lblMsgMultiple->Size = System::Drawing::Size(341, 13);
			this->lblMsgMultiple->TabIndex = 14;
			this->lblMsgMultiple->Text = L"If multiple mobile no and emial, put a comma between them";
			// 
			// addItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 316);
			this->Controls->Add(this->lblMsgMultiple);
			this->Controls->Add(this->boxBirthdate);
			this->Controls->Add(this->lblMessage);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->boxEmail);
			this->Controls->Add(this->boxMobile);
			this->Controls->Add(this->boxAddress);
			this->Controls->Add(this->boxName);
			this->Controls->Add(this->birthDateLabel);
			this->Controls->Add(this->addressLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->mobileLabel);
			this->Controls->Add(this->nameLabel);
			this->Name = L"addItemForm";
			this->Text = L"addItemForm";
			this->Load += gcnew System::EventHandler(this, &addItemForm::addItemForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {

				 
				 
				 if (this->boxName->Text != "" && this->boxBirthdate->Text != "")
				 {

					 StreamWriter^ fileWritter = File::AppendText("data.txt");
					 String ^ textToWrite = boxName->Text + ";" + boxBirthdate->Text + ";" + boxAddress->Text + ";" + boxMobile->Text + ";" + boxEmail->Text + ";";

					 fileWritter->WriteLine(textToWrite);
					 fileWritter->Close();
					 this->Close();
				 }
				 else
				 {
					 lblMessage->Show();
				 }

				 

				 
	}
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
}
private: System::Void addItemForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 lblMessage->Hide();
}
};
}
