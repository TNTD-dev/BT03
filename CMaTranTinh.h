#pragma once
#include<iostream>
using namespace std;
#define MAX_N 100
#define MAX_M 100

class CMaTranTinh
{
private:
	int n, m;
	int a[MAX_N][MAX_M];
public:
	CMaTranTinh(){}
	friend istream& operator >> (istream&, CMaTranTinh&);
	friend ostream& operator << (ostream&,  CMaTranTinh);
};

