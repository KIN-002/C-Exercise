#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v;
	v.push_back(-1);
	v.push_back(2);
	v.insert(begin(v), 0);
	cout << "int 型 vector ";
	for (auto a : v) { cout << a << ' '; }
	cout << endl;
	cout << "元素個數" << v.size() << endl;
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	cout << "capacity: " << v.capacity() << endl;
	return 0;
}