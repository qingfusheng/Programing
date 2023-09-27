#include <iostream>
#include <iomanip>
using namespace std;
//题目：编写程序，从键盘输入一个字符，
//然后在屏幕上输出该字符开头的连续3个字符以及对应ASCII码
int main204()
{
	char c;
	cout << "请输入一个字符>>";
	cin >> c;
	cout << "字符" << "  " << "ASCII码" << endl;
	cout << setw(4) << c << "  " << setw(7) << (int) c << endl;
	cout << setw(4) << char(c + 1) << "  " << setw(7) << (int)(c+1) << endl;
	cout << setw(4) << char(c + 2) << "  " << setw(7) << (int)(c+2) << endl;
	return 0;
}