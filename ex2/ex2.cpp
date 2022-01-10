#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> a = { 2, 7, 11, 15 };
	int res = 9;
	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size() - 1; ++i) {
		for (int j = i+1; j < a.size(); ++j) {
			if (a[i] + a[j] == res) {
				x = i;
				y = j;
			}
		}
	}

	cout << "X: " << x << ", Y: " << y << ", Summ: " << res << endl;

	return 0;
}