#pragma once
#include "Ludzie.h"
#include "MyForm4.h"
#include "MyForm6.h"
#include "MyForm7.h"


namespace projektsemestralny {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Collections;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			StreamReader^ odczyt = File::OpenText("ludzie.txt");
			String^ str;
			String^ imie;
			String^ nazwisko;
			String^ email;
			String^ data_ur;
			String^ pesel;
			String^ plec;
			DateTimeConverter a;
			DateTime b;

			while ((str = odczyt->ReadLine()) != nullptr)
			{
				imie = str;
				nazwisko = odczyt->ReadLine();
				email = odczyt->ReadLine();
				data_ur = odczyt->ReadLine();
				pesel = odczyt->ReadLine();
				plec = odczyt->ReadLine();
				//a.ConvertFromString(odczyt->ReadLine());
				b = Convert::ToDateTime(odczyt->ReadLine());
				Ludzie^ ludek;
				ludek = gcnew Ludzie(imie, nazwisko, email, data_ur, pesel, plec, b);
				lista_ludzi.Add(ludek);

			}
			odczyt->Close();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListView^ listView1;

	private:


	private:

	private: System::Windows::Forms::ColumnHeader^ imie;
	private: System::Windows::Forms::ColumnHeader^ nazwisko;
	private: System::Windows::Forms::ColumnHeader^ pesel;
	private: System::Windows::Forms::ColumnHeader^ data_ur;
	private: System::Windows::Forms::ColumnHeader^ plec;
	private: System::Windows::Forms::ColumnHeader^ email;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button8;







	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->pesel = (gcnew System::Windows::Forms::ColumnHeader());
			this->imie = (gcnew System::Windows::Forms::ColumnHeader());
			this->nazwisko = (gcnew System::Windows::Forms::ColumnHeader());
			this->data_ur = (gcnew System::Windows::Forms::ColumnHeader());
			this->plec = (gcnew System::Windows::Forms::ColumnHeader());
			this->email = (gcnew System::Windows::Forms::ColumnHeader());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(246, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"EDYTUJ DANE OSOBY";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(31, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"DODAJ NOW¥ OSOBÊ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(227, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wpisz do pola nr PESEL osoby, \r\nktórej dane chcesz edytowaæ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"kliknij by dodaæ now¹ osobê";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(460, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Wpisz do pola nr PESEL osoby, \r\nktórej dane chcesz usun¹æ z bazy danych";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(484, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 47);
			this->button3->TabIndex = 6;
			this->button3->Text = L"USUÑ DANE OSOBY";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(463, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 20);
			this->textBox2->TabIndex = 7;
			// 
			// listView1
			// 
			this->listView1->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->listView1->BackColor = System::Drawing::SystemColors::Window;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->pesel, this->imie,
					this->nazwisko, this->data_ur, this->plec, this->email
			});
			this->listView1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->LabelWrap = false;
			this->listView1->Location = System::Drawing::Point(31, 213);
			this->listView1->MaximumSize = System::Drawing::Size(1000, 1000);
			this->listView1->MinimumSize = System::Drawing::Size(100, 100);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->ShowGroups = false;
			this->listView1->Size = System::Drawing::Size(781, 259);
			this->listView1->TabIndex = 8;
			this->listView1->TileSize = System::Drawing::Size(100, 100);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			this->listView1->ItemActivate += gcnew System::EventHandler(this, &MyForm1::listView1_ItemActivate);
			this->listView1->Click += gcnew System::EventHandler(this, &MyForm1::listView1_Click);
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &MyForm1::listView1_DoubleClick);
			// 
			// pesel
			// 
			this->pesel->DisplayIndex = 2;
			this->pesel->Text = L"PESEL";
			this->pesel->Width = 117;
			// 
			// imie
			// 
			this->imie->DisplayIndex = 0;
			this->imie->Text = L"Imiê";
			this->imie->Width = 83;
			// 
			// nazwisko
			// 
			this->nazwisko->DisplayIndex = 1;
			this->nazwisko->Text = L"Nazwisko";
			this->nazwisko->Width = 102;
			// 
			// data_ur
			// 
			this->data_ur->Text = L"Data urodzenia";
			this->data_ur->Width = 105;
			// 
			// plec
			// 
			this->plec->Text = L"P³eæ";
			this->plec->Width = 56;
			// 
			// email
			// 
			this->email->Text = L"adres e-mail";
			this->email->Width = 175;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(440, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Podwójnie kliknij w dowolny wpis by zmieniæ widok tabeli";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(760, 69);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 46);
			this->button4->TabIndex = 10;
			this->button4->Text = L"WYŒLIJ MAILA";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(739, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox3_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(736, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 26);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Wpisz do pola nr PESEL osoby, \r\ndo której chcesz wys³aæ maila";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 194);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(530, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Kliknij pojedynczo by automatycznie wprowadziæ nr pesel do kontrolek";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(818, 213);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 45);
			this->button5->TabIndex = 14;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(28, 495);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label8->Location = System::Drawing::Point(99, 495);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// chart1
			// 
			chartArea1->Area3DStyle->LightStyle = System::Windows::Forms::DataVisualization::Charting::LightStyle::Realistic;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(943, 68);
			this->chart1->Name = L"chart1";
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::DiagonalRight;
			series1->BackImageTransparentColor = System::Drawing::Color::Blue;
			series1->BackSecondaryColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series1->ChartArea = L"ChartArea1";
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(429, 444);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label9->Location = System::Drawing::Point(943, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(429, 18);
			this->label9->TabIndex = 18;
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(360, 480);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 46);
			this->button6->TabIndex = 19;
			this->button6->Text = L"SprawdŸ urodziny";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Iloœæ osób urodzonych w danym dniu", L"Iloœæ osób urodzonych w danym miesi¹cu",
					L"Iloœæ osób urodzonych w danym roku", L"Rodzaje serwisów mailowych", L"dodawanie/edycja rekordów na przestrzeni czasu"
			});
			this->comboBox1->Location = System::Drawing::Point(943, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(277, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1235, 30);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 31);
			this->button7->TabIndex = 21;
			this->button7->Text = L"ZA£ADUJ WYKRES";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(943, 21);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"wybierz rodzaj wykresu";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(516, 495);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(236, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Ostatni rekord w bazie zosta³ zmieniony/dodany:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(569, 513);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(516, 514);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"By³o to:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(757, 495);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"label14";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1186, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(34, 22);
			this->button8->TabIndex = 27;
			this->button8->Text = L"2D";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1384, 536);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"BAZA DANYCH";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		listupdate();
		timer1->Start();

	}
	private: List<Ludzie^> lista_ludzi;
	private:
		/// <summary>

		MyForm4^ dodaj_osobe_forma;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		dodaj_osobe_forma = gcnew MyForm4;
		//gry_forma->Show();
		dodaj_osobe_forma->ShowDialog();
		if (dodaj_osobe_forma->f4zatwierdzone)
		{
			lista_ludzi.Add(dodaj_osobe_forma->czlowiek);
			MessageBox::Show("Dodano dane osoby o peselu nr " + dodaj_osobe_forma->czlowiek->pesel, "DANE ZOSTA£Y DODANE", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		//label5->Text = lista_ludzi.Capacity.ToString();
		textBox1->Text = "";
		textBox2->Text = "";
		listupdate();
	}

	private:
		/// <summary>
		MyForm4^ wyszukiwanie_forma;
	private: int i;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
		textBox3->Text = "";
		i = 0;
		try
		{
			while (lista_ludzi[i]->pesel != textBox1->Text)
			{
				i++;
			};
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Nie znaleziono osoby o danym numerze PESEL, jeœli chcesz dodaæ now¹ osobê kliknij przycisk 'DODAJ NOW¥ OSOBÊ'", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		wyszukiwanie_forma = gcnew MyForm4(lista_ludzi[i]);
		//wyszukiwanie_forma->Show();
		wyszukiwanie_forma->ShowDialog();
		if (wyszukiwanie_forma->f4zatwierdzone)
		{
			lista_ludzi[i]->imie = wyszukiwanie_forma->czlowiek->imie;
			lista_ludzi[i]->nazwisko = wyszukiwanie_forma->czlowiek->nazwisko;
			lista_ludzi[i]->email = wyszukiwanie_forma->czlowiek->email;
			lista_ludzi[i]->data_ur = wyszukiwanie_forma->czlowiek->data_ur;
			lista_ludzi[i]->pesel = wyszukiwanie_forma->czlowiek->pesel;
			lista_ludzi[i]->plec = wyszukiwanie_forma->czlowiek->plec;
			lista_ludzi[i]->czas = wyszukiwanie_forma->czlowiek->czas;
			MessageBox::Show("Zedytowano dane osoby o peselu nr " + textBox1->Text, "DOKONANO EDYCJI", MessageBoxButtons::OK, MessageBoxIcon::None);
			textBox1->Text = "";
		};
		listupdate();
	}

	private: System::Void MyForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Czy na pewno chcesz wyjœc z bazy danych?", "Wybierz jedn¹ z opcji:", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::No)
			e->Cancel = true;
	}
	private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		StreamWriter^ zapis = gcnew StreamWriter("ludzie.txt");
		zapis->Flush();
		lista_ludzi.TrimExcess();
		for (int j = 0; j < lista_ludzi.Count; j++)
		{
			zapis->WriteLine(lista_ludzi[j]->imie);
			zapis->WriteLine(lista_ludzi[j]->nazwisko);
			zapis->WriteLine(lista_ludzi[j]->email);
			zapis->WriteLine(lista_ludzi[j]->data_ur);
			zapis->WriteLine(lista_ludzi[j]->pesel);
			zapis->WriteLine(lista_ludzi[j]->plec);
			zapis->WriteLine(lista_ludzi[j]->czas.ToString());
		}
		zapis->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox3->Text = "";
		i = 0;
		try
		{
			while (lista_ludzi[i]->pesel != textBox2->Text)
			{
				i++;
			};
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Nie znaleziono osoby o danym numerze PESEL, jeœli chcesz dodaæ now¹ osobê kliknij przycisk 'DODAJ NOW¥ OSOBÊ'", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (MessageBox::Show("Czy na pewno chcesz usun¹æ tê osobê z bazy danych? Uwaga! Jest to NIEODWRACALNE", "Wybierz jedn¹ z opcji:", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)
			== System::Windows::Forms::DialogResult::Yes)
		{
			lista_ludzi.RemoveAt(i);
			MessageBox::Show("Usuniêto osobê o peselu nr " + textBox2->Text, "USUNIÊTO", MessageBoxButtons::OK, MessageBoxIcon::None);
			textBox2->Text = "";
			listupdate();
		};
	}
	public: DateTime dpom = DateTime::MinValue;
	public: bool operator>(Ludzie^ a)
	{
		Ludzie^ b = gcnew Ludzie;
		return a->data_ur->CompareTo(b->data_ur);
	}
	private: System::Void listupdate()
	{
		listView1->Items->Clear();
		ListViewItem^ item1;
		lista_ludzi.TrimExcess();
		DateTime pom2 = DateTime::Now;
		for (int j = 0; j < lista_ludzi.Count; j++)
		{
			item1 = gcnew ListViewItem(lista_ludzi[j]->pesel);
			item1->SubItems->Add(lista_ludzi[j]->imie);
			item1->SubItems->Add(lista_ludzi[j]->nazwisko);
			item1->SubItems->Add(lista_ludzi[j]->data_ur);
			item1->SubItems->Add(lista_ludzi[j]->plec);
			item1->SubItems->Add(lista_ludzi[j]->email);
			listView1->Items->Add(item1);
			if (lista_ludzi[j]->czas > dpom)dpom = lista_ludzi[j]->czas;
		}
		label14->Text = dpom.ToString();
		label12->Text = pom2.Subtract(dpom).Days.ToString() + " dni " + pom2.Subtract(dpom).Hours.ToString() + " godzin " + pom2.Subtract(dpom).Minutes.ToString() + " minut " + pom2.Subtract(dpom).Seconds.ToString() + " sekund temu";
	}
	private: Void timeupdate()
	{
		DateTime pom2 = DateTime::Now;
		label12->Text = pom2.Subtract(dpom).Days.ToString() + " dni " + pom2.Subtract(dpom).Hours.ToString() + " godzin " + pom2.Subtract(dpom).Minutes.ToString() + " minut " + pom2.Subtract(dpom).Seconds.ToString() + " sekund temu";
	}
	private: List<String^> pom_lista;
	private: String^ dat2string(DateTime data)
	{
		String^ uro_date;
		if (data.Day.ToString()->Length == 1)
			uro_date = "0" + data.Day.ToString();
		else uro_date = data.Day.ToString();
		if (data.Month.ToString()->Length == 1)
			uro_date += ".0" + data.Month.ToString();
		else uro_date = "." + data.Month.ToString();
		uro_date += "." + data.Year.ToString();
		return uro_date;
	}
	private: System::Void chartupdate()
	{
		chart1->Series->Clear();
		chart1->Series->Add("Series1");
		chart1->Series["Series1"]->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
		chart1->Series["Series1"]->Color = System::Drawing::Color::ForestGreen;
		chart1->Series["Series1"]->BackSecondaryColor = System::Drawing::Color::DarkOliveGreen;
		chart1->Series["Series1"]->BorderWidth = 5;
		chart1->ChartAreas["ChartArea1"]->BackColor = System::Drawing::Color::Beige;
		lista_ludzi.TrimExcess();
		Exception^ e;
		pom_lista.Clear();
		pom_lista.TrimExcess();
		try
		{
			if (!comboBox1->SelectedItem) {
				e = gcnew Exception("Nie wybrano rodzaju wykresu!"); throw e;
			}
			if (comboBox1->SelectedItem->ToString() == "Iloœæ osób urodzonych w danym dniu")
			{
				List<DateTime> lista_datur;
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					lista_datur.Add(Convert::ToDateTime(lista_ludzi[j]->data_ur));
				}
				lista_datur.TrimExcess();
				lista_datur.Sort();
				chart1->Series["Series1"]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				lista_datur.Add(DateTime::MinValue);
				for (int j = 0; j < lista_datur.Count; j++)
				{
					int pom = 0;
					for (int l = j; l < lista_datur.Count; l++)
					{
					if (lista_datur[j] == lista_datur[l])
						{
							pom++;
						}
						else
						{
							String^ uro_date = dat2string(lista_datur[j]);
							chart1->Series["Series1"]->Points->AddXY(uro_date, pom);
							l = lista_datur.Count;
							j += pom-1;
						}
					}
				}
			}
			else if (comboBox1->SelectedItem->ToString() == "Iloœæ osób urodzonych w danym miesi¹cu")
			{
				List<String^> lista_datur;
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					lista_datur.Add(lista_ludzi[j]->data_ur->Substring(3,2));
				}
				lista_datur.TrimExcess();
				lista_datur.Sort();
				chart1->Series["Series1"]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				lista_datur.Add("");
				for (int j = 0; j < lista_datur.Count; j++)
				{
					int pom = 0;
					for (int l = j; l < lista_datur.Count; l++)
					{
						if (lista_datur[j] == lista_datur[l])
						{
							pom++;
						}
						else
						{
							String^ uro_date;
							if (lista_datur[j]->Length == 1)
							uro_date += "0" + lista_datur[j];
							else uro_date = lista_datur[j];
							chart1->Series["Series1"]->Points->AddXY(uro_date, pom);
							l = lista_datur.Count;
							j += pom - 1;
						}
					}
				}
			}
			else if (comboBox1->SelectedItem->ToString() == "Iloœæ osób urodzonych w danym roku")
			{
				List<String^> lista_datur;
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					lista_datur.Add(lista_ludzi[j]->data_ur->Substring(6, 4));
				}
				lista_datur.TrimExcess();
				lista_datur.Sort();
				chart1->Series["Series1"]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
				lista_datur.Add("");
				for (int j = 0; j < lista_datur.Count; j++)
				{
					int pom = 0;
					for (int l = j; l < lista_datur.Count; l++)
					{
						if (lista_datur[j] == lista_datur[l])
						{
							pom++;
						}
						else
						{
							String^ uro_date;
							if (lista_datur[j]->Length == 1)
								uro_date += "0" + lista_datur[j];
							else uro_date = lista_datur[j];
							chart1->Series["Series1"]->Points->AddXY(uro_date, pom);
							l = lista_datur.Count;
							j += pom - 1;
						}
					}
				}
			}
			else if (comboBox1->SelectedItem->ToString() == "Rodzaje serwisów mailowych")
			{
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					pom_lista.Add(lista_ludzi[j]->email->Substring(lista_ludzi[j]->email->IndexOf('@') + 1));
				};
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					int pom = 0;
					if (pom_lista[j] != "0")
					{
						for (int l = 0; l < lista_ludzi.Count; l++)
						{
							String^ apom = lista_ludzi[j]->email->Substring(lista_ludzi[j]->email->IndexOf('@') + 1);
							String^ bpom = lista_ludzi[l]->email->Substring(lista_ludzi[l]->email->IndexOf('@') + 1);
							if (apom == bpom)
							{
								pom++;
								pom_lista[l] = "0";
							}
						}
						chart1->Series["Series1"]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
						chart1->Series["Series1"]->Points->AddXY(lista_ludzi[j]->email->Substring(lista_ludzi[j]->email->IndexOf('@') + 1), pom);
					}
				}
			}
			else if (comboBox1->SelectedItem->ToString() == "dodawanie/edycja rekordów na przestrzeni czasu")
			{
				List<DateTime> lista_datur;
				for (int j = 0; j < lista_ludzi.Count; j++)
				{
					lista_datur.Add(Convert::ToDateTime(lista_ludzi[j]->czas).Date);
				}
				lista_datur.TrimExcess();
				lista_datur.Sort();
				chart1->Series["Series1"]->ChartType = Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
				lista_datur.Add(DateTime::MinValue);
				for (int j = 0; j < lista_datur.Count; j++)
				{
					int pom = 0;
					for (int l = j; l < lista_datur.Count; l++)
					{
						if (lista_datur[j] == lista_datur[l])
						{
							pom++;
						}
						else
						{
							String^ uro_date = dat2string(lista_datur[j]);
							chart1->Series["Series1"]->Points->AddXY(uro_date, pom);
							l = lista_datur.Count;
							j += pom - 1;
						}
					}
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		label9->Text = comboBox1->SelectedItem->ToString();
	}
	private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void listView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->View == Windows::Forms::View::Details)listView1->View = Windows::Forms::View::Tile;
		else listView1->View = Windows::Forms::View::Details;
	}
	private: MyForm6^ mail_forma;
	private: MyForm7^ urodziny_forma;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		i = 0;
		try
		{
			while (lista_ludzi[i]->pesel != textBox3->Text)
			{
				i++;
			};
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Nie znaleziono osoby o danym numerze PESEL, jeœli chcesz dodaæ now¹ osobê kliknij przycisk 'DODAJ NOW¥ OSOBÊ'", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		mail_forma = gcnew MyForm6(lista_ludzi[i]);
		mail_forma->ShowDialog();
		if (mail_forma->wyslano)
		{
			MessageBox::Show("Wiadomoœæ zosta³a wys³ana na adres: " + lista_ludzi[i]->email, "WYS£ANO", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void listView1_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ item1;
		item1 = listView1->SelectedItems[0];
		textBox1->Text = item1->SubItems[0]->Text;
		textBox2->Text = item1->SubItems[0]->Text;
		textBox3->Text = item1->SubItems[0]->Text;
	}
	private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fontDialog1->ShowDialog() ==
			System::Windows::Forms::DialogResult::OK)
		{
			listView1->Font = fontDialog1->Font;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime czas = DateTime::Now;
		label7->Text = czas.Hour.ToString() + ":" + czas.Minute.ToString() + ":" + czas.Second.ToString();
		label8->Text = czas.Day.ToString() + "." + czas.Month.ToString() + "." + czas.Year.ToString() + "   " + czas.DayOfWeek.ToString();
		timeupdate();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		i = 0;
		try
		{
			DateTime czas = DateTime::Now;
			String^ uro_date;
			if (czas.Day.ToString()->Length == 1)
				uro_date = "0" + czas.Day.ToString();
			else uro_date = czas.Day.ToString();

			if (czas.Month.ToString()->Length == 1)
				uro_date += ".0" + czas.Month.ToString();
			else uro_date = "." + czas.Day.ToString();

			uro_date += "." + czas.Year.ToString();

			while (lista_ludzi[i]->data_ur != uro_date)
			{
				i++;
			};
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Nikt nie ma dzisiaj urodzin :c", "Co za pech!", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			return;
		}
		urodziny_forma = gcnew MyForm7(lista_ludzi[i]);
		urodziny_forma->ShowDialog();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		chartupdate();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D == false)
		{
			chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
			button8->Text = "2D";
		}
		else
		{
			chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = false;
			button8->Text = "3D";
		}
	}
};
}
