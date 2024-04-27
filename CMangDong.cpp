#include "CMangDong.h"

istream& operator >> (istream& c, CMangDong& arr) {
	cout << "Nhap so luong phan tu cua mang: ";
	c >> arr.n;
	arr.a = new int[arr.n];
	for (int i = 0; i < arr.n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		c >> arr.a[i];
	}
	return c;
}
ostream& operator << (ostream& c, CMangDong arr) {
	cout << "Mang da nhap la: ";
	for (int i = 0; i < arr.n; i++) {
		cout << arr.a[i] << " ";
	}
	return c;
}