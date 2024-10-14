#include <bits/stdc++.h>
using namespace std;

int main() {
  int x[20001];
  int n, p;
  cin >> n;

  for(int i = 0; i <= 20000; i++){
    x[i] = 0;
  }
  
  for(int i = 0; i < n; i++){
    cin >> p;
    x[p]++;
  }

  for(int i = 0; i <= 20000; i++){
    if(x[i] > 0)cout << i << " aparece " << x[i] << " vez(es)" << endl;
  }
  
  return 0;
}