#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> a = { 1, 2, 100, -200, 300 };
	int start = 0;
	int current = 0;
	int summ = a[0];
	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size(); ++i) {
		current += a[i];
		if (current >= summ) {
			summ = current;
			y = i;
			x = a[i] == summ ? i : start;
		}
		if (i == a.size() - 1) {
			++start;
			i = start-1;
			current = 0;
		}
	}

	cout << "X: " << x << ", Y: " << y << ", Summ: " << summ << endl;

	return 0;
}