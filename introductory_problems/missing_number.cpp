#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  long int max; cin >> max;
  long int sum = 0;

  int t = 0;
  for (int i=0; i<max-1; i++){
    cin >> t; sum += t;
  }

  cout << (max)*(1+max)/2 - sum;
}