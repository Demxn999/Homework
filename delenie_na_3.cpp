#include <iostream> 
using namespace std;
int main()
{
	int z, c, d, v, a;
	cout << "vvedite chislo= " ;
	cin >> z;
	c = z % 10;
	d = z / 10;
	v = d % 10;
	a = d / 10;
	if ((c + v + a) % 3 == 0)
		cout << "Chislo " << z << " delitsa na 3";
	else
		cout << "Chislo " << z << " ne delitsa na 3";
	return 0;
}