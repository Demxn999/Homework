#include <iostream>
using namespace std;

int main() {
	setlocale (LC_ALL, "Russian");
	float v1, v2, p1, t2, s, t, stoimost;
	cout << "Введите v1: ";
	cin >> v1;
	cout << "Введите p1: "; 
	cin >> p1;
	cout << "Введите v2: "; 
	cin >> v2;
	cout << "Введите s: "; 
	cin >> s;
	cout << "Введите t: "; 
	cin >> t;
	t2 = 1;
	if (s / v1 > t)
	{
		cout << "Невозможно";
	}
	else
	{
		if (s / v1 == t)
		{
			stoimost = s * p1;
			cout << stoimost << endl;
		}
		else
		{
			while ((s / v1) < t - t2);
			{
				s = s - v2 * t2;
				t2 = t2 + 1;
			}
			stoimost = s * p1;
			cout << "Стоимость равна= " << stoimost << endl;
		}
	}
	system("pause");
	return 0;
}