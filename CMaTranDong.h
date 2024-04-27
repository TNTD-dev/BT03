#pragma once
#include<iostream>
using namespace std;
class CMaTranDong
{
private:
	int n, m;
	int **a;
public:	
	CMaTranDong(): a(NULL), n(0), m(0){}
	~CMaTranDong() {
		if (a != NULL) {
			for (int i = 0; i < n; i++) delete[] a[i];
			delete[] a;
		}
	}
	friend istream& operator >> (istream&, CMaTranDong&);
	friend ostream& operator << (ostream&, CMaTranDong);
};

