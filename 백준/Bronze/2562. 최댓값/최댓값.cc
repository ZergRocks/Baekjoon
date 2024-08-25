#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int max_value = 0;
  int max_index;
  for (int i = 0; i < 9; i++) {
  	int value;
	cin >> value;
	if (value > max_value) {
		max_value = value;
		max_index = i;
	}
  }
  cout << max_value << '\n' << max_index + 1;
}
