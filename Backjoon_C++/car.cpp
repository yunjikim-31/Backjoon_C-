#include "carDefine.h";
#include <iostream>
using namespace std;

// 외부 클래스 정의
void MyCar::go()
{
	this -> fuel--;
}

void MyCar::oiling(int number)
{
	this->fuel = fuel + number;
}

void MyCar::fuel_check()
{
	cout << "연료 : " << fuel << endl;
}