#include "Ciudadano.h"
#include <iostream>
#include <string>
using namespace std;
	Ciudadano::Ciudadano() {}
	Ciudadano::~Ciudadano() {}
	Ciudadano::Ciudadano(string Nombre, int Edad, string Nacimiento, int Altura, string HairColor, string EyeColor, string BloodType, string Quirk) { 
		setNombre(Nombre);
		setEdad(Edad);
		setNacimiento(Nacimiento);
		setAltura(Altura);
		setHairColor(HairColor);
		setEyeColor(EyeColor);
		setBloodType(BloodType);
		setQuirk(Quirk);
	}
	void Ciudadano::setNombre(string a) {
		this->Nombre = a;
	}
	void Ciudadano::setEdad(int a) {
		this->Edad = a;
	}
	void Ciudadano::setNacimiento(string a) {
		this->Nacimiento = a;
	}
	void Ciudadano::setAltura(int a) {
		this->Altura = a;
	}
	void Ciudadano::setHairColor(string a) {
		this->HairColor = a;
	}
	void Ciudadano::setEyeColor(string a) {
		this->EyeColor = a;
	}
	void Ciudadano::setBloodType(string a) {
		this->BloodType = a;
	}
	void Ciudadano::setQuirk(string a) {
		this->Quirk = a;
	}
	string Ciudadano::getNombre() {
		return this->Nombre;
	}
	int Ciudadano::getEdad() {
		return this->Edad;
	}
	string Ciudadano::getNacimiento() {
		return this->Nacimiento;
	}
	int Ciudadano::getAltura() {
		return this->Altura;
	}
	string Ciudadano::getHairColor() {
		return this->HairColor;
	}
	string Ciudadano::getEyeColor() {
		return this->EyeColor;
	}
	string Ciudadano::getBloodType() {
		return this->BloodType;
	}
	string Ciudadano::getQuirk() {
		return this->Quirk;
	}
	string Ciudadano::toString() {
		return (this->Nombre+", "+to_string(this->Edad)+", "+this->Nacimiento+", "+to_string(this->Altura)+", "+this->HairColor+", "+this->EyeColor+", "+this->BloodType+", "+this->Quirk);
	}
	int Ciudadano::getSome() {
		return 1;
	}
