#pragma once
#include "addItemForm.h"
#include "helpForm.h"

namespace AddressBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  insertItemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::TextBox^  searchTextBox;

	private: System::Windows::Forms::ListBox^  listBoxName;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  boxMobile;
	private: System::Windows::Forms::TextBox^  boxEmail;


	private: System::Windows::Forms::TextBox^  boxAddress;

	private: System::Windows::Forms::TextBox^  boxBirthdate;

	private: System::Windows::Forms::TextBox^  boxName;

	private: System::Windows::Forms::Label^  label9;









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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertItemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBoxName = (gcnew System::Windows::Forms::ListBox());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->boxMobile = (gcnew System::Windows::Forms::TextBox());
			this->boxEmail = (gcnew System::Windows::Forms::TextBox());
			this->boxAddress = (gcnew System::Windows::Forms::TextBox());
			this->boxBirthdate = (gcnew System::Windows::Forms::TextBox());
			this->boxName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->viewAllToolStripMenuItem, this->aboutToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(520, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->insertItemToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// insertItemToolStripMenuItem
			// 
			this->insertItemToolStripMenuItem->Name = L"insertItemToolStripMenuItem";
			this->insertItemToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->insertItemToolStripMenuItem->Text = L"Insert Item";
			this->insertItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::insertItemToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::exitToolStripMenuItem_Click);
			// 
			// viewAllToolStripMenuItem
			// 
			this->viewAllToolStripMenuItem->Name = L"viewAllToolStripMenuItem";
			this->viewAllToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->viewAllToolStripMenuItem->Text = L"View All ";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::aboutToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::helpToolStripMenuItem_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listBoxName);
			this->splitContainer1->Panel1->Controls->Add(this->searchTextBox);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->boxMobile);
			this->splitContainer1->Panel2->Controls->Add(this->boxEmail);
			this->splitContainer1->Panel2->Controls->Add(this->boxAddress);
			this->splitContainer1->Panel2->Controls->Add(this->boxBirthdate);
			this->splitContainer1->Panel2->Controls->Add(this->boxName);
			this->splitContainer1->Panel2->Controls->Add(this->label9);
			this->splitContainer1->Panel2->Controls->Add(this->label7);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Size = System::Drawing::Size(520, 299);
			this->splitContainer1->SplitterDistance = 212;
			this->splitContainer1->TabIndex = 1;
			// 
			// listBoxName
			// 
			this->listBoxName->FormattingEnabled = true;
			this->listBoxName->Location = System::Drawing::Point(3, 30);
			this->listBoxName->Name = L"listBoxName";
			this->listBoxName->Size = System::Drawing::Size(205, 264);
			this->listBoxName->Sorted = true;
			this->listBoxName->TabIndex = 1;
			this->listBoxName->SelectedIndexChanged += gcnew System::EventHandler(this, &mainForm::listBoxName_SelectedIndexChanged);
			// 
			// searchTextBox
			// 
			this->searchTextBox->Location = System::Drawing::Point(3, 4);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(205, 20);
			this->searchTextBox->TabIndex = 2;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &mainForm::searchTextBox_TextChanged);
			// 
			// boxMobile
			// 
			this->boxMobile->Location = System::Drawing::Point(110, 183);
			this->boxMobile->Multiline = true;
			this->boxMobile->Name = L"boxMobile";
			this->boxMobile->ReadOnly = true;
			this->boxMobile->Size = System::Drawing::Size(182, 45);
			this->boxMobile->TabIndex = 1;
			// 
			// boxEmail
			// 
			this->boxEmail->Location = System::Drawing::Point(110, 246);
			this->boxEmail->Multiline = true;
			this->boxEmail->Name = L"boxEmail";
			this->boxEmail->ReadOnly = true;
			this->boxEmail->Size = System::Drawing::Size(182, 41);
			this->boxEmail->TabIndex = 1;
			// 
			// boxAddress
			// 
			this->boxAddress->Location = System::Drawing::Point(110, 116);
			this->boxAddress->Multiline = true;
			this->boxAddress->Name = L"boxAddress";
			this->boxAddress->ReadOnly = true;
			this->boxAddress->Size = System::Drawing::Size(182, 48);
			this->boxAddress->TabIndex = 1;
			// 
			// boxBirthdate
			// 
			this->boxBirthdate->Location = System::Drawing::Point(110, 72);
			this->boxBirthdate->Name = L"boxBirthdate";
			this->boxBirthdate->ReadOnly = true;
			this->boxBirthdate->Size = System::Drawing::Size(182, 20);
			this->boxBirthdate->TabIndex = 1;
			// 
			// boxName
			// 
			this->boxName->Location = System::Drawing::Point(110, 30);
			this->boxName->Name = L"boxName";
			this->boxName->ReadOnly = true;
			this->boxName->Size = System::Drawing::Size(182, 20);
			this->boxName->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(21, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 15);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Email";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Mobile";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 15);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Date of Birth";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 323);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
	}
	private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void searchTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 String ^ conString = L"datasource = localhost; port = 3306;username=root; password=1107002";
				 MySqlConnection^ conn = gcnew MySqlConnection(conString);
				 MySqlCommand^ cmd = gcnew MySqlCommand("select * from database.personinfo where name like '"+searchTextBox->Text+"' '%' ;", conn);

				 MySqlDataReader^ myReader;

				 try
				 {
					 listBoxName->Items->Clear();
					 conn->Open();
					 myReader = cmd->ExecuteReader();;
					 while (myReader->Read())
					 {
						 String^ name = myReader->GetString("name");
						 listBoxName->Items->Add(name);
					 }
					 conn->Close();

				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
	}

private: System::Void insertItemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 addItemForm^ addItemform = gcnew addItemForm();
			 addItemform->Show();
			 
}

private: System::Void listBoxName_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			 String ^ selectedText = listBoxName->Text;

			 String ^ conString = L"datasource = localhost; port = 3306;username=root; password=1107002";
			 MySqlConnection^ conn = gcnew MySqlConnection(conString);
			 MySqlCommand^ cmd = gcnew MySqlCommand("select * from database.personinfo where name = '"+selectedText+ "';", conn);

			 MySqlDataReader^ myReader;

			 try
			 {
				 conn->Open();
				 myReader = cmd->ExecuteReader();;
				 if (myReader->Read())
				 {
					 boxName->Text = myReader->GetString("name");
					 boxAddress->Text = myReader->GetString("address");
					 boxBirthdate->Text = myReader->GetString("birthdate");
					 boxMobile->Text = myReader->GetString("mobile");
					 boxEmail->Text = myReader->GetString("email");
				 }
				 conn->Close();
				 
				 

			 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }

}
private: System::Void mainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 String ^ conString = L"datasource = localhost; port = 3306;username=root; password=1107002";
			 MySqlConnection^ conn = gcnew MySqlConnection(conString);
			 MySqlCommand^ cmd = gcnew MySqlCommand("select * from database.personinfo;", conn);

			 MySqlDataReader^ myReader;

			 try
			 {
				 conn->Open();
				 myReader = cmd->ExecuteReader();;
				 while (myReader->Read())
				 {
					 String^ name = myReader->GetString("name");
					 listBoxName->Items->Add(name);
				 }

			 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("This is Developed By \nMd.Abdulla-Al-Sun\nMail:sunkuet02@gmail.com \nCSE 2K11,KUET");
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 helpForm^ hForm = gcnew helpForm();
			 hForm->Show();
}
};
}
