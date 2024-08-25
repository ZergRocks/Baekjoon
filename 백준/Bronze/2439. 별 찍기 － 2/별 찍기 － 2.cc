#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int n;
  cin >> n;

  // lines
  for (int i = 0; i < n; i++) {

    // space
    for (int j = 0; j < n - i - 1; j++) {
      cout << ' ';
    }

    // star
    for (int j = 0; j <= i; j++) {
      cout << '*';
    }

    cout << '\n';
  }
}
