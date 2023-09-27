#include <iostream>
#include <cmath>
using namespace std;
//题目：
//企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，
//奖金可提10% ；利润高于10万元，低于20万元时，低于10万元
//部分按10% 提成，高于10万元的部分，可提成7.5 % ；20万到40万
//之间时，高于20万元的部分，可提成5 % ；40万到60万之间时高
//于40万元的部分，可提成3 % ；60万到100万之间时，高于60万元
//的部分，可提成1.5 % ，高于100万元时，超过100万元的部分按
//1 % 提成，从键盘输入当月利润I，求应发放奖金总数？

int main305()
{
	int i;
	cin >> i;
	int  bonus;
	/*int bonus1 = 100000 * 0.1;
	int bonus2 = bonus1 + 100000 * 0.075;
	int bonus4 = bonus2 + 200000 * 0.05;
	int bonus6 = bonus4 + 200000 * 0.03;
	int bonus10 = bonus6 + 400000 * 0.015;

	if (i <= 100000)
		bonus = i * 0.1;
	else if (i <= 200000)
		bonus = bonus1 + (i - 100000) * 0.075;
	else if (i <= 400000)
		bonus = bonus2 + (i - 200000) * 0.05;
	else if (i <= 600000)
		bonus = bonus4 + (i - 400000) * 0.03;
	else if (i <= 1000000)
		bonus = bonus6 + (i - 600000) * 0.015;
	else
		bonus = bonus10 + (i - 1000000) * 0.01;
	cout << "bonus = " << bonus << endl;*/

	bonus = 0;
	if (i > 1000000) {
		bonus += (i - 1000000) * 0.01;
		i = 1000000;
	}
	if (i > 600000) {
		bonus += (i - 600000) * 0.015;
		i = 600000;
	}
	if (i > 400000) {
		bonus += (i - 400000) * 0.03;
		i = 400000;
	}
	if (i > 200000) {
		bonus += (i - 200000) * 0.05;
		i = 200000;
	}
	if (i > 100000) {
		bonus += (i - 100000) * 0.075;
		i = 100000;
	}
	if (i > 0) {
		bonus += i * 0.1;
	}

	cout << "bonus = " << bonus << endl;

	return 0;


}