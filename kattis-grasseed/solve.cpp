#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  float c;
  int l;
  cin >> c >> l;
  float num = 0;
  for (int i = 0; i < l; i++) {
    float width, length;
    cin >> width >> length;
    float area = c * width * length;
    num += area;
  }
  printf("%.7f", num);
}
