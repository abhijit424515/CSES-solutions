#include<bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s; cin >> s;
  
  int max_count = 1, current_max = 1;
  for (int i=1; i<s.length(); i++){
    if (s[i] == s[i-1]) current_max++;
    else current_max = 1;
    max_count = max(max_count,current_max);
  }
  
  cout << max_count;
}