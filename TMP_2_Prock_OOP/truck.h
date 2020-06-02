#pragma once
#include "transport.h"
class truck : public transport {
	int power;
public:
	// переопределяем интерфейс класса
	void InData(ifstream &ifst); // ввод
	void Out(ofstream &ofst); // вывод
	//truck() {} // создание без инициализации.
};