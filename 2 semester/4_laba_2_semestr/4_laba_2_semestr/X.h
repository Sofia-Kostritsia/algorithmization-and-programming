#pragma once
#ifndef X_H
#define X_H

class X
{
public: 
	
	X(int set_x1, int set_x2);
	X();
	virtual int GetX1();
	virtual int GetX2();
	virtual int GetY();
	virtual void SetX1(int new_x1);
	virtual void SetX2(int new_x2);
	~X();
protected:
	int x1, x2;
};

#endif;