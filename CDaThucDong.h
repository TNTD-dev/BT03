#pragma once
#include<iostream>
using namespace std;
class CDaThucDong
{
private:
	int bac;
	int *heso;
public:
	CDaThucDong(): heso(NULL), bac(0) {};
	~CDaThucDong() {
		delete[] heso;
	}
	friend istream& operator >> (istream&, CDaThucDong&);
	friend ostream& operator << (ostream&, CDaThucDong);

};

