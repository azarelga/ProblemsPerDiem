#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> gis;
  int x;
  cin >> x;
  int curMax = x;
  gis.push_back(curMax);
  while (n--) {
    cin >> x;
    if (curMax < x) {
      curMax = x;
      gis.push_back(curMax);
    } else {
      continue;
    }
  }
  cout << gis.size() << '\n';
  for (auto i : gis) {
    cout << i << ' ';
  }
}
