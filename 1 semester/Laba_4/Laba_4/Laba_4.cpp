#include "windows.h"
#include <iostream>
#include <time.h>
using namespace std;
int regim;
int line, column;
int c = 0;
int null[1] = { 0 };
int mas[200][200] = {};

void err(int umova) {
    if (umova) {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        c++;
    }
}


void massiv(int l, int c) {
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++) {
            cout << mas[i][j] << " ";
            if (j == c - 1) {
                cout << endl;
            }
        }
    }
}


void rand_massiv(int l, int c) {
    srand(time(0));
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            mas[i][j] = rand() % 200 + (-100);
            cout << mas[i][j] << '\t';
            if (j == c - 1) {
                cout << '\n' << '\n';
            }
        }

    }
}


void massiv_cout(int l, int c) {
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++) {
        p3: cout << '\n' << "Введiть " << i << j << "-ий елемент у дiапазонi вiд -100 до 100: ";
            cin >> mas[i][j];
            err((mas[i][j] < (-100)) || (mas[i][j] > 100) || cin.fail());
            if (c == 1) {
                c = 0;
                goto p3;
            }
        }
    }
}


int main()
{

    setlocale(LC_CTYPE, "ukr");

    cout << '\n' << "Завдання програми:  порахувати кiлькiсть додатнiх елементiв масиву. Але спершу\n\n ";
start: cout << "виберiть кiлькiсть стовпцiв масиву: ";
    cin >> column;

    err((cin.fail()) || (column <= 0));
    if (c == 1) {
        c = 0;
        goto start;
    }

start2: cout << "\n виберiть кiлькiсть рядкiв масиву: ";
    cin >> line;

    err((cin.fail() || line <= 0));
    if (c == 1) {
        c = 0;
        goto start2;
    }

p2: cout << "\n \n виберiть режим наповнення масиву числами: \n \n 1 - вручну з клавiатури; \n 2 - автоматично рандомно; " << endl;
    cin >> regim;

    err((regim != 1 && regim != 2));
    if (c == 1) {
        c = 0;
        goto p2;
    }


    if (regim == 1) {
        cout << '\n' << "Ви вибрали режим введення з клавiатури:" << endl;
        massiv_cout(line, column);
        cout << '\n' << "Mасив:\n" << endl;
        massiv(line, column);
    }


    if (regim == 2) {
        cout << '\n' << "Ви вибрали автоматичний рандомний режим введення:" << endl;
        cout << '\n' << "Масив:" << endl;
        rand_massiv(line, column);

    }

    cout << "\nДодатнi елементи: " << '\n' << endl;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if (mas[i][j] >= 0) {
                c++;
                cout << mas[i][j] << '\t';
            }

        }
    }
    cout << '\n' << '\n' << "Кiлькiсть додатнiх елементiв: " << c << endl;
}