#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n > 0){
    list<string> brancoP, brancoM, brancoG, vermelhoP, vermelhoM, vermelhoG;
    string nome, cor, tam;
    for(int i = 0; i < n; i++){
      getline(cin, nome); // lê o \n
      getline(cin, nome);
      cin >> cor >> tam;

      if(cor == "branco"){
        if(tam == "P"){
          brancoP.push_back(nome);
        } 
        else if(tam == "M") brancoM.push_back(nome);
        else if(tam == "G") brancoG.push_back(nome);
      }else{
        if(tam == "P") vermelhoP.push_back(nome);
        else if(tam == "M") vermelhoM.push_back(nome);
        else if(tam == "G") vermelhoG.push_back(nome);
      }
    }
    brancoP.sort();
    brancoM.sort();
    brancoG.sort();
    vermelhoP.sort();
    vermelhoM.sort();
    vermelhoG.sort();
    for(string x : brancoP){
      cout << "branco P " << x << endl;
    }
    for(string x : brancoM){
      cout << "branco M " << x << endl;
    }
    for(string x : brancoG){
      cout << "branco G " << x << endl;
    }
    for(string x : vermelhoP){
      cout << "vermelho P " << x << endl;
    }
    for(string x : vermelhoM){
      cout << "vermelho M " << x << endl;
    }
    for(string x : vermelhoG){
      cout << "vermelho G " << x << endl;
    }
    cin >> n;
    if(n == 0) break;
    cout << endl;
  }
  
  return 0;
}