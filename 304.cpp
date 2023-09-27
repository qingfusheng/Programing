#include <iostream>
#include <cmath>
using namespace std;
//题目：输入3个整数，按从大到小的顺序输出

int main304()
{
	int x, y, z;
	int temp;
	cout << "输入三个整数";
	cin >> x >> y >> z;
	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}
	if (x < z) {
		temp = x;
		x = z;
		z = temp;
	}
	if (y < z) {
		temp = y;
		y = z;
		z = temp;
	}
	cout << x << "\t" << y << "\t" << z << endl;
	return 0;
}