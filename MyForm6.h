#pragma once
#include "Ludzie.h"


namespace projektsemestralny {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::SqlServer::Dts::Runtime;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Net::Mail;

	/// <summary>
	/// Podsumowanie informacji o MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		MyForm6(Ludzie^ arg_czlowiek)
		{
			InitializeComponent();
			label1->Text = "Wysy³asz maila do osoby: " + arg_czlowiek->imie + " " + arg_czlowiek->nazwisko + " " + arg_czlowiek->plec;
			label3->Text = arg_czlowiek->email;

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wysy³asz maila do osoby:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"na adres: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 169);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(587, 367);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(9, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Poni¿ej wpisz treœæ maila";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(506, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"WYŒLIJ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(9, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Poni¿ej wpisz tytu³ maila";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 20);
			this->textBox1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(384, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 51);
			this->button2->TabIndex = 9;
			this->button2->Text = L"WSTECZ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 548);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm6";
			this->Text = L"KREATOR EMAILA";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Boolean wyslano = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*StreamWriter^ zapis = gcnew StreamWriter("email.txt");
		zapis->Flush();
		zapis->WriteLine(richTextBox1->Text);
		zapis->Close();*/
		Exception^ wyj;
		try
		{
			if (textBox1->Text=="")throw wyj = gcnew Exception("nie wpisano tytu³u maila");
			if (richTextBox1->Text=="")throw wyj = gcnew Exception("nie treœci maila");
			MailMessage^ mail = gcnew MailMessage("jerzawserver@gmail.com", label3->Text, textBox1->Text, richTextBox1->Text);
			SmtpClient^ smtpclient = gcnew SmtpClient("smtp.gmail.com", 587);
			smtpclient->EnableSsl = true;
			smtpclient->UseDefaultCredentials = false;
			smtpclient->DeliveryMethod = System::Net::Mail::SmtpDeliveryMethod::Network;
			smtpclient->Credentials = gcnew System::Net::NetworkCredential("jerzawserver@gmail.com", "Jerzawos:7");
			smtpclient->Send(mail);
		}
		catch(Exception ^ e)
		{
			MessageBox::Show(e->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		};
		wyslano = 1;
		Close();
		
		/*Package^ pkg;
		Microsoft::SqlServer::Dts::Runtime::Application^ app;
		app = gcnew Microsoft::SqlServer::Dts::Runtime::Application;
		String^ sciezka = "Package.dtsx";
		pkg = app->LoadPackage(sciezka, nullptr);
		pkg->Execute();*/

	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
