#include "X.h"
#include "time.h"
#include <iostream>
using namespace std;

X::X(int set_x1, int set_x2) {
	x1 = set_x1;
	x2 = set_x2;
}
X::X() {
	x1 = rand() % 20 + (-10);
	x2 = rand() % 20 + (-10);
}
int X::GetX1() {return x1;}
int X::GetX2() {return x2;}
int X::GetY() { return 0; };
void X::SetX1(int new_x1) { x1 = new_x1; }
void X::SetX2(int new_x2) { x2 = new_x2; }
X::~X() { cout << " Деструктор Х працює! " << endl; }