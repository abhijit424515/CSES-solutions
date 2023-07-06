#include<bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
 
  int t; cin >> t;
  long long int x,y;
  for (int i = 0; i < t; i++) {
    cin >> y >> x;
 
    if (x>=y) {
      if (x%2) cout << x*x - y + 1 << endl;
      else cout << (x-1)*(x-1) + y << endl;
    }
    else {
      if (y%2) cout << x + (y-1)*(y-1) << endl;
      else cout << y*y + 1 - x << endl;
    }
  }
}