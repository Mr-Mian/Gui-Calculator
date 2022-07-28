#pragma once



namespace CppCLRWinformsProjekt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button18;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 73);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(87, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 73);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(171, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 73);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(2, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 64);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(87, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(78, 63);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(171, 158);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 63);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(2, 229);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 63);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(87, 228);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 63);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button9->Location = System::Drawing::Point(171, 228);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 63);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button10->Location = System::Drawing::Point(2, 298);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 70);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button12->Location = System::Drawing::Point(263, 78);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 74);
			this->button12->TabIndex = 11;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button13->Location = System::Drawing::Point(263, 155);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 66);
			this->button13->TabIndex = 12;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button14->Location = System::Drawing::Point(263, 229);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 60);
			this->button14->TabIndex = 13;
			this->button14->Text = L"×";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button15->Location = System::Drawing::Point(263, 295);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 73);
			this->button15->TabIndex = 14;
			this->button15->Text = L"÷";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button16->Location = System::Drawing::Point(344, 79);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 142);
			this->button16->TabIndex = 15;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::IndianRed;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(346, 228);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(81, 140);
			this->button17->TabIndex = 16;
			this->button17->Text = L"CE";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button19->Location = System::Drawing::Point(0, 12);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(427, 62);
			this->button19->TabIndex = 18;
			this->button19->Text = L"0";
			this->button19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button11->Location = System::Drawing::Point(83, 298);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(86, 70);
			this->button11->TabIndex = 19;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click_1);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button18->Location = System::Drawing::Point(182, 298);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 70);
			this->button18->TabIndex = 20;
			this->button18->Text = L"⌫";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(428, 380);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"CALCULATOR";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		double firstnum, secnum, result;
		char op;
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button19->Text == "0")
		{
			button19->Text = "5";
		}
		else
		{
			button19->Text = button19->Text + button5->Text;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button19->Text == "0")
		{
			button19->Text = "3";
		}
		else
		{
			button19->Text = button19->Text + button3->Text;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (button19->Text == "0")
		{
			button19->Text = "1";
		}
		else
		{
			button19->Text = button19->Text + button1->Text;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button19->Text == "0")
		{
			button19->Text = "2";
		}
		else
		{
			button19->Text = button19->Text + button2->Text;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button19->Text == "0")
		{
			button19->Text = "4";
		}
		else
		{
			button19->Text = button19->Text + button4->Text;
		}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button19->Text == "0")
	{
		button19->Text = "6";
	}
	else
	{
		button19->Text = button19->Text + button6->Text;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button19->Text == "0")
	{
		button19->Text = "7";
	}
	else
	{
		button19->Text = button19->Text + button7->Text;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button19->Text == "0")
	{
		button19->Text = "8";
	}
	else
	{
		button19->Text = button19->Text + button8->Text;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button19->Text == "0")
	{
		button19->Text = "9";
	}
	else
	{
		button19->Text = button19->Text + button9->Text;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
		{
	firstnum = Convert::ToDouble(button19->Text);
	button19->Text = "0";
	op = '/';
		}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button19->Text == "0")
	{
		button19->Text = "0";
	}
	else
	{
		button19->Text = button19->Text + button10->Text;
	}
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button19->Text = "0";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) 
{
	firstnum = Convert::ToDouble(button19->Text);
	int neew = firstnum / 10;
	button19->Text = Convert::ToString(neew);

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	firstnum = Convert::ToDouble(button19->Text);
	button19->Text = "0";
	op= '+';
	}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
		{
	firstnum = Convert::ToDouble(button19->Text);
	button19->Text = "0";
	op = '-';
		}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) 
		{
	firstnum = Convert::ToDouble(button19->Text);
	button19->Text = "0";
	op = '*';
		}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (button19->Text == "123456789")
			{
				button19->Text = "Coded by Mian Qasim";
			}

			else
			{
			secnum = Convert::ToDouble(button19->Text);
			switch (op)
			{
			case '+':
				result = firstnum + secnum;
				break;
			case '-':
				result = firstnum - secnum;
				break;
			case '*':
				result = firstnum * secnum;
				break;
			case '/':
				result = firstnum / secnum;
				break;
			default:
				break;
			}
			button19->Text = Convert::ToString(result);
			}
		}
	  
	private: System::Void button11_Click_1(System::Object ^ sender, System::EventArgs ^ e)
	{
		firstnum = Convert::ToDouble(button19->Text);

		if (int(firstnum)==firstnum)
		{
			button19->Text = button19->Text + ".";
		}
		else
		{
			button19->Text = button19->Text;
		}
		
	   }
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) 
{
}

};
}