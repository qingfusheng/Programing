#include <iostream>
#include <cmath>
using namespace std;
//题目：分段函数
int main301()
{
	double x, sum;
	cout << "输入x的值";
	cin >> x;
	if (x <= 0) sum = cos(-x);
	else if (x <= 38) sum = 2 * x + 2;
	else if (x < 67) sum = x * x;
	else sum = 4 * x + 1.0 / x;
	cout << "函数值为" << sum << endl;

	return 0;
}