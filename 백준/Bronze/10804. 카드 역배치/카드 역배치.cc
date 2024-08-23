#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 21;
  int cards[n];

  for (int i = 0; i < n; i++) {
    cards[i] = i;
  }

  for (int i = 0; i < 10; i++) {
    // reverse cards
    int start, end;
    cin >> start >> end;
    reverse(cards + start, cards + end + 1);
  }

  // print cards
  for (int i = 1; i < n; i++) {
    cout << cards[i] << ' ';
  }
}
