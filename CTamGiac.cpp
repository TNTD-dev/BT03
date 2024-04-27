#include "CTamGiac.h"

istream& operator >> (istream& c, CTamGiac& t ) {
	cout << "Nhap toa do diem A: "<<endl;
	c >> t.a;
	cout << "Nhap toa do diem B: "<<endl;
	c >> t.b;
	cout << "Nhap toa do diem C: "<<endl;
	c >> t.c;
	return c;
	
}
ostream& operator << (ostream& c, CTamGiac t) {
	c << "Tam giac co 3 dinh la: " << endl;
	c << "Dinh A: " << t.a;
	c << "Dinh B: " << t.b;
	c << "Dinh C: " << t.c;

	return c;
}