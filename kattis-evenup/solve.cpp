#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  stack<int> st;
  int x;
  cin >> x;
  st.push(x);
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (!st.empty()) {
      if ((x + st.top()) % 2 == 0)
        st.pop();
      else
        st.push(x);
    } else {
      st.push(x);
    }
  }
  cout << st.size();
}
