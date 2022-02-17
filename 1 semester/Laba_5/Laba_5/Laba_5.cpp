#include "windows.h"
#include <iostream>
#include <time.h>
using namespace std;
int regim, c;
int line, column;
int null[1] = { 0 };
int mas[8][8] = {};

void err(int umova) {
    if (umova) {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        c++;
    }
}

void massiv(int start, int to, int krok, int start1, int to1, int krok1) {
    for (int i = start; i < to; i += krok)
    {
        for (int j = start1; j < to1; j += krok1) {
            cout << mas[i][j] << '\t';
        }
        cout << "\n \n";
    }
}

void rand_massiv(int start, int to, int krok, int start1, int to1, int krok1) {
    srand(time(0));
    for (int i = start; i < to; i += krok) {
        for (int j = start1; j < to1; j += krok1) {
            mas[i][j] = rand() % 200 + (-100);
            cout << mas[i][j] << '\t';
        }
        cout << "\n\n";
    }
}

void massiv_cout(int start, int to, int krok, int start1, int to1, int krok1) {
    for (int i = start; i < to; i += krok)
    {
        for (int j = start1; j < to1; j += krok1) {
        p3: cout << '\n' << "Введiть " << i << j << "-ий елемент у дiапазонi вiд -100 до 100: ";
            cin >> mas[i][j];
            err(cin.fail());
            if (c == 1) {
                c = 0;
                goto p3;

            }
        }
    }
}

void massiv_zamina(int start, int to, int krok, int start1, int to1, int krok1) {
    for (int i = start; i > to; i += krok)
    {
        for (int j = start1; j < to1; j += krok1) {
            cout << mas[i][j] << '\t';

        }
        cout << '\n' << endl;
    }


}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "Завдання програми:  порахувати кiлькiсть додатнiх елементiв масиву. Але спершу ";
p2: cout << "\n виберiть режим наповнення масиву числами: \n \n 1 - вручну з клавiатури; \n 2 - автоматично рандомно; " << endl;
    cin >> regim;

    err((regim != 1) && (regim != 2));
    if (c == 1) {
        c = 0;
        goto p2;
    }
    if (regim == 1) {
        cout << '\n' << "Ви вибрали режим введення з клавiатури:" << endl;
        massiv_cout(0, 9, 1, 0, 9, 1);
        cout << '\n' << "Mасив:\n" << endl;
        massiv(0, 9, 1, 0, 9, 1);
    }
    if (regim == 2) {
        cout << '\n' << "Ви вибрали автоматичний рандомний режим введення:" << endl;
        cout << '\n' << "Масив:" << endl;
        rand_massiv(0, 9, 1, 0, 9, 1);
    }
    cout << "\nMassiv\n\n";
    massiv_zamina(8, 3, -1, 0, 9, 1);
    massiv_zamina(3, -1, -1, 0, 9, 1);
}