#include <iostream>
using namespace std;

int main()
{
  
    int a, b, c, a1, b1, c1;
    cout << "Razmer korobki:" << endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    cout << "Razmer posylki:" << endl;
    cout << "a= ";
    cin >> a1;
    cout << "b= ";
    cin >> b1;
    cout << "c= ";
    cin >> c1;
    if (
        (a < a1 && b < b1 && c < c1) ||
        (a < a1 && b < c1 && c < b1) ||
        (a < b1 && b < a1 && c < c1) ||
        (a < b1 && b < c1 && c < a1) ||
        (a < c1 && b < b1 && c < a1) ||
        (a < c1 && b < a1 && c < b1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}