#include <iostream>
using namespace std;

int main()
{
	int k, l, m;
	cout << "Vvedite k, l, m: ";
	cin >> k >> l >> m;
	if (k > 0) {
		if (l > 0) {
			if (m > 0) {
				if ((k % m == 0) || (m % k == 0))
					cout << m << " Kratno " << k << endl;
				if ((k % l == 0) || (l % k == 0))
					cout << l << " Kratno " << k << endl;
				if ((l % m == 0) || (m % l == 0))
					cout << m << " Kratno " << l << endl;
			}
			else if ((k % l == 0) || (l % k == 0))
				cout << l << " Kratno " << k << endl;
		}
		else if ((m > 0) && ((m % k == 0) || (k % m == 0)))
			cout << k << " Kratno " << m << endl;
	}
	else if ((l > 0) && (m > 0) && ((l % m == 0) || (m % l == 0)))
		cout << m << " Kratno " << l << endl; 
	return 0;
}