#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../dsa/CStu.h"
using namespace std;
int main()
{
	int a[5] = { 1,2,3,4,5 };
	CStu s[5] = {
		{3016,"張超",17.1F, 89},
		{3053,"馬飛",19.4F, 80},
		{3041,"劉羽",21.0F,96},
		{3025,"劉備", 18.5, 79},
		{3039,"關雲",20,85}
	};

	CStu temp(s[1]);
	for (int item : a) {
		cout << item << " ";
	}
	cout << endl;
	for (const auto& item : s) {
		cout << item << endl;
	}
	for (auto& item : s) {
		item.age() = 18;
	}
	for (const auto& item : s) {
		cout << item.name() << " " << item.age() << endl;
		cout << item.str() << endl;
	}
	return 0;
}