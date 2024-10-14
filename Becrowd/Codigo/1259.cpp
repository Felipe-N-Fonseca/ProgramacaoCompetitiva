#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  list<int> par;
  list<int> impar;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a;
    if(a%2 == 0) par.push_back(a);
    else impar.push_back(a);
  }

  par.sort();
  impar.sort();

  for(int x : par){
    cout << x << endl;
  }
  for(int x = impar.size(); x > 0; x--){
    cout << impar.back() << endl;
    impar.pop_back();
  }
  
  return 0;
}