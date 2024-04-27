#include "CHonSo.h"


istream& operator >> (istream& c, CHonSo& a) {
	cout << "Nhap phan nguyen: ";
	c >> a.nguyen;
	cout << "Nhap tu so: ";
	c >> a.tu;
	cout << "Nhap mau so: ";
	c >> a.mau;
	return c;
}
ostream& operator << (ostream& c, CHonSo a) {
	c << "Hon so la: " << a.nguyen << " " << a.tu << "/" << a.mau << endl;
	return c;
}