#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> a = { -2,1,-3,4,-1,2,1,-5,4 };
	int start = 0;
	int current = 0;
	int summ = a[0];
	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size(); ++i) {
		current += a[i];
		if (current > summ && i > start) {
			summ = current;
			y = i;
			x = start;

		}
		if (i == a.size() - 1 ) {
			++start;
			i = start;
			current = a[start];
		}
	}

	cout << "X: " << x << ", Y: " << y << ", Summ: " << summ << endl;

	return 0;
}