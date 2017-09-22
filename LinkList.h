#pragma once
#include <iostream>
#include <string>
#include "Node.h"
#include "Ciudadano.h"
using namespace std;
class LinkList {
	private:
		Node* Root;
		int Size;
		int VisibleSize;
	public: 
		LinkList(int);
		~LinkList();
		void Write(int, Ciudadano*);
		Ciudadano* at(int);
		Node* NodeAt(int);
		int length();
		void Write(Ciudadano* Data);
		void remove(int);
};
