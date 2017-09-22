#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ciudadano {
	private: 
		string Nombre;
		int Edad;
		string Nacimiento;
		int Altura;
		string HairColor;
		string EyeColor;
		string BloodType;
		string Quirk;
	public: 
		Ciudadano();
		~Ciudadano();
		Ciudadano(string, int, string, int, string, string, string, string);
		void  setNombre(string);
		void  setEdad(int);
		void  setNacimiento(string);
		void  setAltura(int);
		void  setHairColor(string);
		void  setEyeColor(string);
		void  setBloodType(string);
		void  setQuirk(string);
		string getNombre();
		int getEdad();
		string getNacimiento();
		int getAltura();
		string getHairColor();
		string getEyeColor();
		string getBloodType();
		string getQuirk();
		virtual string toString();
		virtual int getSome();
};
