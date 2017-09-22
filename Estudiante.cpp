#include "Estudiante.h"
#include <iostream>
#include <string>
#include "Ciudadano.h"
#include "Maestro.h"
using namespace std;
	Estudiante::Estudiante(string Nombre, int Edad, string Nacimiento, int Altura, string HairColor, string EyeColor, string BloodType, string Quirk, int Promedio, string Homeroom, string Classroom, Maestro* Guia) : Ciudadano(Nombre, Edad, Nacimiento, Altura, HairColor, EyeColor, BloodType, Quirk) { 
		setPromedio(Promedio);
		setHomeroom(Homeroom);
		setClassroom(Classroom);
		setGuia(Guia);
	}
	Estudiante::~Estudiante() {
		delete this->Guia;
	}
	void Estudiante::setPromedio(int a) {
		this->Promedio = a;
	}
	void Estudiante::setHomeroom(string a) {
		this->Homeroom = a;
	}
	void Estudiante::setClassroom(string a) {
		this->Classroom = a;
	}
	void Estudiante::setGuia(Maestro* a) {
		this->Guia = a;
	}
	int Estudiante::getPromedio() {
		return this->Promedio;
	}
	string Estudiante::getHomeroom() {
		return this->Homeroom;
	}
	string Estudiante::getClassroom() {
		return this->Classroom;
	}
	Maestro* Estudiante::getGuia() {
		return this->Guia;
	}
	int Estudiante::getSome() {
		return this->Promedio;
	}
