#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../dsa/CStu.h"
using namespace std;
int main()
{
	CStu s[] = {
		{3016,"張超",17.1F, 89},
		{3053,"馬飛",19.4F, 80},
		{3041,"劉羽",21.0F,96},
		{3025,"劉備", 18.5, 79},
		{3039,"關雲",20,85}
	};
	vector<CStu> stuList(s, s + 5);
	vector<CStu> stuList2{
		{3016,"張超",17.1F, 89},
		{3053,"馬飛",19.4F, 80},
		{3041,"劉羽",21.0F,96},
		{3025,"劉備", 18.5, 79},
		{3039,"關雲",20,85}
	};

	auto it = stuList.begin();
	sort(it, stuList.end());
	cout << "學生表排序後" << endl;
	for (size_t i = 0; i < stuList.size(); i++)
	{
		cout << stuList[i].name() << '\t' << stuList[i].id() << '\t' << stuList[i].score() << endl;
	}
	cout << "(range-based for)" << endl;
	for (auto& stu : s) {
		cout << stu << endl;
	}

	sort(it, stuList.end());
	cout << "排序後" << endl;

	for (size_t i = 0; i < stuList.size(); i++) {
		cout << stuList[i].name() << '\t' << stuList[i].id() << '\t' << stuList[i].score() << endl;
	}

	cout << "排序後" << endl;
	for (auto& stu : stuList) {
		cout << stu.name() << '\t' << stu.id() << '\t' << stu.score() << endl;
	}
	cout << "排序後" << endl;
	for (size_t i = 0; i < 5; i++) {
		cout << s[i].str() << endl;
	}
	cout << "排序後" << endl;
	for (auto& stu : s) {
		cout << stu.str() << endl;
	}
	return 0;
}
