// 函数重叠.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double max(double f1, double f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}
inline int max(int n1, int n2 = 20)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}
inline int max(int n1, int n2, int n3)
{
	int temp = 0;
	if (n1 > n2)
		n1 = temp;
	else
		n2 = temp;
	if (n3 > temp)
		return n3;
	else
		return temp;
}
double max(double n1, double n2, double n3)
{
	double temp;
	if (n1 > n2)
		temp = n1;
	else
		temp = n2;
	if (n3 > temp)
		return n3;
	else
		return temp;
}
int main()
{
	cout << max(60, 61) << endl;
	cout << max(15) << endl;
	cout << max(23, 24, 25) << endl;
	cout << max(25) << endl;
	return 0;
}
