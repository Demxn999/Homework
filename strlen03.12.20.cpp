#include <iostream>
#include <cstring>                       
using namespace std;
    int main()
    {
        char input[100];
        setlocale(LC_ALL, "Russian");
        cout << "Введите строку: ";
        cin >> input;
        cout << "Строка " << input << " содержит " << strlen(input) << " символов\n";
        return 0;
    }
   