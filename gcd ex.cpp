#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (n>1 && m>1)cout << min(n, m) / 2 << endl;
    else cout<<"1"<<endl;
  }
  return 0;
}