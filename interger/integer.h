#pragma once
#include <iostream>

using namespace std;

class integer
{
private:
	int num;
public:
	integer() {};
	integer(int num) : num(num) {};
	integer& operator+(integer value);
	integer& operator-(integer value);
	integer& operator*(integer value);
	integer& operator/(integer value);
	integer& operator%(integer value);
	integer& operator^(integer value);
	integer& operator-();
	int getnum();
};