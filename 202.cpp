#include <iostream>
using namespace std;
//题目：编写程序，从键盘输入某一字符的ASCII码，程序会在屏幕上输出该字符和ASCII码
int main202()
{

	int ac;
	//char c;
	cout << "请输入一个不大于127的正整数>>";
	cin >> ac;
	//c = ac;
	cout << "字符" << (char)ac << endl;
	cout << "ASCII码" << ac << endl;
	return 0;

}