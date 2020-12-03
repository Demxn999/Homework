#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char someText1[] = "Helloworld!";
    char someText2[] = "Helloworld?";

    cout << "Строка someText1 - "" << someText1 << "" \n";
    cout << "Строка someText2 - "" << someText2 << "" \n\n";

    cout << strcmp(someText1, someText2) << endl << endl;

    char someText3[] = "Helloworld!";
    char someText4[] = "Helloworld!";

    cout << "Строка someText3 - "" << someText3 << "" \n";
    cout << "Строка someText4 - "" << someText4 << "" \n\n";

    cout << strcmp(someText3, someText4) << endl << endl;


    char someText5[] = "Helloworld!!";
    char someText6[] = "Helloworld!";

    cout << "Строка someText5 - "" << someText5 << "" \n";
    cout << "Строка someText6 - "" << someText6 << "" \n\n";

    cout << strcmp(someText5, someText6) << endl << endl;

    return 0;
}