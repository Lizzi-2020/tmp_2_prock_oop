#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class transport {
	int powerEngine;
public:
	// иденитфикация, порождение и ввод фигуры из потока
	static transport* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0; // вывод
	void OutCommon(ofstream &ofst);
	void InCommon(ifstream &ifst);
//protected:
	//shape() {};
};