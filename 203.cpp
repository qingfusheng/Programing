#include <iostream>
#include<cmath>
using namespace std;
//题目：编写程序，已知任意三角形的边长，计算三角形的面积
int main203()
{
	cout << "请输入三条边的长度：";
	double a, b, c, area, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	area = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "三角形面积" << area << endl;
	return 0;
}