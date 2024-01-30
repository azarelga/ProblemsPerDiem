#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  while (n != 0) {
    vector<string> v;
    v.resize(n + 1, "");
    int idx = 0;
    for (int i = 0; i < n; i++) {
      string s1, s2;
      cin >> s1 >> s2;
      for (int len = s2.length();; idx = (idx + 1) % n) {
        if (v[idx] == "" && --len <= 0)
          break;
      }
      v[idx] = s1;
    }
    for (int i = 0; i < n; i++) {
      cout << v[i];
      if (i == n - 1)
        cout << endl;
      else
        cout << " ";
    }
    cin >> n;
  }
}
