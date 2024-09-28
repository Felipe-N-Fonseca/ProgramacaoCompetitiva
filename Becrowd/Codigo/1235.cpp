#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    string line;
    string t;

    cin >> n;
    getline(cin, line);
    for(int i = 0; i < n; i++){
        getline(cin, line);
        m = line.length()/2;
        t = line.substr(m, line.length()) + line.substr(0, m);
        for(int j = t.length()-1; j >= 0; j--)cout << t[j];
        cout << endl;
    }

    

    return 0;
}