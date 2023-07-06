#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  long int array[n];
  for (int i=0; i<n; i++) cin >> array[i];

  long int moves = 0;

  for (int i=0; i<n-1; i++) {
    if (array[i] > array[i+1]){
      moves += array[i]-array[i+1];
      array[i+1] = array[i];
    }
  }
  cout << moves;
}