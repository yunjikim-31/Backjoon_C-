#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	// 최대
	int x = (a > b ? a : b) > c ? (a > b ? a : b) : c; 

	// 최소
	int y = (a < b ? a : b) < c ? (a < b ? a : b) : c;

	// 중간
	int z = a + b + c - x - y;

	if (a == b && b == c)
		cout << 2;
	else if (x * x == y * y + z * z)
		cout << 1;
	else
		cout << 0;

	return 0;
}