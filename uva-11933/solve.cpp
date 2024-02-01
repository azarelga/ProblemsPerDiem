#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a;
  int ansA, ansB;
  cin >> a;
  while (a != 0) {
    bitset<8> x(a);
    ansA = 0;
    ansB = 0;
    int i = 1;
    int num = 1;
    while (a) {
      if (a & 1) {
        if (i % 2) {
          ansA += num;
        } else {
          ansB += num;
        }
        i++;
      }
      num *= 2;
      a /= 2;
    }
    cout << ansA << " " << ansB << endl;
    cin >> a;
  }
}
