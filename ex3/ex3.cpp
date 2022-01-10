#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> a = { 0 };
	int x = 0;

	for (int i = 0; x != -2; ++i) {
		cout << "X: ";
		cin >> x;
		a[i] = x;
		if (a.size() > 1 && a[i] < a[i - 1]) {
			for (int j = a.size() - 1; x < a[j - 1]; --j) {
				a[j] = a[j - 1];
				a[j - 1] = x;
			}
		}
		a.resize(a.size() + 1);
	}
	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << ", ";
	}


	return 0;
}
