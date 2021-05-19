#pragma once
#include "Ludzie.h"
#include "MyForm5.h"

namespace projektsemestralny {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Security;



	/// <summary>
	/// Podsumowanie informacji o MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Ludzie^ czlowiek;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}
		MyForm4(Ludzie^ arg_czlowiek)
		{
			InitializeComponent();
			textBox1->Text = arg_czlowiek->imie;
			textBox2->Text = arg_czlowiek->nazwisko;
			textBox3->Text = arg_czlowiek->email;
			textBox4->Text = arg_czlowiek->data_ur;
			textBox5->Text = arg_czlowiek->pesel;
			if (arg_czlowiek->plec == "K")checkBox1->Checked = true;
			else if (arg_czlowiek->plec == "M")checkBox2->Checked = true;
			else checkBox3->Checked = true;
			
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Imiê";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nazwisko";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"adres e-mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(333, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"data urodzenia";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(333, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"nr PESEL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"P³eæ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(132, 166);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(363, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(425, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(425, 106);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(147, 20);
			this->textBox5->TabIndex = 10;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(136, 227);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(62, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Kobieta";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(204, 227);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 17);
			this->checkBox2->TabIndex = 13;
			this->checkBox2->Text = L"Mê¿czyzna";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(289, 227);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 17);
			this->checkBox3->TabIndex = 14;
			this->checkBox3->Text = L"Inne";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm4::checkBox3_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(493, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 42);
			this->button1->TabIndex = 15;
			this->button1->Text = L"DALEJ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 42);
			this->button2->TabIndex = 16;
			this->button2->Text = L"WSTECZ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(425, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"DD.MM.RRRR";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(630, 426);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm4";
			this->Text = L"DODAJ NOW¥ OSOBÊ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	//private: List <Ludzie^> tablica;
	private: MyForm5^ zatwierdz_forma;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ p = "0";
		Exception^ wyj;
		try
		{
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "")
				throw wyj = gcnew Exception("nie wszystkie pola s¹ wype³nione");
			if (checkBox1->Checked == true) { p = "K"; }
			else if (checkBox2->Checked == true) { p = "M"; }
			else if (checkBox3->Checked == true) { p = "I"; }
			else throw wyj = gcnew Exception("nie zaznaczono pola p³ci");
			if(textBox1->Text->Contains("0") || textBox1->Text->Contains("1") || textBox1->Text->Contains("2") ||
				textBox1->Text->Contains("3") || textBox1->Text->Contains("4") || textBox1->Text->Contains("5") ||
				textBox1->Text->Contains("6") || textBox1->Text->Contains("7") || textBox1->Text->Contains("8") ||
				textBox1->Text->Contains("9")) throw wyj = gcnew Exception("Imiê nie mo¿e zawieraæ cyfr");
			if (textBox2->Text->Contains("0") || textBox2->Text->Contains("1") || textBox2->Text->Contains("2") ||
				textBox2->Text->Contains("3") || textBox2->Text->Contains("4") || textBox2->Text->Contains("5") ||
				textBox2->Text->Contains("6") || textBox2->Text->Contains("7") || textBox2->Text->Contains("8") ||
				textBox2->Text->Contains("9")) throw wyj = gcnew Exception("Nazwisko nie mo¿e zawieraæ cyfr");
			if (textBox4->Text[2] != '.'|| textBox4->Text[5] != '.'|| textBox4->Text->Length != 10)throw wyj = gcnew Exception("Z³y format daty");
			if (textBox5->Text->Length != 11 )throw wyj = gcnew Exception("Z³y format numeru PESEL");
			if (!(textBox3->Text->Contains("@") && textBox3->Text->Contains(".")))throw wyj = gcnew Exception("Z³y format e-maila");
			DateTime teraz = DateTime::Now;
			czlowiek = gcnew Ludzie
			(
				textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text,
				textBox5->Text, p, teraz
			);
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		zatwierdz_forma = gcnew MyForm5(czlowiek);
		//zatwierdz_forma->Show();
		zatwierdz_forma->ShowDialog();
		if (zatwierdz_forma->zatwierdzone)
		{
			Close();
			f4zatwierdzone = 1;
		}
	}
	public: bool f4zatwierdzone = 0;
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			checkBox2->Checked = false;
			checkBox3->Checked = false;
		}
	};
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked == true)
		{
			checkBox1->Checked = false;
			checkBox3->Checked = false;
		}
	}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked == true)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
	}
}
};
};
