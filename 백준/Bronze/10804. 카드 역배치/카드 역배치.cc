#include <iostream>
#include <stack>
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
    stack<int> card_stack;
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
      card_stack.push(cards[i]);
    }
    for (int i = start; i <= end; i++) {
      int card = card_stack.top();
      card_stack.pop();
      cards[i] = card;
    }
  }

  // print cards
  for (int i = 1; i < n; i++) {
    cout << cards[i] << ' ';
  }
}
