#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string number;
  int count[10] = {
      0,
  };
  cin >> number;
  for (char n : number) {
    count[n - '0']++;
  }
  int set_count[9] = {
      count[0],
      count[1],
      count[2],
      count[3],
      count[4],
      count[5],
      count[7],
      count[8],
      ((count[9]) + count[6]) / 2 + !!(((count[9]) + count[6]) % 2),
  };
  int result = 0;
  for (int sc : set_count) {
    result = max(result, sc);
  }
  cout << result;
}
