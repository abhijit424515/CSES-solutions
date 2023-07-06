#include<bits/stdc++.h>
using namespace std;
const int M = 10;
 
int fact_mod(int n) {
  int result = 0;
  for (int i=5; n/i>=1; i*=5) result += n/i;
  return result;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n; cin >> n;
  cout << fact_mod(n);
}