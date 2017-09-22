#include <iostream>
#include <string>
#include <vector>
#include "LinkList.h"
#include "Ciudadano.h"
#include "Maestro.h"
#include "Estudiante.h"
#include <fstream>
#include <exception>
//Remove No sirve, las otras funciones sirven si NO removes 
using namespace std;
int Menu();
void Save(LinkList*);
int main() {
	LinkList* List = new LinkList(0);
	LinkList* List2 = new LinkList(0);
	int op = 0;
	while (op!=11) {
		op = Menu();
		switch (op) {
			case 1: {
				cout << "Ingrese Caracteristicas \n";
				string Nombre;
				int Edad;
				string Nacimiento;
				int Altura;
				string HairColor;
				string EyeColor;
				string BloodType;
				string Quirk;
				string Homeroom; 
				string Dept;
				string Alias; 
				int Sueldo;
				cout << "Nombre: \n";
				cout << "Edad\n";
				cout << "Nacimiento\n";
				cout << "Altura\n";
				cout << "HairColor\n";
				cout << "EyeColor\n";
				cout << "BloodType\n";
				cout << "Quirk\n";
				cout << "Homeroom\n"; 
				cout << "Dept\n";
				cout << "Alias\n";
				cout << "Sueldo\n";
				cin >> Nombre;
				cin >> Edad;
				cin >> Nacimiento;
				cin >> Altura;
				cin >> HairColor;
				cin >> EyeColor;
				cin >> BloodType;
				cin >> Quirk;
				cin >> Homeroom; 
				cin >> Dept;
				cin >> Alias;
				cin >> Sueldo;
				Maestro* m = new Maestro(Nombre, Edad, Nacimiento, Altura, HairColor, EyeColor, BloodType, Quirk, Homeroom, Dept, Alias, Sueldo);
				List->Write(m);
			} break;

			case 2: {
				for (int i = 0;i<List->length();i++) {
					cout << i << ") " << List->at(i)->toString() + "\n";
				}
				int op2;
				cin >> op2;
				List->remove(op2);
			} break;
			case 3: {
				if (List->length()==0) {
					string Nombre;
					int Edad;
					string Nacimiento;
					int Altura;
					string HairColor;
					string EyeColor;
					string BloodType;
					string Quirk;
					string Homeroom; 
					string Classroom;
					int Promedio;
					cout << "Nombre: \n";
					cout << "Edad\n";
					cout << "Nacimiento\n";
					cout << "Altura\n";
					cout << "HairColor\n";
					cout << "EyeColor\n";
					cout << "BloodType\n";
					cout << "Quirk\n";
					cout << "Homeroom \n"; 
					cout << "Classroom \n";
					cout << "Promedio \n";
					cin >> Nombre;
					cin >> Edad;
					cin >> Nacimiento;
					cin >> Altura;
					cin >> HairColor;
					cin >> EyeColor;
					cin >> BloodType;
					cin >> Quirk;
					cin >> Homeroom;
					cin >> Classroom;
					cin >> Promedio;
					cout << "Elija profesor: \n";
					for (int i = 0;i<List->length();i++) {
						cout << i << ") " << List->at(i)->toString() + "\n";
					}
					int op3;
					cin >> op3;
					Maestro* Guia = dynamic_cast<Maestro*>(List->at(op3));
					//Der* der = dynamic_cast<Der*>(base);
					Estudiante* e = new Estudiante(Nombre, Edad, Nacimiento, Altura, HairColor, EyeColor, BloodType, Quirk, Promedio, Homeroom, Classroom, Guia);
					List2->Write(e);
				} else {
					cout << "No hay maestro \n";
				}
			} break;
			case 4: {
				for (int i = 0;i<List2->length();i++) {
					cout << i << ") " << List2->at(i)->toString() + "\n";
				}
				int op2;
				cin >> op2;
				List2->remove(op2);
			} break;
			case 5: {
				cout << "Size: " << List->length() << "\n";
				for (int i = 0;i<List->length();i++) {
					if (List->at(i)!=NULL) {
						cout << i << ") " << List->at(i)->toString() + "\n";
					}
				}
			} break;
			case 6: {
				cout << List2->length();
				for (int i = 0;i<List2->length();i++) {
					cout << i << ") " << List2->at(i)->toString() + "\n";
				}
			} break;
			case 7: {
				int SueldoProm;
				for (int i = 0;i<List->length();i++) {
					SueldoProm += List->at(i)->getSome();
				}
				SueldoProm = SueldoProm/List->length();
				cout << "El sueldo promedio es de: " << SueldoProm << "\n";
			} break;
			case 8: {
				int Prom;
				for (int i = 0;i<List2->length();i++) {
					Prom += List2->at(i)->getSome();
				}
				Prom = Prom/List2->length();
				cout << "El promedio es de: " << Prom << "\n";
			} break;
			case 10: {
				Save(List);
				
			} break;
		}
	}
	delete List;
	delete List2;
	return 0;
}
int Menu () {
	int op;
	cout << "1) Contratar  maestro \n";
	cout << "2) Despedir maestro \n";
	cout << "3) Matricular  alumno \n";
	cout << "4) Expulsar alumno \n";
	cout << "5) Listar maestros en U.A.\n";
	cout << "6) Listar estudiantes en U.A.\n";
	cout << "7) Sacar el sueldo promedio  de los maestros de U.A.\n";
	cout << "8) Sacar el promedio  general de todos los alumnos de U.A.\n";
	cout << "9) Listar alumnos por departamento.\n";
	cout << "10) Guardar  registros en txt\n";
	cout << "11) Salir\n";
	cin >> op;
	return op;
}
void Save(LinkList* list) {
	ofstream Archivo;
	Archivo.open("SaveData.txt");
	for (int i = 0;i<list->length();i++) {
		Archivo << list->at(i)->toString() << "\n";
	}
	Archivo.close();
}
