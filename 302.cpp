#include <iostream>
#include <cmath>
using namespace std;
//题目：编写程序，测试输入的整数能否被3，5，或3与5同时整除
int main302()
{
	int x, flag;
	cin >> x;
	flag = (x % 3==0) * 1 + (x % 5==0) * 2;
	switch (flag)
	{
	case 0:
		cout << "既不能被3整除也不能被5整除" << endl;
		break;
	case 1:
		cout << "能被3但不能被5整除" << endl;
		break;
	case 2:
		cout << "能被5整除但不能被3整除" << endl;
		break;
	case 3:
		cout << "能被3和5同时整除" << endl;
		break;
	default:
		break;
	}

	return 0;
}