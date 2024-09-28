#include <iostream>
#include <string>
using namespace std;

int main() {
    string inicio, destino;
    bool P = false;
    cin >> inicio >> destino;
    int auxdest1 = destino[0]-97;
    int auxdest2 = destino[1]-1;
    int auxini1 = inicio[0]-97;
    int auxini2 = inicio[1]-1;

    if(auxdest1 == auxini1-2){
        if(auxdest2 == auxini2-1 || auxdest2 == auxini2+1)P = true;
    }
    if(auxdest1 == auxini1-1){
        if(auxdest2 == auxini2-2 || auxdest2 == auxini2+2)P = true;
    }
    if(auxdest1 == auxini1+2){
        if(auxdest2 == auxini2-1 || auxdest2 == auxini2+1)P = true;
    }
    if(auxdest1 == auxini1+1){
        if(auxdest2 == auxini2-2 || auxdest2 == auxini2+2)P = true;
    }
    
    if(P)cout << "VALIDO" << endl;
    else cout << "INVALIDO" << endl;

    return 0;
}