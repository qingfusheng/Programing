#include <iostream>
#include <cmath>
using namespace std;
//题目：编写程序，依次输入a、b、c 的值，计算一元二次方程ax^2+bx+c=0的根。
//要求：
//在a, b, c输入后
//1）若a = 0，输出错误提示 "该方程不是一元二次方程"，结束程序；
//2）若△ = b * b - 4ac > 0，输出两个不等的实根
//3）若△ = b * b - 4ac = 0，输出实根
//4）若△ = b * b - 4ac < 0，输出两个复数根


int main306()
{
	double a, b, c;
	double dt;
	cin >> a >> b >> c;
	if (a == 0) {
		cout << "该方程不是一元二次方程" << endl;
	}
	else {
		dt = b * b - 4 * a * c;
		if (dt == 0) cout << -b / (2 * a) << endl;
		else if (dt > 0)
			cout << (-b + sqrt(dt)) / (2 * a)
			<< '\t'
			<< (-b - sqrt(dt)) / (2 * a) << endl;
		else cout << -b / (2 * a) << '+' << sqrt(-dt) / (2 * a)
			<< 'i'
			<< '\t' << -b / (2 * a) << '-' << sqrt(-dt) / (2 * a) << 'i' << endl;

	}

	return 0;
}