#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../dsa/Student.h"
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(-1); v.push_back(2); v.insert(begin(v), 0);
	for (auto a : v) { cout << a << ' '; }
	cout << endl;
	Student s[] = { {3016,"張超",12.1,89},{3053,"馬飛",19.4,80},{3041,"劉羽",21,96},{3025,"劉備",18.5,79},{3039,"關雲",20,85} };
	vector<Student> stuList(s, s + 5);
	vector<Student> stuList2{ {3016,"張超",12.1,89},{3053,"馬飛",19.4,80},{3041,"劉羽",21,96},{3025,"劉備",18.5,79},{3039,"關雲",20,85} };
	auto it = stuList.begin();
	sort(it, stuList.end());
	cout << "學生表排序後" << endl;
	for (size_t i = 0; i < stuList.size(); i++)
		cout << stuList[i].name << '\t' << stuList[i].id << '\t' << stuList[i].score << endl;

	cout << "(range-based for)" << endl;
	for (auto& stu : stuList)
		cout << stu.name << '\t' << stu.id << '\t' << stu.score << endl;

	cout << "str()" << endl;
	for (size_t i = 0; i < 5; i++)
		cout << s[i].str() << endl;

	cout << "(range-based for) && <<" << endl;
	for (auto& stu : s)
		cout << stu << endl;
	return 0;
}