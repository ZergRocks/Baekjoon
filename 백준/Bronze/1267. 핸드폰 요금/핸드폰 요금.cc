#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  int result_y = 0, result_m = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int call_time, charge_y, charge_m;
    cin >> call_time;

    result_y += (call_time / 30 + 1) * 10;
    result_m += (call_time / 60 + 1) * 15;
  }

  if (result_y < result_m) {
    cout << 'Y' << ' ' << result_y;
  } else if (result_y > result_m) {
    cout << 'M' << ' ' << result_m;
  } else {
    cout << 'Y' << ' ' << 'M' << ' ' << result_y;
  }
}
