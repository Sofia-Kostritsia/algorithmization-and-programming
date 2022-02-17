#include "windows.h"
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int regim;
    const int n = 200;
    int i;
    int a;
    int c = 0;
    int max = 0;
    int min = 0;
    double sum = 0;
    int d = 0;
    int index_max = 0;
    int index_min = 0;
p1: cout << "Введiть к-сть строк в масивi: ";
    cin >> i;
    int mas[n];
    if (i == char()) {
        cout << '\n' << "Сталася помилка! Символ не є числом. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        goto p1;
    }
    if (i <= 0) {
        cout << '\n' << "Сталася помилка! Кiлькiсть рядкiв не може бути вiд'ємною. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        goto p1;
    }
p2: cout << '\n' << "Введiть режим наповнення масиву чмслами: \n 1 - вручну з клавiатури; \n 2 - автоматично рандомно; " << endl;
    cin >> regim;
    if (regim != 1 && regim != 2) {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        goto p2;
    }


    if (regim == 1) {
        cout << '\n' << "Ви вибрали режим введення з клавiатури:" << endl;
        for (int a = 0; a < i; a++)
        {
        p3: cout << '\n' << "Введiть " << a + 1 << "-ий елемент у дiапазонi вiд -100 до 100: ";
            cin >> mas[a];
            if ((mas[a] < (-100)) || (mas[a] > 100)) {
                cout << "Сталася помилка! Введене значення не входить вдіапазон." << endl;
                cin.ignore();
                cin.clear();
                goto p3;
            }
            if (mas[a] == char()) {
                cout << "Сталася помилка!Введене значення не є цифрою." << endl;
                cin.clear();
                cin.ignore();

                goto p3;
            }
        }
        cout << '\n' << "Mасив:" << endl;
        for (int a = 0; a < i; a++)
        {
            cout << mas[a] << '\t';
        }
    }
    srand(time(0));
    if (regim == 2) {
        cout << '\n' << "Ви вибрали автоматичний рандомний режим введення:" << endl;
        cout << '\n' << "Масив:" << endl;
        for (int a = 0; a < i; a++) {
            mas[a] = rand() % 200 + (-100);
            if (mas[a] < 0) {
                c++;
            }
            if (c >= 2) {
                c = 0;
                mas[a] = rand() % 100;
            }
            cout << mas[a] << '\t';
        }
    }

    cout << '\n' << '\n' << "Буде здiйснена замiна мiнiмального та максимального значень послiдовностi додатнiх елементiв масиву на середнє значення для цiєї послiдовностi." << '\n' << endl;

    for (a = 0; a < i; a++) {
        if (mas[a] >= 0) {
            d++;
            sum += mas[a];
            if (d == 1) {
                index_max = a;
                index_min = a;
            }
        }
        if (mas[index_max] < mas[a]) {
            index_max = a;
        }
        if (mas[index_min] > mas[a]) {
            index_min = a;
        }
        if (mas[a] < 0) {
            d = 0;
            sum = 0;
        }


        if (d > 0 && mas[a + 1] < 0) {
            mas[index_max] = (sum / d);
            mas[index_min] = (sum / d);
        }

    }

    cout << '\n' << "Вiдредагований масив: " << '\n' << endl;
    for (int a = 0; a < i; a++) {
        cout << mas[a] << '\t';
    }
}