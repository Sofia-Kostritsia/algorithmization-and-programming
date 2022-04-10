#pragma once
#ifndef Y_H
#define Y_H
#include "X.h"

class Y: public X
{
public:
	Y();
	Y(int set_y);
	Y(int set_x1, int set_x2);
	Y(int set_x1, int set_x2, int set_y);
	int GetY();
	int GetX1();
	int GetX2();
	void SetY(int new_y);
	void SetX1(int new_x1);
	void SetX2(int new_x2);
	virtual ~Y();

protected:
	int y;

};

#endif