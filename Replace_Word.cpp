//problem 01

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S, X;
        cin >> S >> X;
        
        size_t position = S.find(X);
        while (position != string::npos) {
            S.replace(position, X.size(), "#");
            position = S.find(X);
        }
        
        cout << S << endl;
    }
    return 0;
}
