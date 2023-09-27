#include <iostream>
#include <cmath>
using namespace std;
//题目：编写一个程序，从键盘输入a, op, b。其中a, b为数值；op为字符，
//限制为+、-、*、/ 。 
//计算表达式a op b的值, 并输出结果；如果不是 + 、 - 、 * 、 / ,则显示error 。

int main303()
{
	double a, b;
	char op;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "input data error!" << endl;
			break;
		}
		cout << a / b << endl;
		break;
	default:
		cout << "error" << endl;
		break;
	}


	return 0;
}