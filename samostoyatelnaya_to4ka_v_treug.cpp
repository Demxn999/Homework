#include <cmath>
#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int area(point a, point b, point c)
{
    return abs((a.x - c.x) * (b.y - c.y) + (b.x - c.x) * (c.y - a.y));
}

int main()
{
    point a, b, c, d;
    cout << "Vvedite coordinaty vershin treug, a zatem"
        << "koordinaty tochki:" << endl;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cin >> d.x >> d.y;
    
    if (area(a, b, c) == area(a, b, d) + area(a, d, c) + area(b, d, c))
            cout << "tochka vnutri treug\n";
    else cout << "tochka vne treug\n";
    
    
    return 0;
}