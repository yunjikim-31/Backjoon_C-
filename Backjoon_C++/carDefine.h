#pragma once
#include <iostream>

class MyCar
{

// ����� Ŭ���� ��� ����
protected:
	// ��� ����
	int fuel;
	bool power;

public:
	void go();
	void oiling(int number);
	void fuel_check();
};
