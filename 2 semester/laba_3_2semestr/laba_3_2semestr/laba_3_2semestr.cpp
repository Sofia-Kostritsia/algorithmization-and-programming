#include "Appointment.h"
#include "Doctor.h"
#include <iostream>
#include<math.h>
#include <string>
#include "windows.h"
using namespace std;
string Name_of_doctor = "";

int main() {
    setlocale(LC_ALL, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Doctor* A = new Doctor();
    cout << "________________________________________________\n";
    A->porivnania();
}