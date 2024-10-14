#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  while(cin >> n >> q){
    vector<int> notas, consultas;
    for(int i = 0; i < n; i++){
      int aux;
      cin >> aux;
      notas.push_back(aux);
    }
    sort(notas.begin(), notas.end());
    for(int i = 0; i < q; i++){
      int aux;
      cin >> aux;
      consultas.push_back(aux);
    }
    for(int i = 0; i < q; i++){
      cout << notas[n-consultas[i]] << endl;
    }
  }
  
  return 0;
}