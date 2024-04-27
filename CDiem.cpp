#include "CDiem.h"

istream& operator >> (istream& c, CDiem& a) {
	cout << "Nhap hoanh do x: ";
	c >> a.x;
	cout << "Nhap tung do y: ";
	c >> a.y;
	return c;
}
ostream& operator << (ostream&c, CDiem a) {
	c <<"(" << a.x << "," << a.y<<")" << endl;
	return c;
}
