#include <iostream>
#include "Y.h"
using namespace std;

void Run(X& obj1, X& obj2)
{
	cout << "Добуток компонентів класів: " << (obj1.GetX1() * obj1.GetX2() * obj2.GetY()) << endl;
}

int main() {
	setlocale(LC_ALL, "ukr");
	int x1, x2;
	cout << "Введіть значення для х1: ";
	cin >> x1;
	cout << "Введіть значення для х2: ";
	cin >> x2;
	X second(x1, x2);
	Y first(2);
	
	cout << "X1: " << second.GetX1() << "/ X2: " << second.GetX2() << "/ y: " << first.GetY()<< endl;
	Run(second, first);
}