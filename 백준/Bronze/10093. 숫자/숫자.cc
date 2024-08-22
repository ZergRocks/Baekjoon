#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, start, end;
  cin >> a >> b;
  start = min(a, b);
  end = max(a, b);
  if (start < end) {
    cout << end - start - 1 << '\n';
    for (int i = start + 1; i < end; i++) {
      cout << i << ' ';
    }
    return 0;
  } else {
    cout << 0;
  }
}
