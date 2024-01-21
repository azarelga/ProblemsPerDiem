#include <cmath>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, c, b;
  stack<int> s;
  cin >> n >> c;
  for (int i = 0; i < c; i++) {
    string a;
    cin >> a;
    if (a != "undo") {
      s.push(stoi(a));
    } else {
      cin >> b;
      while (b--) {
        s.pop();
      }
    }
  }
  int ans = 0;
  while (!s.empty()) {
    ans += s.top();
    ans %= n;
    while (ans < 0)
      ans += n;
    s.pop();
  }
  cout << ans;
}
