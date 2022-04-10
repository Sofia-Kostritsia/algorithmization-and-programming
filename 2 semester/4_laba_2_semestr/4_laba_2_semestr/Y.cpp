#include "Y.h"
#include "time.h"
#include <iostream>
using namespace std;

Y::Y():X(0, 0) { y = rand() % 20 + (-10); }
Y::Y(int set_y) : X(0, 0) { y = set_y; }
Y::Y(int set_y, int set_x1) : X(set_x1, 0) { y = rand() % 20 + (-10); x1 = rand() % 20 + (-10); }
Y::Y(int set_y, int set_x1, int set_x2) : X(x1, x2) { y = rand() % 20 + (-10); x1 = rand() % 20 + (-10); x2 = rand() % 20 + (-10); }
int Y::GetY() { return y; }
int Y::GetX1() { return x1; }
int Y::GetX2() { return x2; }
void Y::SetY(int new_y) { y = new_y; }
void Y::SetX1(int new_x1) { x1 = new_x1; cout << "setX1 " << endl; }
void Y::SetX2(int new_x2) { x2 = new_x2; }
Y::~Y() { cout << " Деструктор для У працює! " << endl; }
