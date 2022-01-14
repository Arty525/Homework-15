#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = { -100,-50, -5, 1, 10, 150 };
	int x = 0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] > 0 && a[i] < fabs(a[x])) x = i;
	}
	for (int i = x; i < a.size(); ++i) {
		if (fabs(a[a.size() - i]) < fabs(a[i])) {
			for (int j = a.size() - i; j >= 0 && fabs(a[j]) < fabs(a[i]); --j) {
				cout << a[j] << " ";
			}
		}
		cout << a[i] << " ";
	}

	return 0;
}