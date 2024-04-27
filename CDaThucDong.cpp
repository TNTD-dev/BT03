#include "CDaThucDong.h"
#include "CDaThucTinh.h"

istream& operator >> (istream& c, CDaThucDong& a) {
	cout << "Nhap bac cua da thuc: ";
	c >> a.bac;
	a.heso = new int[a.bac];
	cout << "Nhap he so cua da thuc: ";
	for (int i = 0; i <= a.bac; i++) {
		c >> a.heso[i];
	}
	return c;
}
ostream& operator << (ostream& c, CDaThucDong a) {
	c << "Da thuc la: ";
	for (int i = 0; i <= a.bac; i++) {
		if (a.heso[i] != 0) {
			c << (a.heso[i] > 0 && i != 0 ? "+" : "") << a.heso[i] << "x^" << i;
		}
	}
	return c;
}