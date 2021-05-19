#pragma once
#include"MyForm8.h"
#include<cstdlib>
#include<ctime>



namespace projektsemestralny {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace System::Drawing::Imaging;
	/// <summary>
	/// Podsumowanie informacji o MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			StreamReader^ odczyt = File::OpenText("flappybirdHS.txt");
			HS = Convert::ToInt16(odczyt->ReadLine());
			odczyt->Close();
			label5->Text = HS.ToString();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(520, -491);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(119, 734);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(520, 482);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(119, 734);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(134, 294);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(900, 447);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(119, 734);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(900, -539);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(119, 734);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(1280, 494);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(119, 734);
			this->pictureBox6->TabIndex = 8;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(1280, -491);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(119, 734);
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm3::timer1_Tick);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(497, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(261, 138);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1025, 105);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(174, 138);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(95, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(2, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 31);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Points:";
			// 
			// timer2
			// 
			this->timer2->Interval = 20;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm3::timer2_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(49, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1178, 55);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ABY ROZPOCZ¥Æ GRÊ KLIKNIJ KLAWISZ ENTER";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(160, 466);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(119, 734);
			this->pictureBox10->TabIndex = 15;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(160, -507);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(119, 734);
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(2, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(249, 31);
			this->label4->TabIndex = 16;
			this->label4->Text = L"All Time Highscore:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(250, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 31);
			this->label5->TabIndex = 17;
			this->label5->Text = L"1";
			// 
			// MyForm3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1285, 702);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FLAPPY BIRD";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm3::MyForm3_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm3::MyForm3_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm3::MyForm3_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm3::MyForm3_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool alive = 1;
	public: int points = 0;
	public: int deathpom = 0;
	//public: bool rot = 0;
	private: Void ifalive()
	{
		//ive = 1; return;
		if (pictureBox1->Top <= 0) { alive = 0; return; }
		if (pictureBox1->Bottom >= 705) { alive = 0; return; }
		Rectangle^ ptaszek = gcnew Rectangle(pictureBox1->Location, pictureBox1->Size);
		if (ptaszek->IntersectsWith(Rectangle(pictureBox3->Location, pictureBox3->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox2->Location, pictureBox2->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox4->Location, pictureBox4->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox5->Location, pictureBox5->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox6->Location, pictureBox6->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox7->Location, pictureBox7->Size)) ||
			ptaszek->IntersectsWith(Rectangle(pictureBox10->Location, pictureBox10->Size))|| 
			ptaszek->IntersectsWith(Rectangle(pictureBox11->Location, pictureBox11->Size)))
		{ alive = 0; return; }
	}
	public: int los;
	/*private: Void imag_draw()
	{
		pt.X = pictureBox1->Location.X;
		pt.Y = pictureBox1->Location.Y;
		bitim = gcnew Bitmap(pictureBox1->Image, pictureBox1->Width, pictureBox1->Height);
	}*/
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (alive == 1)
		{
			ifalive();
			if (licz < 0)
			{
				pictureBox1->Top += 3;
				/*if (rot)
				{
					pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
					rot = 0;
				}*/
			}
			else
			{
				pictureBox1->Top -= 10;
				licz -= 10;
			}
			los = rand() % 320 + 320;
			if (pictureBox8->Left < -290)pictureBox8->Left = 1330;
			if (pictureBox9->Left < -200)pictureBox9->Left = 1330;
			pictureBox8->Left -= 1;
			pictureBox9->Left -= 2;
			if (pictureBox2->Left < -150) { pictureBox2->Left = 1330; pictureBox3->Left = 1330; pictureBox2->Top = los; pictureBox3->Top = los-973;}
			pictureBox2->Left -= 2;
			pictureBox3->Left -= 2;
			if (pictureBox4->Left < -150) { pictureBox4->Left = 1330; pictureBox5->Left = 1330; pictureBox4->Top = los; pictureBox5->Top = los - 973;}
			pictureBox4->Left -= 2;
			pictureBox5->Left -= 2;
			if (pictureBox6->Left < -150) { pictureBox6->Left = 1330; pictureBox7->Left = 1330; pictureBox6->Top = los; pictureBox7->Top = los - 973;}
			pictureBox6->Left -= 2;
			pictureBox7->Left -= 2;
			if (pictureBox10->Left < -150) { pictureBox10->Left = 1330; pictureBox11->Left = 1330; pictureBox10->Top = los; pictureBox11->Top = los - 973;}
			pictureBox10->Left -= 2;
			pictureBox11->Left -= 2;
			if (pictureBox2->Left == 132 || pictureBox4->Left == 132 || pictureBox6->Left == 132 || pictureBox10->Left == 132) { points++; label1->Text = points.ToString(); dz_point->Stop(); dz_point->Play(); }
		}
		else
		{
			death();
		}
	}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (deathpom < 5)
	{
		pictureBox1->Top -= 5;
	}
	else
	{
		pictureBox1->Top += 10;
		if(deathpom%2 == 0 )pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
	}
	deathpom++;
	if (pictureBox1->Bottom >= 705)afterdeath();

}
private: Void death()
{
	timer1->Stop();
	pictureBox1->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
	dz_smierc->Play();
	timer2->Start();
}
public: bool jeszczeraz = 0;
private: MyForm8^ death_forma = gcnew MyForm8;
private: Void afterdeath()
{
	timer2->Stop();
	if (HS < points)
	{
		HS = points;
		dz_HS->Play();
		MessageBox::Show("Pobi³eœ dotychczasowy rekord zdobywaj¹c " + HS.ToString() + " punktów!", "GRATULACJE!!", MessageBoxButtons::OK, MessageBoxIcon::None);
	}
	death_forma->ShowDialog();
	if (death_forma->jeszczeraz8)
	{
		jeszczeraz = 1;
	}
	Close();
}
//public: Bitmap^ bitim;
//public: Point pt;
public: int HS;
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));
	//imag_draw();
	pictureBox10->Left = 1630;
	pictureBox11->Left = 1630;
	label1->Text = points.ToString();
	//pictureBox1->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
	dz_skrzydla->Open(gcnew System::Uri("D:/Users/jerzy/Desktop/studia/Semestr 1/PI (Podstawy Informatyki)/PROJEKT 1 SEMESTRE/projekt semestralny/Debug/Sounds/sfx_wing.wav"));
	dz_point->Open(gcnew System::Uri("D:/Users/jerzy/Desktop/studia/Semestr 1/PI (Podstawy Informatyki)/PROJEKT 1 SEMESTRE/projekt semestralny/Debug/Sounds/sfx_point.wav"));
	dz_smierc->Open(gcnew System::Uri("D:/Users/jerzy/Desktop/studia/Semestr 1/PI (Podstawy Informatyki)/PROJEKT 1 SEMESTRE/projekt semestralny/Debug/Sounds/sfx_die.wav"));
	dz_HS->Open(gcnew System::Uri("D:/Users/jerzy/Desktop/studia/Semestr 1/PI (Podstawy Informatyki)/PROJEKT 1 SEMESTRE/projekt semestralny/Debug/Sounds/Win_SFX.wav"));
}
private: System::Windows::Media::MediaPlayer^ dz_skrzydla = gcnew System::Windows::Media::MediaPlayer;
private: System::Windows::Media::MediaPlayer^ dz_HS = gcnew System::Windows::Media::MediaPlayer;
private: System::Windows::Media::MediaPlayer^ dz_point = gcnew System::Windows::Media::MediaPlayer;
private: System::Windows::Media::MediaPlayer^ dz_smierc = gcnew System::Windows::Media::MediaPlayer;
public: int licz;
public: bool skok = 1;
private: System::Void MyForm3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	if (e->KeyValue == 32 && skok==1)
	{
		licz = 100;
		skok = 0;
		dz_skrzydla->Stop();
		dz_skrzydla->Play();
		//pictureBox1->Image->RotateFlip(RotateFlipType::Rotate270FlipNone);
		//rot = 1;
	}
	if (e->KeyValue == 13) {
		timer1->Start();
		label3->Visible = false;
	}
}
private: static Bitmap^ RotateImage(Bitmap^ bmp, float angle)
{
		   float alpha = angle;

		   //edit: negative angle +360
		   while (alpha < 0) alpha += 360;

		   float gamma = 90;
		   float beta = 180 - angle - gamma;

		   float c1 = bmp->Height;
		   float a1 = Math::Abs((float)(c1 * Math::Sin(alpha * Math::PI / 180)));
		   float b1 = Math::Abs((float)(c1 * Math::Sin(beta * Math::PI / 180)));

		   float c2 = bmp->Width;
		   float a2 = Math::Abs((float)(c2 * Math::Sin(alpha * Math::PI / 180)));
		   float b2 = Math::Abs((float)(c2 * Math::Sin(beta * Math::PI / 180)));

		   int width = Convert::ToInt32(b2 + a1);
		   int height = Convert::ToInt32(b1 + a2);

		   Bitmap^ rotatedImage = gcnew Bitmap(width, height);
		   Graphics^ g = Graphics::FromImage(rotatedImage);
		   {
			   g->TranslateTransform(rotatedImage->Width / 2, rotatedImage->Height / 2); //set the rotation point as the center into the matrix
			   g->RotateTransform(angle); //rotate
			   g->TranslateTransform(-rotatedImage->Width / 2, -rotatedImage->Height / 2); //restore rotation point into the matrix
			   Point pt;
			   pt.X = (width - bmp->Width) / 2;
			   pt.Y = (height - bmp->Height) / 2;
			   g->DrawImage(bmp, pt);
			   
		   }
		   return rotatedImage;
}
private: Void Rotate(double rotationAngle)
{
	/*Image^ imgu;
	imgu->FromFile("flappyBird.png");
	Bitmap^ bit_map = gcnew Bitmap(imgu->Width, imgu->Height);
	Graphics^ graf;
	graf->FromImage(bit_map);
	//RotateFlipType rotat;
	//img.RotateFlip(rotat);
	graf->DrawImage(imgu, 0, 0);*/

}
private: System::Void MyForm3_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if(e->KeyValue == 32)
	{
		skok = 1;
	}
}
private: System::Void MyForm3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//Graphics^ g = e->Graphics;
	//g->DrawImage(bitim, pt);
}
private: System::Void MyForm3_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	StreamWriter^ zapis = gcnew StreamWriter("flappybirdHS.txt");
	zapis->Flush();
	zapis->WriteLine(HS);
	zapis->Close();
}
};
}
