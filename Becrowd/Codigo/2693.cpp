#include <bits/stdc++.h>
using namespace std;

struct aluno{
  string A;
  char S;
  int C;
};

bool compara(const aluno& a, const aluno& b) {
    if (a.C != b.C)
        return a.C < b.C;
    if (a.S != b.S)
        return a.S < b.S;
    return a.A < b.A;
}

int main() {
  int q;
  while(cin >> q){
    vector<aluno> alunos;
    for(int i = 0; i < q; i++){
      aluno aux;
      cin >> aux.A >> aux.S >> aux.C;
      alunos.push_back(aux);
    }
    sort(alunos.begin(), alunos.end(), compara);
    for(aluno x : alunos){
      cout << x.A << endl;
    }
  }
  
  return 0;
}