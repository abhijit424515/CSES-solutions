#include<bits/stdc++.h>
using namespace std;
const int M = 1000000007;
 
int fast_pow_mod(int x) {
  long int p = 2;
  int result = 1, n = x;
  
  while (n>0) {
    if (n%2 == 1) result = (result*p) % M;
    p = (p*p) % M;
    n = n/2;
  }
  
  return result;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n; cin >> n;
  cout << fast_pow_mod(n);
}