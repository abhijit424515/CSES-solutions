#include<bits/stdc++.h>
#define li long int
using namespace std;
 
li diff_ans(li n) {
  if (n == 1) return 6;
  if (n == 2) return 22;
  return ((2*n+3)*n-7)*n+8;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n; cin >> n;
  li sum = 0;
 
  for (li i = 1; i <= n; i++) {
    cout << sum << endl;
    if (i == n) break;
    sum += diff_ans(i);
  }
}