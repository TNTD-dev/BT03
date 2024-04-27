#pragma once
#include<iostream>
using namespace std;
#define MAX 100
class CDaThucTinh
{
private:
	int bac;
	int heso[MAX];
public:
	CDaThucTinh() {};	
	friend istream& operator >> (istream&, CDaThucTinh&);
	friend ostream& operator << (ostream&, CDaThucTinh);
	
};

