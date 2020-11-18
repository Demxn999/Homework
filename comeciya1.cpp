
#include<iostream>
using namespace std;

int main() {
	int c;
	float p;
	int s;
	cout << "capital: "; cin >> c;
	cout << "procent: "; cin >> p;
	cout << "sum: "; cin >> s;
	int y = 0;
	p = p / 100 + 1;
	while (c < s)
	{
		c = c * p;
		y++;
	}
	cout << y << endl;
}

