#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = {-100,-50, -5, 1, 10, 150 };
	int x = 0;
	int y;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] > 0 && a[i] < fabs(a[x])) x = i;
	}
	y = x;
	for (int i = x; i < a.size() && y >= 0; ++i) {
		if (i < a.size() && fabs(a[y]) < fabs(a[i])) {
			for (int j = y-1; j >= 0 && fabs(a[j]) < fabs(a[i]); --j) {
				cout << a[j] << " ";
				y = j;
			}
		}
		cout << a[i] << " ";
		if (i == a.size()-1 && y - 1 >= 0 && fabs(a[y-1]) > fabs(a[i])) {
			for (int j = y - 1; j >= 0; --j) {
				cout << a[j] << " ";
				y = j;
			}
		}

	}

	return 0;
}