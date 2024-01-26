#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  unordered_map<char, char> m;
  for (int i = 0; i < 26; i++) {
    m[s1[i]] = s2[i];
    m[s1[i] - 32] = s2[i] - 32;
  }
  for (char c : s3) {
    if (m.find(c) != m.end()) {
      cout << m[c];
    } else {
      cout << c;
    }
  }
}
