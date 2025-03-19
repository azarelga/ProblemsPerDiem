#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int input;
    cin >> input;
    int m = 0;
    int n;
    for (n = 1;; n++) {
      int lowerBound = n * (n - 1) / 2;
      int upperBound = (n) * (n + 1) / 2;
      if (input > lowerBound && input <= upperBound) {
        m = input - lowerBound - 1;
        break;
      }
    }
    cout << m << " " << n << endl;
  }
  return 0;
}
