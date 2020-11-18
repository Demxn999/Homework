#include <iostream>
using namespace std;

int main()
{
	int a, b, c; 
	cout << "Vvedite dlinu kirpicha a: ";
	cin >> a;
	cout << "Vvedite shirinu kirpicha b: ";
	cin >> b;
	cout << "Vvedite visoty kirpicha c: ";
	cin >> c;
	int r, s; 
	cout << "Vvedite razmeri otverstia x: ";
	cin >> r;
	cout << "Vvedite razmeri otverstia y: ";
	cin >> s;
	if (((a <= r) && (b <= s)) || ((a <= s) && (b <= r)))
		cout << "Voidet" << endl;
	else if	(((a <= r) && (c <= s)) || ((a <= s) && (c <= r))) 
		cout << "Voidet" << endl;
	else if (((b <= r) && (c <= s)) || ((b <= s) && (c <= r)))
	cout << "Voidet" << endl;
	else cout << "No!" << endl;
	
	return (0);
}
