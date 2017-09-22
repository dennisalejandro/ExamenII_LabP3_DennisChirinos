#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	
	return 0;
}
int Menu () {
	int op;
	cout << "a) Contratar  maestro \n";
	cout << "b) Despedir maestro \n";
	cout << "c) Matricular  alumno \n";
	cout << "d) Expulsar alumno \n";
	cout << "e) Listar maestros en U.A.\n";
	cout << "f) Listar estudiantes en U.A.\n";
	cout << "g) Sacar el sueldo promedio  de los maestros de U.A.\n";
	cout << "h) Sacar el promedio  general de todos los alumnos de U.A.\n";
	cout << "i) Listar alumnos por departamento.\n";
	cout << "j) Guardar  registros en txt\n";
	cin >> op;
	return op;
}
