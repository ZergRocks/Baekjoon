#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int dwarfs[9];
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    cin >> dwarfs[i];
    sum += dwarfs[i];
  }
  int target = sum - 100;

  for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (dwarfs[i] + dwarfs[j] == target) {
        dwarfs[i] = 0;
        dwarfs[j] = 0;
        sort(dwarfs, dwarfs + 9);
        for (int i = 2; i < 9; ++i) {
          cout << dwarfs[i] << '\n';
        }
        return 0;
      }
    }
  }
}
