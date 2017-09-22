#pragma once
#include <iostream>
#include <string>
#include "Ciudadano.h"
#include "Maestro.h"
using namespace std;
class Estudiante : public Ciudadano {
	private: 
		int Promedio;
		string Homeroom;
		string Classroom;
		Maestro* Guia;
	public: 
		Estudiante(string, int, string, int, string, string, string, string, int, string, string, Maestro*);
		~Estudiante();
		void  setPromedio(int);
		void  setHomeroom(string);
		void  setClassroom(string);
		void  setGuia(Maestro*);
		int getPromedio();
		string getHomeroom();
		string getClassroom();
		Maestro* getGuia();
		int getSome();
};
