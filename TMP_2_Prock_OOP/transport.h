#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class transport {
	int powerEngine;
public:
	// �������������, ���������� � ���� ������ �� ������
	static transport* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ����
	virtual void Out(ofstream &ofst) = 0; // �����
	void OutCommon(ofstream &ofst);
	void InCommon(ifstream &ifst);
//protected:
	//shape() {};
};