#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string input;
  cin >> input;
  int i = 0;
  while (i + 1 < input.length()) {
    string sub;
    sub = input.substr(i, 2);
    if (sub == "ss") {
      cout << "hiss" << endl;
      return 0;
    }
    i++;
  }
  cout << "no hiss" << endl;
}
