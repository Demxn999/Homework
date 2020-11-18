#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
        int  a, b, c, d, max_a, max_b;
        double R;
    cout << "Введите а: ";
        cin >> a;
        cout << "Введите b: ";
        cin >> b;
        cout << "Введите c: ";
        cin >> c;
        cout << "Введите d: ";
        cin >> d;
        max_a = 0, 
        max_b = 0;
        cout << "Введите R: ";
        cin >> R;

    if (max_a < a) 
    {
        max_a = a;
        if (max_a < b) {
            max_a = b;
        }
    }

    if (max_b < c) 
    {
        max_b = c;
        if (max_b < d) {
            max_b = d;
        }
    }

    if (sqrt(max_a * max_a + max_b * max_b) <= 2 * R) {
        cout << "да" << endl;
    }
    else {
        cout << "нет" << endl;
    }
}