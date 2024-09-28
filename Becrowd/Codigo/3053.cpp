#include <iostream>
using namespace std;

int main() {
    int n, t;
    char A;
    cin >> n >> A;

    for(int i = 0; i < n; i++){
        cin >> t;
        if(t == 1){
            if(A == 'A' || A == 'B'){
                if(A == 'A') A = 'B';
                else A = 'A';
            }
        }
        if(t == 2){
            if(A == 'C' || A == 'B'){
                if(A == 'C') A = 'B';
                else A = 'C';
            }
        }
        if(t == 3){
            if(A == 'A' || A == 'C'){
                if(A == 'A') A = 'C';
                else A = 'A';
            }
        }
    }

    cout << A << endl;

    return 0;
}