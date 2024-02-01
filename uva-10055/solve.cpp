#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
  long long a, b;
  while (cin >> a >> b) {
    long long ans = abs(a - b);
    cout << ans << endl;
  }
  return 0;
}
