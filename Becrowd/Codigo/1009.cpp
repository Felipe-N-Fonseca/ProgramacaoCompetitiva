#include <iostream>
using namespace std;

int main() {
    string nome;
    double Salario, vendas;
    cin >> nome >> Salario >> vendas;
    double total = Salario + (vendas*0.15);
    cout.precision(2);
    cout << fixed << "TOTAL = R$ " << total << endl;
    return 0;
}