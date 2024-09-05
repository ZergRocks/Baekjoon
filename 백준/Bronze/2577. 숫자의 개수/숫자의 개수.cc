#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  int count[10] = {
      0,
  };
  cin >> a >> b >> c;
  string result = to_string(a * b * c);
  for (char s : result) {
    count[s - '0']++;
  }
  for (int c : count) {
    cout << c << '\n';
  }
}
