#include "Maestro.h"
#include <iostream>
#include <string>
#include "Ciudadano.h"
using namespace std;
	Maestro::Maestro(string Nombre, int Edad, string Nacimiento, int Altura, string HairColor, string EyeColor, string BloodType, string Quirk, string Homeroom, string Dept, string Alias, int Sueldo) : Ciudadano (Nombre, Edad, Nacimiento, Altura, HairColor, EyeColor, BloodType, Quirk) { 
		setHomeroom(Homeroom);
		setDept(Dept);
		setAlias(Alias);
		setSueldo(Sueldo);
	}

	Maestro::Maestro() {}
	Maestro::~Maestro() {}
	void Maestro::setHomeroom(string a) {
		this->Homeroom = a;
	}
	void Maestro::setDept(string a) {
		this->Dept = a;
	}
	void Maestro::setAlias(string a) {
		this->Alias = a;
	}
	void Maestro::setSueldo(int a) {
		this->Sueldo = a;
	}
	string Maestro::getHomeroom() {
		return this->Homeroom;
	}
	string Maestro::getDept() {
		return this->Dept;
	}
	string Maestro::getAlias() {
		return this->Alias;
	}
	int Maestro::getSueldo() {
		return this->Sueldo;
	}
	int Maestro::getSome() {
		return this->Sueldo;
	}
