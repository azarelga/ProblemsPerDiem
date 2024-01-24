#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b;
  cin >> a >> b;
  cout << max(a % 10 * 100 + a / 10 % 10 * 10 + a / 100,
              b % 10 * 100 + b / 10 % 10 * 10 + b / 100)
       << '\n';
}
