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
    cout << "\n����: " << data << endl << " �i������: " << kilkist << endl << "��������: " << comment;
}
void Appointment::SetData()
{
    cout << "����i��, ���� �����, ����(dd.mm.yyyy) : ";
    cin.ignore();
    getline(cin, data);
}
void Appointment::SetComment()
{
    cout << "����i�� �������� ���� ������� : ";
    cin.ignore();
    getline(cin, comment);
}
void Appointment::SetKilkist()
{
x: cout << "����i�� �i���i��� ����� �� ������: ";
    cin >> kilkist;
    if (cin.fail())
    {
        cout << "������� �������! �� ����� ������������ ��������. ��������� �� ���." << endl;
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