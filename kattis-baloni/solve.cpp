#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v;
  v.resize(1000001);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v[x]++;
    if (v[x + 1] != 0) {
      v[x + 1]--;
    } else {
      ans++;
    }
  }
  cout << ans << '\n';
}
