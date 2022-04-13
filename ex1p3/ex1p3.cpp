#include <iostream>
#include <algorithm>
#include "../dsa/dsaUtils.h"
using namespace std;
int main()
{
	const int CNT = 30;
	int* p = new int[CNT];
	RandomizeData(p, CNT);
	Show(p, p + CNT);
	int k = 50;
	auto loc = find(p, p + CNT, k);
	if (loc != p + CNT)
		cout << "數據中包含元素值為" << k << endl;
	else
		cout << "數據中不包含元素值為" << k << endl;

	int x = 40;
	int y = 90;

	auto result = find_if(p, p + CNT, [=](int i) {return i > x && i < y; });
	if (result != p + CNT)
	{
		cout << "數據中第一個大於40小於90的數";
		cout << *result << endl;
	}
	return 0;
}