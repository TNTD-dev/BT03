#include "CPhanSo.h"

istream& operator >> (istream& c, CPhanSo& a) {
	cout << "Nhap tu so: ";
	c >> a.tu;
	cout << "Nhap mau so: ";
	c >> a.mau;
	return c;
}
ostream& operator << (ostream& c, CPhanSo a) {
	c << "Phan so la: " << a.tu << "/" << a.mau << endl;
	return c;
}
