#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
int main()
{
	int Rand[20];
	srand((unsigned)time(NULL));
	for (int i = 0; i < 20; i++)
		Rand[i] = (int)99 * rand() / (RAND_MAX + 1);
	for (int i = 0; i < 20; i++)
		cout << Rand[i] << '\t';
	cout << "排序後： " << endl;
	sort(Rand, Rand + 20);
	for (int i = 0; i < 20; i++)
		cout << Rand[i] << '\t';
	return 0;
}