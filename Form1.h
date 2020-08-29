#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f? Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf?en.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;
	protected:
		String^ KPMType = "B2C";
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton_B2C;
	private: System::Windows::Forms::RadioButton^ radioButton_B2B;
	private: System::Windows::Forms::Button^ button_Start;
	private: System::Windows::Forms::Button^ button_Pause;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code		
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_B2C = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_B2B = (gcnew System::Windows::Forms::RadioButton());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->button_Pause = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select KPM Excel File";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 54);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(460, 76);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(518, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 76);
			this->button1->TabIndex = 2;
			this->button1->Text = L"open file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton_B2C);
			this->groupBox1->Controls->Add(this->radioButton_B2B);
			this->groupBox1->Location = System::Drawing::Point(43, 153);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(697, 85);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"KPM Type";
			// 
			// radioButton_B2C
			// 
			this->radioButton_B2C->AutoSize = true;
			this->radioButton_B2C->Location = System::Drawing::Point(147, 35);
			this->radioButton_B2C->Name = L"radioButton_B2C";
			this->radioButton_B2C->Size = System::Drawing::Size(66, 22);
			this->radioButton_B2C->TabIndex = 1;
			this->radioButton_B2C->TabStop = true;
			this->radioButton_B2C->Text = L"B2C";
			this->radioButton_B2C->UseVisualStyleBackColor = true;
			this->radioButton_B2C->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_B2C_CheckedChanged);
			// 
			// radioButton_B2B
			// 
			this->radioButton_B2B->AutoSize = true;
			this->radioButton_B2B->Location = System::Drawing::Point(42, 35);
			this->radioButton_B2B->Name = L"radioButton_B2B";
			this->radioButton_B2B->Size = System::Drawing::Size(65, 22);
			this->radioButton_B2B->TabIndex = 0;
			this->radioButton_B2B->TabStop = true;
			this->radioButton_B2B->Text = L"B2B";
			this->radioButton_B2B->UseVisualStyleBackColor = true;
			this->radioButton_B2B->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_B2B_CheckedChanged);
			// 
			// button_Start
			// 
			this->button_Start->Location = System::Drawing::Point(46, 259);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(301, 96);
			this->button_Start->TabIndex = 4;
			this->button_Start->Text = L"Start";
			this->button_Start->UseVisualStyleBackColor = true;
			this->button_Start->Click += gcnew System::EventHandler(this, &Form1::button_Start_Click);
			// 
			// button_Pause
			// 
			this->button_Pause->Location = System::Drawing::Point(409, 259);
			this->button_Pause->Name = L"button_Pause";
			this->button_Pause->Size = System::Drawing::Size(331, 96);
			this->button_Pause->TabIndex = 5;
			this->button_Pause->Text = L"Pause";
			this->button_Pause->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 375);
			this->Controls->Add(this->button_Pause);
			this->Controls->Add(this->button_Start);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//openFileDialog1->InitialDirectory = "D:\\02_KPMTicketCreating";
		openFileDialog1->RestoreDirectory = true;
		openFileDialog1->Filter = "Excel Files|*.xlsm";
		openFileDialog1->Title = "Open KPM Excel";
		openFileDialog1->ShowDialog();

		textBox1->Text = openFileDialog1->FileName;
	}
	private: System::Void radioButton_B2B_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton_B2B->Checked == true)
			KPMType = "B2B";
	}
	private: System::Void radioButton_B2C_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton_B2C->Checked == true)
			KPMType = "B2C";
		Test22();
	}
	private: System::Void button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
		// Open Excel

		// Connect KPM

		// Creation
	}

		   //Additional Functions
		   void Test22();

		   //Variables			
	};
}
