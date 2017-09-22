#pragma once
#include <iostream>
#include <string>
#include "Ciudadano.h"
using namespace std;
class Node {
	private: 
		Ciudadano* Data;
		int ID;
		int Size;
	public: 
		Node* Next;
		Node(int, int);
		~Node();
		void  setNext(Node*);
		void  setData(Ciudadano*);
		//int*  getData();
		void  write(int, Ciudadano*);
		Ciudadano*  at(int);
		Node* NodeAt(int);
		Node* getNext();
		Ciudadano* getData();
		void setID(int);
		int getID();
};
