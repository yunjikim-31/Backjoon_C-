#include "carDefine.h";
#include <iostream>
using namespace std;

// �ܺ� Ŭ���� ����
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
	cout << "���� : " << fuel << endl;
}