// Часы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int hour, min, sec;
	cout << "Enter hour=";
	cin >> hour;
	cout << "Enter min=";
	cin >> min;
	cout << "Enter sec=";
	cin >> sec;

	cout << setfill('0');
	cout << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << sec << endl;

	cout << "I\n";
	min = sec < 30 ? min : (min + 1);
	min = min > 59 ? 0, hour++ : min;
	cout << setw(2) << hour << ":" << setw(2) << min << endl;

	cout << "II\n";
	hour = (min < 30) ? hour : hour + 1;
	cout << setw(2) << hour << endl;
}


