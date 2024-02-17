#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  string word;
  while (cin >> word ){
    list<char> l;
    auto it = l.begin();
    for (int i = 0; i < (int)word.size(); i++){
      if (word[i] == '['){
        it = l.begin();
      } else if (word[i] == ']'){
        it = l.end();
      } else {
        it = l.insert(it, word[i]);
        it++;
      }
    }
    for (auto c : l){
      cout << c;
    }
    cout << endl;
  }
}
