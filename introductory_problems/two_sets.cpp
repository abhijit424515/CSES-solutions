#include<bits/stdc++.h>
#define rep(i,a,b,c) for (int i=a;i<b;i+=c)
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  if (n % 4 == 1 || n % 4 == 2) cout << "NO\n";
  else if (n % 4 == 0) {
    cout << "YES\n" << n/2 << endl;
    rep(i,1,n,4) cout << i << " " << i+3 << " ";
    cout << endl << n/2 << endl;
    rep(i,1,n,4) cout << i+1 << " " << i+2 << " ";
  } else {
    cout << "YES\n" << (n+1)/2 << endl;
    cout << "1 2 ";
    rep(i,4,n,4) cout << i << " " << i+3 << " ";
    cout << endl << n/2 << endl;
    cout << "3 ";
    rep(i,4,n,4) cout << i+1 << " " << i+2 << " ";
  }
}