#pragma once
#include "node.h"
class container {
	node* noda = new node;
	node *head = NULL;
	node *endList = NULL;
	int data = 0; // ������� �����
public:
	void In(ifstream &ifst); // ���� �����
	void Out(ofstream &ofst); // ����� �����
	void Clear(); // ������� ���������� �� �����
	//container(); // ������������� ����������
	//~container() { Clear(); } // ���������� ����������
};