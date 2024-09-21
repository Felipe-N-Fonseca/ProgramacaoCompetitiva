#include <iostream>
using namespace std;

int main() {
    int n, ano, mes, dia;
    cin >> n;
    ano = n/365;
    mes = n%365/30;
    dia = n%365%30;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;
}