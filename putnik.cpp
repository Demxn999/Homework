#include<iostream>
using namespace std;

int main() 
{
	setlocale(LC_All, "Russian");
	float t1, t2, t3, v1,v2,v3,s,t;
	cout << "������� t1: "; 
	cin >> t1;
	cout << "������� v1: "; 
	cin >> v1;
	cout << "������� t2: "; 
	cin >> t2;
	cout << "������� v2: "; 
	cin >> v2;
	cout << "������� t3: "; 
	cin >> t3;
	cout << "������� v3: "; 
	cin >> v3;
	s = (t1 * v1 + t2 * v2 + t3 * v3)/2;
	if (s/v1<=t1) 
	{	
		t = s / v1;
	}
	else
	{	
		s = s - t1 * v1;
		if (s / v2 <= t2)
		{
			t = t1 + s / v2;
		}
		else
		{
			s = s - t2 * v2;
			t = t1 + t2 + s / v3;			
		}
		cout << t << endl;
	}
	system("pause");
	return 0;
}