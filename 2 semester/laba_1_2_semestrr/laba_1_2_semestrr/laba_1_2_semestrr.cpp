#include <iostream>
#include "line.h"
using namespace std;
double k, b;
bool c = 0;

void err(int umova) {
    if (umova) {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        c++;
    }
}

void cinLine(int a) {
    k:cout << "\n  Введiть значення кутового коефiцiента(k) " << a << " прямої: ";
    cin >> k;
    err(cin.fail());
    if (c == 1) {
        c = 0;
        goto k;
    }
    b:cout << "\n  Введiть значення вiльного члена(b) " << a << " прямої: ";
    cin >> b;
    err(cin.fail());
    if (c == 1) {
        c = 0;
        goto b;
    }
}

int main()
{
    setlocale(LC_CTYPE, "ukr");

    cinLine(1);
    Line FirstLine(k, b);
    cinLine(2);
    Line secondLine(k, b);

    cout << "\n\n\tРiвняння 1 прямої:  ";
    FirstLine.printLine();
    cout << "\n\tРiвняння 2 прямої:  ";
    secondLine.printLine();

    FirstLine.perevirka(secondLine);
    return 0;
}