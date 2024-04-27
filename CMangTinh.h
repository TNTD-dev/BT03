#pragma once
#include<iostream>;
using namespace std;
#define MAX 1000
class CMangTinh
{
private:
	int n;
	int a[MAX];
public:
	CMangTinh() {};
	friend istream& operator >> (istream&, CMangTinh&);
	friend ostream& operator << (ostream&, CMangTinh);
};

