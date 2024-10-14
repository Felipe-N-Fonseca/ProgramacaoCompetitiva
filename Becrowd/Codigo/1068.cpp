#include <bits/stdc++.h>
using namespace std;

bool valida(string v){
  int tam = v.length();
  int c = 0;
  for(int i = 0; i < tam; i++){
    if(c < 0) return false;
    if(v[i] == '(')c++;
    if(v[i] == ')')c--;
  }
  if(c == 0) return true;
  else return false;
}

int main() {
  string v;
  while(cin >> v){
    if(valida(v))cout << "correct" << endl;
    else cout << "incorrect" << endl;
  }
}