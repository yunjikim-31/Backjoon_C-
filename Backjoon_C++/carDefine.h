#pragma once
#include <iostream>

class MyCar
{

// 상속한 클래스 사용 가능
protected:
	// 멤버 변수
	int fuel;
	bool power;

public:
	void go();
	void oiling(int number);
	void fuel_check();
};
