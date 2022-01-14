#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> a = { -2,1,-3,4,-1,2,1,-5,4 };
	int max = 0;
	int min = 0;
	int current = 0;
	int summ = 0;
	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size()-1; ++i) {
		if (a[i] > max) {
			max = a[i];
			x = i;
			current = 0;
		}
		current += a[i];
		if (a[i] < min) {
			min = a[i];
			y = i-1;
			summ = current - a[i];
		}
	}

	cout << "X: " << x << ", Y: " << y << ", Summ: " << summ << endl;

	return 0;
}