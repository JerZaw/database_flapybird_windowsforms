#pragma once
using namespace System;
ref class Ludzie
{
public:
	String^ imie;
	String^ nazwisko;
	String^ email;
	String^ data_ur;
	String^ pesel;
	String^ plec;
	DateTime czas;
public:

	Ludzie(String^ arg_imie, String^ arg_nazwisko, String^ arg_email, String^ arg_data_ur, String^ arg_pesel, String^ arg_plec, DateTime arg_czas)
	{
		imie = gcnew String(arg_imie);
		nazwisko = gcnew String(arg_nazwisko);
		email = gcnew String(arg_email);
		data_ur = arg_data_ur;
		pesel = gcnew String(arg_pesel);
		plec = gcnew String(arg_plec);
		czas = arg_czas;
	}
	Ludzie(){};

};

