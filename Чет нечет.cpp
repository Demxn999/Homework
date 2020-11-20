#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
		double a, b = 4;
	bool c;
	c = 1;
	for (a = 0; a <= 5; a += 0.1)
	{
		c = (pow(a, b) == pow(-a, b)) ? 1 : 0;
		if (c == 0) { break; }
	}
	c == 0 ? cout << "Нечет\n" : cout << "Чет\n";
	c = 1;
	for (a = 0; a <= 5; a += 0.1)
	{
		c = tan(a) == tan(-a) ? 1 : 0;
		if (c == 0) { break; }
	}
	c == 0 ? cout << "Нечет\n" : cout << "Чет\n";
	c = 1;
	for (a = 0; a <= 5; a += 0.1)
	{
		c = (exp(a) == exp(-a)) ? 1 : 0;
		if (c == 0) { break; }
	}
	c == 0 ? cout << "Чет\n" : cout << "Нечет\n";

	system("pause");
	return 0;
}