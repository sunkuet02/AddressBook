#pragma once

namespace AddressBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for helpForm
	/// </summary>
	public ref class helpForm : public System::Windows::Forms::Form
	{
	public:
		helpForm(void)
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
		~helpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  boxHelp;
	protected:
	private: System::Windows::Forms::Button^  btnClose;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(helpForm::typeid));
			this->boxHelp = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// boxHelp
			// 
			this->boxHelp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boxHelp->Location = System::Drawing::Point(0, 0);
			this->boxHelp->Multiline = true;
			this->boxHelp->Name = L"boxHelp";
			this->boxHelp->ReadOnly = true;
			this->boxHelp->Size = System::Drawing::Size(271, 177);
			this->boxHelp->TabIndex = 0;
			this->boxHelp->Text = resources->GetString(L"boxHelp.Text");
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->Location = System::Drawing::Point(89, 183);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(75, 23);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &helpForm::btnClose_Click);
			// 
			// helpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(271, 209);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->boxHelp);
			this->Name = L"helpForm";
			this->Text = L"helpForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
	};
}
