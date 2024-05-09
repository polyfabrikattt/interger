#include "integer.h"

integer& integer::operator+(integer value) {
	integer out(num + value.num);
	return out;
}
integer& integer::operator-(integer value) {
	integer out(num - value.num);
	return out;
}
integer& integer::operator*(integer value) {
	integer out(num * value.num);
	return out;
}
integer& integer::operator/(integer value) {
	integer out(num / value.num);
	return out;
}
integer& integer::operator%(integer value) {
	integer out(num % value.num);
	return out;
}
integer& integer::operator^(integer value) {
	int val = 1;
	for (int i = 0; i < value.num; i++) {
		val *= num;
	}
	integer out(val);
	return out;
};
integer& integer::operator-() {
	integer out(-num);
	return out;
};
int integer::getnum() {
	return num;
}