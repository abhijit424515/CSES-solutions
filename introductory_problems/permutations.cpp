#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=a;i<b;i++)
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
 
  if (n == 1) cout << 1;
  else if (n < 4) cout << "NO SOLUTION";
  else if (n == 4) cout << "2 4 1 3";
  else if (n%2 == 0) {
    cout << (n+2)/2 << " ";
    rep(i,0,(n-2)/2) cout << 1+i << " " << n-i << " ";
    cout << n / 2;
  }
  else {
    cout << (n+1)/2 << " ";
    rep(i,0,(n-3)/2) cout << 1+i << " " << n-i << " ";
    cout << (n-1)/2 << " " << (n+3)/2 << " ";
  }
}