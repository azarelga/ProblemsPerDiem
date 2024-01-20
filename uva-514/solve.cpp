#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, x;
  int flag = 0;
  while (true) {
    cin >> n;
    if (n == 0)
      break;
    while (true) {
      stack<int> s;
      queue<int> a;
      cin >> x;
      if (x == 0) {
        cout << '\n';
        break;
      }
      a.push(x);
      for (int i = 1; i < n; i++) {
        cin >> x;
        a.push(x);
      }
      for (int i = 1; i <= n; i++) {
        s.push(i);
        while (!a.empty() && !s.empty() && a.front() == s.top()) {
          a.pop();
          s.pop();
        }
      }
      if (s.empty())
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }
}
