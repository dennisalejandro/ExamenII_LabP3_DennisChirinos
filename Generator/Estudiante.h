#pragma once
#include <iostream>
#include <string>
using namespace std;
class Estudiante {
	private: 
		int Promedio;
		string Homeroom;
		string Classroom;
		Maestro Guia;
		int shit;
	public: 
		Estudiante(int, string, string, Maestro, int);
		void  setPromedio(int);
		void  setHomeroom(string);
		void  setClassroom(string);
		void  setGuia(Maestro);
		void  setshit(int);
		int getPromedio();
		string getHomeroom();
		string getClassroom();
		Maestro getGuia();
		int getshit();
};
