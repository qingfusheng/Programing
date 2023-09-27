#include <iostream>
using namespace std;
//题目：编写程序，将大写字母转换为小写字母
int main201()
{
	char uc, lc;
	cout << "请输入一个大写英文字符";
	cin >> uc;
	lc = uc - 'A' + 'a';
	cout << "字符" << uc << "的小写形式为" << lc << endl;
	return 0;
}
