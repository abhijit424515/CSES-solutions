#include<bits/stdc++.h>
using namespace std;
 
bool pile(int a, int b) {
  if (a == b) return a%3 == 0;
  if (a > 2*b || b > 2*a) return 0;
  if (a > b) return (2*b-a)%3 == 0;
  if (b > a) return (2*a-b)%3 == 0;
  return true;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int a,b; cin >> a >> b;    
    cout << (pile(a,b) ? "YES\n" : "NO\n");
  }
}
