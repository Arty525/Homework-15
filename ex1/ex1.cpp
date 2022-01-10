#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> a = { -2,1,-3,4,-1,2,1,-5,4 };
	int max = 0;
	int x = 0;
	int y = 0;

	for (int i = 0; i < a.size()-1; ++i) {
		int current = 0;
		for (int j = i; j < a.size(); ++j) {
			current += a[j];
			if (current >= max) {
				max = current;
				x = i;
				y = j;
			}
		}
	}

	cout << "X: " << x << ", Y: " << y << ", Summ: " << max << endl;

	return 0;
}