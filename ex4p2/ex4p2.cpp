#include<iostream>
#include<string>
#include"../dsa/SequencedList.cpp"
using namespace std;
int main()
{
	sqlist* s = new sqlist(20);
	int arr[5] = { 1,2,3,4,5 };
	int a = 0;
	s->CreatList(arr, 5);
	s->Display();
	s->pushback(6);
	cout << s->getlength() << endl;
	s->insert(1, 0);
	cout << a << endl;
	s->Display();
	return 0;
}