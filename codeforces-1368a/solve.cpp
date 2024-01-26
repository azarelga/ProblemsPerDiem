#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    ull a, b, n;
    cin >> a >> b >> n;
    ull ans = 0;
    int operations = 0;
    while (ans <= n) {
      if (a > b) {
        b += a;
      } else {
        a += b;
      }
      ans = max(a, b);
      operations++;
    }
    cout << operations << '\n';
  }
}
