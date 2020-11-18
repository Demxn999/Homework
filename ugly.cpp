#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const double pi = 3.14;
    double degrees, min, sec, g, rad;
    cout << "Введите градусы,минуты,секунды" << endl;
    cin >> degrees >> min >> sec;
    g= degrees + min / 60.0 + sec / (60.0 * 60.0); //gradusi
    rad= g * pi / 180.0;
    cout << "Значение в радианах равно=" << rad;
    return 0;
}


