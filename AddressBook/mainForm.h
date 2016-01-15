#pragma once
#include "addItemForm.h"

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
	private: System::Windows::Forms::ListView^  showListName;
	private: System::Windows::Forms::TextBox^  searchTextBox;
	private: System::Windows::Forms::TextBox^  tempTextBox;






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
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->showListName = (gcnew System::Windows::Forms::ListView());
			this->tempTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->menuStrip1->Size = System::Drawing::Size(455, 24);
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
			this->insertItemToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->insertItemToolStripMenuItem->Text = L"Insert Item";
			this->insertItemToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::insertItemToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
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
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 24);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->searchTextBox);
			this->splitContainer1->Panel1->Controls->Add(this->showListName);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainForm::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tempTextBox);
			this->splitContainer1->Size = System::Drawing::Size(455, 299);
			this->splitContainer1->SplitterDistance = 242;
			this->splitContainer1->TabIndex = 1;
			// 
			// searchTextBox
			// 
			this->searchTextBox->Location = System::Drawing::Point(3, 4);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(236, 20);
			this->searchTextBox->TabIndex = 2;
			this->searchTextBox->TextChanged += gcnew System::EventHandler(this, &mainForm::searchTextBox_TextChanged);
			// 
			// showListName
			// 
			this->showListName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showListName->Location = System::Drawing::Point(3, 30);
			this->showListName->MultiSelect = false;
			this->showListName->Name = L"showListName";
			this->showListName->Size = System::Drawing::Size(236, 257);
			this->showListName->Sorting = System::Windows::Forms::SortOrder::Ascending;
			this->showListName->TabIndex = 1;
			this->showListName->UseCompatibleStateImageBehavior = false;
			this->showListName->View = System::Windows::Forms::View::List;
			this->showListName->SelectedIndexChanged += gcnew System::EventHandler(this, &mainForm::showListName_SelectedIndexChanged);
			// 
			// tempTextBox
			// 
			this->tempTextBox->Location = System::Drawing::Point(38, 100);
			this->tempTextBox->Name = L"tempTextBox";
			this->tempTextBox->Size = System::Drawing::Size(100, 20);
			this->tempTextBox->TabIndex = 0;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 323);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"mainForm";
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

	}
	private: System::Void showListName_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 System::Collections::IEnumerator^ myEnum = this->showListName->SelectedItems->GetEnumerator();
				 
				 while (myEnum->MoveNext()){

					 ListViewItem^ item = safe_cast<ListViewItem^>(myEnum->Current);
					 tempTextBox->Text = safe_cast<ListViewItem^>(myEnum->Current)->Text;
				 }
				 
				  
	}
private: System::Void insertItemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 addItemForm^ addItemform = gcnew addItemForm();
			 addItemform->Show();
			 this->Hide();
}
};
}
