#include "CDuongTron.h"
istream& operator >> (istream& c, CDuongTron& a) {
	cout << "Nhap toa do tam x: ";
	c >> a.x;
	cout << "Nhap toa do tam y: ";
	c >> a.y;
	cout << "Nhap ban kinh: ";
	c >> a.r;
	return c;

}
ostream& operator << (ostream& c , CDuongTron a) {
	c << "Duong tron co tam la: (" << a.x << "," << a.y << ")" << endl;
	c << "Ban kinh la: " << a.r << endl;
	return c;
}