#include <iostream>
#include <algorithm>

using namespace std;

void showa(int b[],int m) {
	for (int a = 0; a < m; a++) {
		cout << b[a] << " ";
	}
}
int main()
{
	int a[] = { 0,7,-8,3,-14211,8,90,32 };
	int mege8os = sizeof(a) / sizeof(a[0]);
	showa(a, mege8os);
	sort(a, a + mege8os);
	cout << endl << "The table is unsorted " << endl;
	showa(a, mege8os);
	cout << endl << "The table is sorted " << endl;
	sort(a, a + mege8os,greater<int>());
	showa(a, mege8os);
	cout << endl << "The table is sorted from positive to negative" << endl;
	return 0;
}