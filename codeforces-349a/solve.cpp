#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  unordered_map<int, int> m;
  while (t--) {
    int n;
    cin >> n;
    m[n]++;
    if (n == 25)
      continue;
    else if (n == 50) {
      n -= 25;
      if (m[25] * 25 < n) {
        cout << "NO";
        return 0;
      } else {
        m[25] -= floor(n / 25);
      }
    } else {
      n -= 25;
      if (m[50] > 0) {
        m[50]--;
        n -= 50;
      }
      if (m[25] * 25 >= n) {
        m[25] -= floor(n / 25);
        n -= 25 * floor(n / 25);
      }
      if (n > 0) {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
}
