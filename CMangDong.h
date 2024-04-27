#pragma once
#include<iostream>;
using namespace std;

class CMangDong
{
private:
	int n;
	int* a;
public:
	CMangDong(): a(NULL), n(0) {}
	
	friend istream& operator >> (istream&, CMangDong&);
	friend ostream& operator << (ostream&, CMangDong);

	~CMangDong() {
		delete[] a;
	}
};

