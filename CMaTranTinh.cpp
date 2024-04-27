#include "CMaTranTinh.h"

istream& operator >> (istream& c, CMaTranTinh& matrix) {
	cout << "Nhap so hang: ";
	c >> matrix.n;
	cout << "Nhap so cot: ";
	c >> matrix.m;

	for (int i = 0; i < matrix.n; i++) {
		cout << "Nhap phan tu hang thu " << i + 1 << ": ";
		for (int j = 0; j < matrix.m; j++) {
			c >> matrix.a[i][j];
		}
	}
	return c;

}
ostream& operator << (ostream& c,   CMaTranTinh matrix) {
	cout << "Ma tran la: " << endl;
	for (int i = 0; i < matrix.n; i++) {
		for (int j = 0; j < matrix.m; j++) {
			c << matrix.a[i][j]<<" ";
		}
		c << endl;
	}
	return c;
}