#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//根据输入的球半径，分别计算球的表面积、体积（圆周率=3.1415）,
//并输出计算结果



int main()
{
	const double pi = 3.1415;

	double v, s;
	int r;
	cout << "请输入球体半径:";
	cin >> r;
	v = 4.0 / 3 * pi * r * r * r;
	s = 4 * pi * r * r;
	cout << setiosflags(ios::fixed) << setprecision(4);
	cout << "半径" << r << "的球体体积为" << v << endl;
	cout << "半径" << r << "的球体表面积为" << s << endl;
	return 0;

}