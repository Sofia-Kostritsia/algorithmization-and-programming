#include "Doctor.h"
#include <iostream>
using namespace std;

void Doctor::err(int umova) {
    if (umova) {
        cout << "������� �������! �� ����� ������������ ��������. ��������� �� ���." << endl;
        cin.clear();
        cin.ignore();
        c++;
    }
}

Doctor::Doctor() {
    cout << "\n ����i�� i�'� �i����: ";
    getline(cin, name);

x: cout << "����i��, ���� �����, �i���i��� ������i�, ��i �� ���i�� � ��������: ";
    cin >> n;
    err(cin.fail());
    if (c == 1) {
        c = 0;
        goto x;
    }
    New = new Appointment[n];
    for (int i = 0; i < n; i++) {
        New[i].SetComment();
        New[i].SetData();
        New[i].SetKilkist();
        cout << endl;
    }
}
void Doctor::Show() {
    cout << name << endl;
    for (int i = 0; i < n; i++) {
        New[i].show();
    }
}
void Doctor::setN(int size) {
    n = size;
}
int Doctor::GetN() {
    return n;
}
string Doctor::GetName() {
    return name;
}
void Doctor::setName(int Name) {
    name = Name;
}
void Doctor::porivnania() {
    int index_min = 0;
    int max_lenght = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += New[i].kilkist;
        if (New[max_lenght].comment.length() < New[i].comment.length()) {
            max_lenght = i;
        }
        if (New[index_min].kilkist > New[i].kilkist) {
            index_min = i;
        }

        if ((i + 1) == n) {
            cout << "\n\n������ � �i�i������� �i���i��� �i��i�����i�: \n";
            New[index_min].show();
            cout << "\n\n������ � ����i����� ����������: \n";
            New[max_lenght].show();
            cout << "\n\n������� �i���i��� �i��i�����i� �� ��������: " << (sum / n) << endl << endl;
        }
    }

}