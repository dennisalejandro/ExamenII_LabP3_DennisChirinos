#pragma once
#include <iostream>
#include <string>
#include "Ciudadano.h"
using namespace std;
class Maestro : public Ciudadano {
	private: 
		string Homeroom;
		string Dept;
		string Alias;
		int Sueldo;
	public: 
		Maestro();
		~Maestro();
		Maestro(string, int, string, int, string, string, string, string, string, string, string, int);
		void  setHomeroom(string);
		void  setDept(string);
		void  setAlias(string);
		void  setSueldo(int);
		string getHomeroom();
		string getDept();
		string getAlias();
		int getSueldo();
		int getSome();
};
