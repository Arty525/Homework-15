#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = { -100,-50, -5, 1, 10, 150 };
	int x = 0;
	int y = a[0];
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] > 0 && a[i] < fabs(a[x])) x = i;
		if (fabs(a[i]) > fabs(y)) y = a[i];
	}
	cout << a[x]<< ", ";
	for (int i = 1; i < 3; ++i) {
		fabs(a[x - i]) < fabs(a[x + i]) ? cout << a[x - i] << ", " << a[x + i] << ", " : cout << a[x + i] << ", " << a[x - i] << ", ";
	}
	cout << y;
	return 0;
}