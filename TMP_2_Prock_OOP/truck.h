#pragma once
#include "transport.h"
class truck : public transport {
	int power;
public:
	// �������������� ��������� ������
	void InData(ifstream &ifst); // ����
	void Out(ofstream &ofst); // �����
	//truck() {} // �������� ��� �������������.
};