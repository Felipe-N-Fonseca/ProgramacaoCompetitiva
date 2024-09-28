#include <iostream>
using namespace std;

int main() {
    char o;
    float t, s = 0;
    cin >> o;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> t;
            if(j + i > 11) s += t;
        }
    }

    if(o == 'M')s /= 66;

    cout.precision(1);
    cout << fixed << s << endl;

    return 0;
}