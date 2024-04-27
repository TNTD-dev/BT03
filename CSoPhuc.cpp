#include "CSoPhuc.h"

istream& operator >> (istream& c, CSoPhuc& a) {
	cout << "Nhap phan thuc: ";
	c >> a.thuc;
	cout << "Nhap phan ao: ";
	c >> a.ao;
	return c;

}

ostream& operator << (ostream& c, CSoPhuc a) {
	c << "So phuc la: " << a.thuc << (a.ao > 0 ? "+" : "") << a.ao << "i" << endl;
	return c;
}