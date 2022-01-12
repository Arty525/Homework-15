#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = { -100,-50, -5, 1, 10, 15 };
	int x;

	for (int i = 0; i < a.size(); ++i) {
		for (int j = 1; j < a.size()-1; ++j) {
			if (fabs(a[j]) > fabs(a[j + 1])) {
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
			if (fabs(a[j]) < fabs(a[j - 1])) {
				x = a[j];
				a[j] = a[j - 1];
				a[j - 1] = x;
			}
		}
	}

	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << ", ";
	}
	return 0;
}
