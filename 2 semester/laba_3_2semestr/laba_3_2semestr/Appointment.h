#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>

using namespace std;
class Appointment
{
public:
    Appointment();
    Appointment(string Data, string Comment, int Kilkist);
    string data = "";
    int kilkist;
    string comment = "";
    void show();
    void SetData();
    void SetComment();
    void SetKilkist();
    string GetData();
    string GetComment();
    int GetKilkist();
};

#endif