#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numbers[6];
	int sum = 0;
	for (int i =0; i<5; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	sort(numbers, numbers + 5);
	cout << sum / 5 << '\n';
	cout << numbers[2];
}