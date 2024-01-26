#include <bits/stdc++.h>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<vector<int>> v(4, vector<int>(4));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> v[i][j];
    }
  }
  int action = 0;
  vector<vector<int>> ans(4, vector<int>(4));
  for (int i = 0; i < 4; i++) {
    ans[i].resize(0);
  }
  cin >> action;
  switch (action) {
  case 0: {
    for (int i = 0; i < 4; i++) {
      deque<int> s;
      ans[i].resize(0);
      s.push_back(v[i][0]);
      for (int j = 1; j < 4; j++) {
        if (s.back() == v[i][j] && s.back() != 0) {
          s.back() += v[i][j];
          s.push_back(0);
          continue;
        }
        if (v[i][j] == 0) {
          continue;
        } else {
          if (s.back() == 0)
            s.pop_back();
          s.push_back(v[i][j]);
        }
      }
      for (int j = 0; j < 4; j++) {
        if (!s.empty()) {
          ans[i].push_back(s.front());
          s.pop_front();
        }
        cout << ans[i][j] << " ";
      }
      cout << '\n';
    }
    break;
  }
  case 1: {
    for (int i = 0; i < 4; i++) {
      deque<int> s;
      ans[i].resize(0);
      s.push_back(v[0][i]);
      for (int j = 1; j < 4; j++) {
        if (s.back() == v[j][i] && s.back() != 0) {
          s.back() += v[j][i];
          s.push_back(0);
          continue;
        }
        if (v[j][i] == 0) {
          continue;
        } else {
          if (s.back() == 0)
            s.pop_back();
          s.push_back(v[j][i]);
        }
      }
      // while (!s.empty()) {
      //   cout << s.front() << " ";
      //   s.pop_front();
      // }
      for (int j = 0; j < 4; j++) {
        if (!s.empty()) {
          ans[i].push_back(s.front());
          s.pop_front();
        }
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++)
        cout << ans[j][i] << " ";
      cout << '\n';
    }

    break;
  }
  case 2: {
    for (int i = 0; i < 4; i++) {
      deque<int> s;
      ans[i].resize(0);
      s.push_back(v[i][3]);
      for (int j = 2; j >= 0; --j) {
        if (s.back() == v[i][j] && s.back() != 0) {
          s.back() += v[i][j];
          s.push_back(0);
          continue;
        }
        if (v[i][j] == 0) {
          continue;
        } else {
          if (s.back() == 0)
            s.pop_back();
          s.push_back(v[i][j]);
        }
      }
      for (int j = 3; j >= 0; --j) {
        if (!s.empty()) {
          ans[i].push_back(s.front());
          s.pop_front();
        }
      }
      for (int j = 3; j >= 0; j--) {
        cout << ans[i][j] << " ";
      }
      cout << '\n';
    }
    break;
  }
  case 3: {
    for (int i = 0; i < 4; i++) {
      deque<int> s;
      ans[i].resize(0);
      s.push_back(v[3][i]);
      for (int j = 2; j >= 0; j--) {
        if (s.back() == v[j][i] && s.back() != 0) {
          s.back() += v[j][i];
          s.push_back(0);
          continue;
        }
        if (v[j][i] == 0) {
          continue;
        } else {
          if (s.back() == 0)
            s.pop_back();
          s.push_back(v[j][i]);
        }
      }
      for (int j = 3; j >= 0; --j) {
        if (!s.empty()) {
          ans[i].push_back(s.front());
          s.pop_front();
        }
      }
    }
    for (int j = 3; j >= 0; j--) {
      for (int i = 0; i < 4; i++)
        cout << ans[i][j] << " ";
      cout << '\n';
    }
    break;
  }
  }
}
