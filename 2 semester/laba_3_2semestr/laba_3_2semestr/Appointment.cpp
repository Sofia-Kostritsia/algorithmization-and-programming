#include "Appointment.h"
#include <iostream>
#include<math.h>
#include <string>
#include "windows.h"

Appointment::Appointment(string Data, string Comment, int Kilkist)
{
    data = Data;
    comment = Comment;
    kilkist = Kilkist;

}
Appointment::Appointment()
{
}
void Appointment::show()
{
    cout << "\nДата: " << data << endl << " Кiльксть: " << kilkist << endl << "Коментар: " << comment;
}
void Appointment::SetData()
{
    cout << "Введiть, будь ласка, дату(dd.mm.yyyy) : ";
    cin.ignore();
    getline(cin, data);
}
void Appointment::SetComment()
{
    cout << "Введiть коментар щодо прийому : ";
    cin.ignore();
    getline(cin, comment);
}
void Appointment::SetKilkist()
{
x: cout << "Введiть кiлькiсть людей на прийомі: ";
    cin >> kilkist;
    if (cin.fail())
    {
        cout << "Сталася помилка! Ви ввели неприпустиме значення. Спробуйте ще раз." << endl;
        cin.clear();
        cin.ignore();
        goto x;
    }
}
string Appointment::GetData()
{
    return data;
}
string Appointment::GetComment()
{
    return comment;
}
int Appointment::GetKilkist()
{
    return kilkist;
};