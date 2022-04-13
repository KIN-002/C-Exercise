#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	queue <int> q1;
	for (size_t i = 0; i < 10; i++) { q1.push(i * 2); }

	cout << "What`s in the queue: " << endl;
	queue <int> q2(q1);
	for (size_t i = 0; i < q1.size(); i++)
	{
		cout << q2.front() << ' ';
		q2.pop();
	}
	cout << endl;

	stack<int> s1;
	int cnt = q1.size();
	for (size_t i = 0; i < cnt; i++)
	{
		s1.push(q1.front());
		q1.pop();
	}
	stack<int> s2(s1);
	cout << "What`s in the stack: " << endl;
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s2.top() << ' ';
		s2.pop();
	}
	cout << endl;
	return 0;
}