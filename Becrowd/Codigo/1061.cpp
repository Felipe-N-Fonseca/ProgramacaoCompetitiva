#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int segundos, hora, minuto, dia;
    int segundos2, hora2, minuto2, dia2;
    cin >> a >> dia;
    cin >> hora >> a >> minuto >> a >> segundos;
    cin >> a >> dia2;
    cin >> hora2 >> a >> minuto2 >> a >> segundos2;

    int t, tudo1, tudo2;
    tudo1 = (((dia * 24) + hora) * 60 + minuto) * 60 + segundos;
    tudo2 = (((dia2 * 24) + hora2) * 60 + minuto2) * 60 + segundos2;
    t = tudo2 - tudo1;

    cout << t / 86400 << " dia(s)" << endl << t % 86400 / 3600 << " hora(s)" << endl  << t % 86400 % 3600 / 60 << " minuto(s)" << endl  << t % 86400 % 3600 % 60 << " segundo(s)" << endl;

    return 0;
}