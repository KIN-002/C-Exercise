#include <iostream>
#include <algorithm>
#include "../dsa/dsaUtils.h"
using namespace std;
int main()
{
	const int CNT = 20;
	int a[CNT];
	//RandomizeData(a,CNT,1,-99,100);
	RandomizeData(a, CNT);
	Show(a, a + CNT);
	cout << "數據排序後:";
	sort(a, a + CNT); Show(a, a + CNT);
	cout << "數據按絕對值排序後:";
	sort(a, a + CNT, [](int x, int y) {return abs(x) < abs(y); });

	Show(a, a + CNT);
	return 0;
}