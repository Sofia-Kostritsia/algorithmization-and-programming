#ifndef LINE_H
#define LINE_H
#include<math.h>
using namespace std;

class Complex
{
private:
    double x, y;
    
public:
    
    Complex() {
        x = (rand() % 20 + (-10));
        y = (rand() % 20 + (-10));
    }
    Complex(double koef_x, double vil_y) {
        x = koef_x;
        y = vil_y;
    }
    void print() {

        cout << "\n\tz="<< x;
        if (y >= 0) {
            cout << "+";
        }
        cout << y << "i";
    }
    double GetX() {
        return x;
    }
    double GetY() {
        return y;
    }

    int modul (Complex& second) {
        double modul = sqrt(pow((x+ second.x), 2) + pow((y + second.y), 2));
        return modul;
    }
    Complex& operator +(Complex second) {
        Complex tmp((x+ second.x), (y+ second.y));
        return tmp;
    }
    Complex& operator -(Complex second) {
        Complex tmp((x-second.x), (y-second.y));
        return tmp;
    }
    Complex& operator *(Complex second) {
        Complex tmp((x*second.x), (y*second.y));
        return tmp;
    }
    Complex& operator / (Complex second) {
        Complex tmp(((x*second.x-y*second.y)/(pow(second.x,2)+pow(second.y,2))), ((y*second.x+second.y*x)/ (pow(second.x, 2) + pow(second.y, 2))));
        return tmp;
    }
    Complex& operator =(Complex second) {
        Complex tmp((x=second.x), (y=second.y));
        return tmp;
    }
};
#endif