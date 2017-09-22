#include "Estudiante.h"
#include <iostream>
#include <string>
using namespace std;
	Estudiante::Estudiante(int Promedio, string Homeroom, string Classroom, Maestro Guia, int shit) { 
		setPromedio(Promedio);
		setHomeroom(Homeroom);
		setClassroom(Classroom);
		setGuia(Guia);
		setshit(shit);
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
	void Estudiante::setGuia(Maestro a) {
		this->Guia = a;
	}
	void Estudiante::setshit(int a) {
		this->shit = a;
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
	Maestro Estudiante::getGuia() {
		return this->Guia;
	}
	int Estudiante::getshit() {
		return this->shit;
	}
