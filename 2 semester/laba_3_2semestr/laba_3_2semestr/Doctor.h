#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include "Appointment.h"

using namespace std;
class Doctor
{
public:
    Doctor();
    void Show();
    void err(int umova);
    void setN(int size);
    int GetN();
    string GetName();
    void setName(int Name);
    void porivnania();

private:
    int n;
    int c = 0;
    string Name_of_doctor = "";
    Appointment* New;
    string name = "";
};
#endif 