#include "LinkList.h"
#include <iostream>
#include <string>
#include "Node.h"
#include "Ciudadano.h"
using namespace std;
	LinkList::LinkList(int Size) {
		this->Size = Size;
		this->Root = new Node(0, Size);	
	}
	void LinkList::Write(int at, Ciudadano* Data) {
		if(at == 0) {
			this->Root->setData(Data);
		} else {
			this->Root->write(at, Data);
		}
	}
	void LinkList::Write(Ciudadano* Data) {
		if (this->Size == 0) {
			this->Root->setData(Data);
			this->Root->Next = new Node(1,1);
		} else {
			this->Root->NodeAt(this->Size)->Next = new Node((this->Size)+1, this->Size+1);
			cout << "Node Created \n";
			this->Root->NodeAt(this->Size)->setData(Data);
		}
		cout << "Sized \n";
		this->Size++;
	}
	Ciudadano* LinkList::at(int at) {
		if(at == 0) {
			return this->Root->getData();
		} else {
			return this->Root->getNext()->at(at);
		}
	}
	Node* LinkList::NodeAt(int at) {
		if(at == 0) {
			return this->Root;
		} else {
			return this->Root->getNext()->NodeAt(at);
		}
	}
	int LinkList::length() {
		return this->Size;
	}
	LinkList::~LinkList() {
		delete this->Root;
	}
	void LinkList::remove(int a) {
		if (a == 0) {

		} if (a == length()) {
			Node* Temp = Root->NodeAt(a);
			Root->NodeAt(a-1)->setNext(Temp->getNext());
			Temp->setNext(NULL);
			this->Size--;
			delete Temp;
		} else {
			Node* Temp = Root->NodeAt(a);
			Root->NodeAt(a-1)->setNext(Temp->getNext());
			Temp->setNext(NULL);
			this->Size--;
			delete Temp;
			for (int i = a+1;i<length();i++) {
				Root->NodeAt(i)->setID(i-1);
			}

		}

	}
