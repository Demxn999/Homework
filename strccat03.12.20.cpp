#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[1000];
	strcpy_s(str, "Это ");                
	strcat_s(str, "пример ");
	strcat_s(str, "использования ");
	strcat_s(str, "функции ");
	strcat_s(str, "strcat.");
	cout << str << endl;
	return 0;
}